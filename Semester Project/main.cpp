#include <iostream>
#include <fstream>
#include <string>
#include "assignment.h"
using namespace std;

//I just have printing the instructions in a separate function due to needing to call it twice, once forced, and again
//when inputting "9"
void outputInstructionList() {
    cout << "\n"
            "Command List:\n"
            "\n"
            "1: New Task\n"
            "2: Get Current Tasks\n"
            "3: Update Task\n"
            "4: Delete Task\n"
            "9: Print instruction list\n"
            "0: Quit Program\n";
}

int main() {

    bool quit = false;
    int userInput;

    //load the save file
    fstream savefile;
    savefile.open ("savefile");

    //read the contents of the savefile
    

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
            case 4:
                cout << "This is a stub\n";
                break;
            case 9:
                outputInstructionList();
                break;
            case 0:
                quit = true;

        }
    } while (!quit);

    savefile.close();
    return 0;
}
