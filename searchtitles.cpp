#include "lvgl/lvgl.h"
#include <iostream>
#include <string>
#include "BackendManager.hpp" // Include your BackendManager.hpp file

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
    }

    void run() {
        createSearchUI();
        while (1) {
            lv_task_handler();
            usleep(5000); // Sleep for a while to control the loop rate
        }
    }

private:
    BackendManager backendManager; // Create an instance of BackendManager

    void createSearchUI() {
        lv_obj_t* scr = lv_disp_get_scr_act(NULL);
        lv_obj_t* search_label = lv_label_create(scr, NULL);
        lv_label_set_text(search_label, "Search for eBook:");

        search_input = lv_textarea_create(scr, NULL);
        lv_textarea_set_one_line(search_input, true);
        lv_obj_set_width(search_input, 200);
        lv_obj_align(search_input, search_label, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 10);

        lv_obj_t* search_button = lv_btn_create(scr, NULL);
        lv_obj_align(search_button, search_input, LV_ALIGN_OUT_RIGHT_MID, 10, 0);
        lv_obj_t* search_button_label = lv_label_create(search_button, NULL);
        lv_label_set_text(search_button_label, "Search");

        lv_obj_set_event_cb(search_button, [](lv_obj_t*, lv_event_t event) {
            if (event == LV_EVENT_CLICKED) {
                // When the search button is clicked, perform the search
                const char* query = lv_textarea_get_text(search_input);
                searchForEBooks(query);
            }
        });
    }

    void searchForEBooks(const char* query) {
        // Use the query to search for eBook titles in the backend
        // Call the BackendManager's find function to get the results
        unsigned long ebookUUID = backendManager.find(true, query);

        // Update the GUI to display the search results
        // Replace with your LVGL code to update the search results UI
        lv_obj_t* scr = lv_disp_get_scr_act(NULL);
        lv_obj_t* result_label = lv_label_create(scr, NULL);
        lv_label_set_text(result_label, "Search Results:");
        lv_obj_align(result_label, search_input, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 20);

        // Display the search result (eBook UUID)
        // Replace "ebookUUID" with the actual search result
        lv_obj_t* result_text = lv_label_create(scr, NULL);
        lv_label_set_text_fmt(result_text, "Found eBook UUID: %lu", ebookUUID);
        lv_obj_align(result_text, result_label, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 10);
    }

    lv_obj_t* search_input;
};

int main() {
    GUI gui;
    gui.run(); // Start the LVGL GUI application

    return 0;
}
