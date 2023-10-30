#include <string>
using namespace std;

class Assignment {
public:
    Assignment();
    Assignment (string name, string username, string desc);
    ~Assignment();

    string GetAssignmentName();


private:
    string assignedUserName;
    string assignmentName;
    string assignmentDesc;
    int priorityLevel;


};
