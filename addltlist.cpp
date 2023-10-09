#include "lvgl/lvgl.h"
#include <iostream>
#include <string>
#include <vector>

// Simulated Reading List structure
struct ReadingList {
    std::string name;
    std::vector<std::string> titles;

    ReadingList(const std::string& _name) : name(_name) {}
};

std::vector<ReadingList> readingLists; // Simulated reading lists

lv_obj_t* titleList; // LVGL list to display titles
lv_obj_t* listBtn;   // LVGL button to create a new reading list

// Function to update the title list
void updateTitleList(int listIndex) {
    lv_obj_clean(titleList); // Clear the list

    for (const std::string& title : readingLists[listIndex].titles) {
        lv_obj_t* titleBtn = lv_list_add(titleList, nullptr, title.c_str(), nullptr);
        lv_obj_set_event_cb(titleBtn, [](lv_obj_t* obj, lv_event_t event) {
            if (event == LV_EVENT_CLICKED) {
                // Handle title click (e.g., modify or delete)
                int listIndex = lv_obj_get_free_num(obj); // Get the reading list index
                int titleIndex = lv_list_get_btn_index(titleList, obj); // Get the title index
                std::cout << "Title clicked in list " << listIndex << ", title index: " << titleIndex << std::endl;
            }
        });
        lv_obj_set_free_num(titleBtn, listIndex); // Set the reading list index as user data
    }
}

// Function to create a new reading list
void createReadingList(const char* name) {
    ReadingList newList(name);
    readingLists.push_back(newList);
}

int main(int argc, char* argv[]) {
    // Initialize LVGL and set up display driver
    lv_init();

    // Set up the display driver 

    // Create a simple LVGL screen
    lv_obj_t* screen = lv_scr_act();

    // Create a button to create a new reading list
    listBtn = lv_btn_create(screen);
    lv_obj_align(listBtn, LV_ALIGN_TOP_LEFT, 20, 20);

    lv_obj_t* listLabel = lv_label_create(listBtn);
    lv_label_set_text(listLabel, "Create Reading List");

    // Create an event handler for the "Create Reading List" button
    lv_obj_set_event_cb(listBtn, [](lv_obj_t*, lv_event_t event) {
        if (event == LV_EVENT_CLICKED) {
            // Simulated input from the user (replace with your input mechanism)
            const char* listName = "New List"; // Replace with the actual user input

            // Create a new reading list
            createReadingList(listName);

            // Update the title list with the new list
            updateTitleList(readingLists.size() - 1);
        }
    });

    // Create a list to display titles
    titleList = lv_list_create(screen);
    lv_obj_set_size(titleList, LV_HOR_RES - 40, LV_VER_RES - 120);
    lv_obj_align(titleList, LV_ALIGN_TOP_LEFT, 20, 100);

    // Main loop
    while (1) {
        lv_task_handler();
        usleep(5000); // Sleep for a while to control the loop rate
    }

    return 0;
}
