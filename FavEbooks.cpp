#include "lvgl/lvgl.h"
#include <iostream>
#include <string>
#include <vector>

// Define a structure to represent an eBook
struct Ebook {
    std::string title;
    bool isFavorite;

    Ebook(const std::string& _title) : title(_title), isFavorite(false) {}
};

class GUI {
public:
    GUI() {
        lv_init();
        lv_disp_drv_t disp_drv;
        lv_disp_drv_init(&disp_drv);
        lv_disp_drv_register(&disp_drv);
        lv_indev_drv_t indev_drv;
        lv_indev_drv_init(&indev_drv);
        lv_indev_drv_register(&indev_drv);

        // Initialize  list of eBooks and favorites
        initEBooks();
        createUI();
    }

    void run() {
        while (1) {
            lv_task_handler();
            usleep(5000); // Sleep for a while to control the loop rate
        }
    }

private:
    std::vector<Ebook> ebooks; // List of eBooks
    std::vector<unsigned long> favorites; // List of favorite eBook IDs

    void initEBooks() {
        // Initializing list of eBooks here
        ebooks.push_back(Ebook("EBook 1"));
        ebooks.push_back(Ebook("EBook 2"));
        ebooks.push_back(Ebook("EBook 3"));
        // Add more eBooks as needed
    }

    void createUI() {
        lv_obj_t* scr = lv_disp_get_scr_act(NULL);
        lv_obj_t* ebook_list = lv_list_create(scr, NULL);
        lv_obj_set_width(ebook_list, LV_HOR_RES);
        lv_list_set_scroll_propagation(ebook_list, true);

        // Create list items for each eBook
        for (size_t i = 0; i < ebooks.size(); i++) {
            lv_obj_t* list_btn = lv_list_add_btn(ebook_list, NULL, ebooks[i].title.c_str());
            lv_obj_t* fav_btn = lv_btn_create(list_btn, NULL);
            lv_obj_t* fav_label = lv_label_create(fav_btn, NULL);
            lv_label_set_text(fav_label, "Favorite");

            // Set an event handler for the favorite button
            lv_obj_set_event_cb(fav_btn, [](lv_obj_t* obj, lv_event_t event) {
                if (event == LV_EVENT_CLICKED) {
                    // Find the eBook corresponding to this button
                    size_t ebookIndex = lv_list_get_btn_index(obj);
                    if (ebookIndex < ebooks.size()) {
                        // Toggle the favorite status
                        ebooks[ebookIndex].isFavorite = !ebooks[ebookIndex].isFavorite;
                        // Update the button label
                        const char* newLabel = ebooks[ebookIndex].isFavorite ? "Unfavorite" : "Favorite";
                        lv_label_set_text(lv_list_get_btn_label(obj), newLabel);

                        // Add or remove the eBook ID from favorites based on its status
                        if (ebooks[ebookIndex].isFavorite) {
                            favorites.push_back(ebookIndex);
                            // Call the addWrapper function with the list ID (0) and the eBook ID (ebookIndex)
                          
                            addWrapper(0, ebookIndex);
                        } else {
                            // Remove the eBook ID from favorites
                            favorites.erase(std::remove(favorites.begin(), favorites.end(), ebookIndex), favorites.end());
                          
                        }
                    }
                }
            });
        }
    }

    // Simulated addWrapper function
    void addWrapper(unsigned long listId, unsigned long bookId) {
        // In this example, we are simulating the addition of an eBook to a list
        std::cout << "Adding eBook with ID " << bookId << " to list with ID " << listId << std::endl;
    }
};

int main() {
    GUI gui;
    gui.run(); // Start the LVGL GUI application

    return 0;
}
