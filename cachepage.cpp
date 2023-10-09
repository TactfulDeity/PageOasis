#include "lvgl/lvgl.h"
#include <iostream>
#include <string>
#include <fstream>

// Structure to store eBook information, including page number
struct eBookInfo {
    std::string title;
    std::string filePath;
    int pageNumber;

    eBookInfo(const std::string& _title, const std::string& _filePath, int _pageNumber)
        : title(_title), filePath(_filePath), pageNumber(_pageNumber) {}
};

// Simulated eBook cache
std::vector<eBookInfo> eBookCache; // need to use more appropriate data structure for caching

// Function to save eBook page numbers to a file
void savePageNumbersToFile(const std::string& filePath) {
    std::ofstream outFile(filePath);

    if (!outFile.is_open()) {
        // Handle file open error
        return;
    }

    for (const eBookInfo& info : eBookCache) {
        outFile << info.filePath << " " << info.pageNumber << "\n";
    }

    outFile.close();
}

// Function to load eBook page numbers from a file
void loadPageNumbersFromFile(const std::string& filePath) {
    std::ifstream inFile(filePath);

    if (!inFile.is_open()) {
        // Handle file open error
        return;
    }

    eBookCache.clear(); // Clear existing cache

    std::string line;
    while (std::getline(inFile, line)) {
        std::istringstream iss(line);
        std::string filePath;
        int pageNumber;

        if (iss >> filePath >> pageNumber) {
            eBookCache.push_back(eBookInfo("", filePath, pageNumber));
        }
    }

    inFile.close();
}

// Function to update the page number for an eBook
void updatePageNumber(const std::string& filePath, int newPageNumber) {
    for (eBookInfo& info : eBookCache) {
        if (info.filePath == filePath) {
            info.pageNumber = newPageNumber;
            break;
        }
    }
}

int main(int argc, char* argv[]) {
    // Initialize LVGL and set up display driver
    lv_init();

    // Set up the display driver (replace with  driver configuration)

    // Load eBook page numbers from a file when the application starts
    loadPageNumbersFromFile("ebook_page_numbers.txt"); // Replace with file path

    // Create a simple LVGL button for switching eBooks
    lv_obj_t* button = lv_btn_create(lv_scr_act());
    lv_btn_set_fit(button, LV_FIT_TIGHT);

    lv_obj_t* label = lv_label_create(button);
    lv_label_set_text(label, "Switch eBook");

    // Assign an event handler for the button
    lv_obj_set_event_cb(button, [](lv_obj_t*, lv_event_t event) {
        if (event == LV_EVENT_CLICKED) {
            // Simulate switching to a new eBook
            std::string newEBookFilePath = "new_ebook.pdf";  // Replace with the actual eBook file path

            // Save the current eBook's page number to the cache
            // (call this when switching or closing an eBook)
            updatePageNumber(newEBookFilePath, 42); // Replace 42 with the actual page number

            // Render and view the new eBook
            // (implement the rendering logic here)

            // Save eBook page numbers to a file
            savePageNumbersToFile("ebook_page_numbers.txt"); // Replace with file path
        }
    });

    // Main loop
    while (1) {
        lv_task_handler();
        usleep(5000); // Sleep for a while to control the loop rate
    }

    return 0;
}
