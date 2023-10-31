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

//Instruction Task Functions
void createNewTask() {
    string newTaskName;
    string newTaskDesc;
    string newTaskMembers;
    int newTaskPriority;

    cout << "What is the name of your new task?\n";
    cin >> newTaskName;

    cout << "Give a description of the new task\n";
    cin >> newTaskDesc;

    cout << "Who'll be assigned to the new task?\n";
    cin >> newTaskMembers;

    cout << "What level of priority will it have?\n";
    cin >> newTaskPriority;

    Assignment(newTaskName,newTaskMembers,newTaskDesc,newTaskPriority);

    //save the info onto the file

}

void getCurrentTasks() {
    cout << "This is a stub\n";
}

void updateTask() {
    cout << "This is a stub\n";
}

void deleteTask() {
    cout << "This is a stub\n";
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
                createNewTask();
                break;
            case 2:
                getCurrentTasks();
                break;
            case 3:
                updateTask();
                break;
            case 4:
                deleteTask();
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
