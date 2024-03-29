#include <iostream>
#include <ctime>
#include "message.h"

#include "user.h"
//#include <xlsxwriter.h>

int main() {
    std::cout << "Starting Program!\n";

    // Test messages
    int messageCount = 6;
    Message messages[messageCount];
    messages[0] = Message(0, std::time(0), "This is the Zeroth message!");
    messages[1] = Message(1, std::time(0), "Message Number 1!");
    messages[2] = Message(2, std::time(0), "Testing mentions, right @person?");
    messages[3] = Message(3, std::time(0), "There are seven words in this message.");
    messages[4] = Message(4, std::time(0), "");
    messages[5] = Message(5, std::time(0), "Check out Discord Wrapped: https://github.com/LukeTheStudent-2/Discord-Wrapped");

    userClass testUser(1234); //create user with ID 1234

    for (int i = 0; i < messageCount; i++) {
        testUser.addMessageToUser(messages[i]);
    }

    testUser.printMessages();
    testUser.printStats();

    return 0;

    
    //commented out the xlsx test
    /*
    // Create a new workbook and add a worksheet.
    lxw_workbook  *workbook  = workbook_new("example.xlsx");
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);

    // Write some data to cells
    worksheet_write_string(worksheet, 0, 0, "Hello", NULL);
    worksheet_write_number(worksheet, 0, 1, 123, NULL);
    worksheet_write_number(worksheet, 1, 0, 456, NULL);

    workbook_close(workbook);
    return 0;
    */
    
}
