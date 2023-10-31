#include <string>
using namespace std;

class Assignment {
public:
    Assignment();
    Assignment (string name, string username, string desc, int priority);
    ~Assignment();
    string GetAssignmentName();


private:
    string assignedUserName;
    string assignmentName;
    string assignmentDesc;
    int priorityLevel;


};

//dunno if this is really necessary, but just in case
Assignment::Assignment() {
    assignmentName = "New";
    assignmentDesc = "New desc";
    assignedUserName = "MiuWasHere";
    priorityLevel = 0;
}

Assignment::Assignment(string name, string username, string desc, int priority) {
    assignmentName = name;
    assignmentDesc = desc;
    assignedUserName = username;
    priorityLevel = priority;
}
