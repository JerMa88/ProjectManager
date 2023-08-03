#ifndef PROJECT_H
#define PROJECT_H

#include <string>
#include <cmath>
using namespace std;

class Project
{
private:
    string projectName;
    int assignDate;
    int dueDate;
    int cushionDays;
    int timeSpan = dueDate - assignDate - cushionDays;
    string note;
    
public:
    //***Constructors
    //Defalt Constructor
    Project();

    //Constructor
    Project(string ProjectName, int assignDate, int dueDate, int cushionDays);

    //***Rule of 3
    //Copy constructor
    Project(const Project& other);

    //Copy Assignment Operator
    Project& operator=(const Project& rhs);

    //Destructor
    ~Project();

    //***accessors and mutators
    string getProjectName() const;
    void setProjectname(string newProjectName);
    int getAssignDate() const;
    void setAssignDate(int newAssignDate);
    int getDueDate() const;
    void setDueDate(int newDueDate);
    int getCushionDays() const;
    void setCushionDays(int newCushionDays);
    int getTimeSpan() const;
    // As of now no mutating timeSpan features.
    string getNote() const;
    void setNote(string newNote);
};

#endif