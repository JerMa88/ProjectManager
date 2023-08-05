#include "Project.h"

//***Constructors
    //Defalt Constructor
    Project::Project()
    {
        projectName = "";
        courseName = Course();
        assignDate = 0;
        dueDate = 0;
        cushionDays = 0;
        timeSpan = 0;
        note = "";
    }

    //Constructor
    Project::Project(string projectName, Course courseName, int assignDate, int dueDate, int cushionDays)
    {
        this->projectName = projectName;
        this->courseName= courseName;
        this->assignDate = assignDate;
        this->dueDate = dueDate;
        this->cushionDays = cushionDays;
        this->timeSpan = dueDate - assignDate - cushionDays;
    }

//***Rule of 3
    //Copy constructor
    Project::Project(const Project& other)
    {
        projectName = other.projectName;
        courseName = other.courseName;
        assignDate = other.assignDate;
        dueDate = other.dueDate;
        cushionDays = other.cushionDays;
        timeSpan = other.timeSpan;
    }

    //Copy Assignment Operator
    Project& Project::operator=(const Project& rhs)
    {
        if(this != &rhs)
        {
            projectName = rhs.projectName;
            courseName = rhs.courseName;
            assignDate = rhs.assignDate;
            dueDate = rhs.dueDate;
            cushionDays = rhs.cushionDays;
            timeSpan = rhs.timeSpan;
        }
        return *this;
    }

    //Destructor
    Project::~Project()
    {
        
    }

//***accessors and mutators
    string Project::getProjectName() const
    {
        return projectName;
    }

    void Project::setProjectname(string newProjectName)
    {
        projectName = newProjectName;
    }

    Course Project::getCourseName() const
    {
        return courseName;
    }

    void Project::setCourseName(Course newCourseName)
    {
        courseName = newCourseName;
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

    string Project::getNote() const
    {
        return note;
    }
    
    void Project::setNote(string newNote)
    {
        note = newNote;
    }