#include "lvgl/lvgl.h"
#include "lv_drivers/display/fbdev.h"
#include "lv_examples/lv_apps/demo/demo.h"
#include <iostream>
#include <string>
#include <filesystem>
#include "RenderWell/Types.hpp"
#include "RenderWell/BackendManager.hpp"

class GUI {
public:
    GUI()
        : m_Controller(RenderWell::BackendManager())
    {
    }

    void sortLibraryAtoZ() {
        // Use the SortAtoZ type from Types.hpp for sorting
        std::vector<unsigned long> uuidList = m_Controller.sort(RenderWell::k_AtoZ);

        // Update GUI to show the new UUID list ordering
        updateGUI(uuidList);
    }

    void sortLibraryZtoA() {
        // Use the SortZtoA type from Types.hpp for sorting
        std::vector<unsigned long> uuidList = m_Controller.sort(RenderWell::k_ZtoA);

        // Update GUI to show the new UUID list ordering
        updateGUI(uuidList);
    }

    void sortLibraryRecents() {
        // Use the SortRecents type from Types.hpp for sorting
        std::vector<unsigned long> uuidList = m_Controller.sort(RenderWell::k_Recents);

        // Update GUI to show the new UUID list ordering
        updateGUI(uuidList);
    }

    void sortLibraryFavorites() {
        // Use the SortFavorites type from Types.hpp for sorting
        std::vector<unsigned long> uuidList = m_Controller.sort(RenderWell::k_Favorites);

        // Update GUI to show the new UUID list ordering
        updateGUI(uuidList);
    }

private:
    BackendManager m_Controller;

    void updateGUI(const std::vector<unsigned long>& uuidList) {
        // Implement LVGL code to update your eBook icons based on the UUID list
        // You should iterate through uuidList and update your GUI accordingly
    }
};

int main(int argc, char* argv[]) {
    // Initialize LVGL and set up display driver
    lv_init();

    // Set up the display driver (replace with your driver configuration)
    fbdev_init();

    // Create LVGL buttons for sorting
    lv_obj_t* buttonAtoZ = lv_btn_create(lv_scr_act());
    lv_btn_set_fit(buttonAtoZ, LV_FIT_TIGHT);
    lv_obj_t* labelAtoZ = lv_label_create(buttonAtoZ);
    lv_label_set_text(labelAtoZ, "Sort A-Z");

    lv_obj_t* buttonZtoA = lv_btn_create(lv_scr_act());
    lv_btn_set_fit(buttonZtoA, LV_FIT_TIGHT);
    lv_obj_t* labelZtoA = lv_label_create(buttonZtoA);
    lv_label_set_text(labelZtoA, "Sort Z-A");

    lv_obj_t* buttonRecents = lv_btn_create(lv_scr_act());
    lv_btn_set_fit(buttonRecents, LV_FIT_TIGHT);
    lv_obj_t* labelRecents = lv_label_create(buttonRecents);
    lv_label_set_text(labelRecents, "Sort Recents");

    lv_obj_t* buttonFavorites = lv_btn_create(lv_scr_act());
    lv_btn_set_fit(buttonFavorites, LV_FIT_TIGHT);
    lv_obj_t* labelFavorites = lv_label_create(buttonFavorites);
    lv_label_set_text(labelFavorites, "Sort Favorites");

    GUI gui = GUI();

    // Assign event handlers for the buttons
    lv_obj_set_event_cb(buttonAtoZ, [](lv_obj_t*, lv_event_t event) {
        if (event == LV_EVENT_CLICKED) {
            gui.sortLibraryAtoZ();
        }
    });

    lv_obj_set_event_cb(buttonZtoA, [](lv_obj_t*, lv_event_t event) {
        if (event == LV_EVENT_CLICKED) {
            gui.sortLibraryZtoA();
        }
    });

    lv_obj_set_event_cb(buttonRecents, [](lv_obj_t*, lv_event_t event) {
        if (event == LV_EVENT_CLICKED) {
            gui.sortLibraryRecents();
        }
    });

    lv_obj_set_event_cb(buttonFavorites, [](lv_obj_t*, lv_event_t event) {
        if (event == LV_EVENT_CLICKED) {
            gui.sortLibraryFavorites();
        }
    });

    // Main loop
    while (1) {
        lv_task_handler();
        usleep(5000); // Sleep for a while to control the loop rate
    }

    return 0;
}
