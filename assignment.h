#include <string>
using namespace std;

class Assignment {
public:
    Assignment();
    Assignment (string name, string username, string desc, int priority);
    ~Assignment();
    string GetAssignmentName();
    void SetAssignmentName(string newName);
    string GetAssignmentMemberName();
    void SetAssignmentMemberName(string newName);
    string GetAssignmentDesc();
    void SetAssignmentDesc(string newDesc);
    int GetPriorityLevel();
    void SetPriorityLevel(int newPriority);


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

string Assignment::GetAssignmentName() {
    return assignmentName;
}

void Assignment::SetAssignmentName(string newName) {
    assignmentName = newName;
}

string Assignment::GetAssignmentMemberName() {
    return assignedUserName;
}

void Assignment::SetAssignmentMemberName(string newName) {
    assignedUserName = newName;
}

string Assignment::GetAssignmentDesc() {
    return assignmentDesc;
}

void Assignment::SetAssignmentDesc(string newDesc) {
    assignmentDesc = newDesc;
}

int Assignment::GetPriorityLevel() {
    return priorityLevel;
}

void Assignment::SetPriorityLevel(int newPriority) {
    priorityLevel = newPriority;
}
