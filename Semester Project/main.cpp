#include <iostream>
#include <fstream>
#include <string>
#include "assignment.h"
using namespace std;

void outputInstructionList() {
    cout << "\n"
            "Command List:\n"
            "\n"
            "1: New Task\n"
            "2: Get Current Tasks\n"
            "3: Update Task\n"
            "9: Print instruction list\n"
            "0: Quit Program\n";
}

int main() {
    //load the save file
    fstream savefile;
    savefile.open ("savefile");
    bool quit = false;
    int userInput;

    cout << "Welcome to Team V's Task Manager!\n";

    outputInstructionList();

    do{
        cin >> userInput;

        switch (userInput) {

            default:
                cout << "Error: bad input. Please try again.\n";
                break;
            case 1:
                cout << "This is a stub\n";
                break;
            case 2:
                cout << "This is a stub\n";
                break;
            case 3:
                cout << "This is a stub\n";
                break;
            case 9:
                outputInstructionList();
                break;
            case 0:
                quit = true;

        }
    } while (!quit);

    return 0;
}