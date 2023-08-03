#include "Project.h"

//***Constructors
    //Defalt Constructor
    Project();

    //Constructor
    Project(string ProjectName, int assignDate, int dueDate, ine cushionDays);

//***Rule of 3
    //Copy constructor
    Project(const Project& other);

    //Copy Assignment Operator
    Project& operator=(const Project& rhs);

    //Destructor
    ~Project();

//***accessors and mutators
    string Project::getProjectName() const
    {
        return projectName;
    }

    void Project::setProjectname(string newProjectName)
    {
        projectName = newProjectName;
    }

    int Project::getAssignDate() const
    {
        return assignDate;
    }

    void Project::setAssignDate(int newAssignDate)
    {
        assignDate = newAssignDate;
    }

    int Project::getDueDate() const
    {
        return dueDate;
    }

    void Project::setDueDate(int newDueDate)
    {
        dueDate = newDueDate;
    }

    int Project::getCushionDays() const
    {
        return cushionDays;
    }

    void Project::setCushionDays(int newCushionDays)
    {
        cushionDays = newCushionDays;
    }

    int Project::getTimeSpan() const
    {
        return timeSpan;
    }

    // As of now no mutating timeSpan feature.