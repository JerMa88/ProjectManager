#include "ProjectReader.h"
#include "Project_Polymorphic_Classes/Project.h"

int ProjectReader::read()
{
    //https://stackoverflow.com/questions/35003036/toolset-to-parse-icalendar-file-in-c
    //if I can download a ical file form canvas instead of a calendar feed

    string projectName, input = "";
    int assignDate, dueDate, cushionDays;
    Course courseName;
    while (cin != "stop")
    {
        cout << "\nWhat is the name for your new project?\n";
        cin >> projectName;
        cout << "\nWhat is the course for your new project?\n";
        cin >> input;
        courseName.setCourseName(input);
        cout << "\nWhat is the assign date for your new project?\n";
        cin >> assignDate;
        cout << "\nWhat is the due date for your new project?\n";
        cin >> dueDate;
        cout << "\nWhat is the cushion days for your new project?\n";
        cin >> cushionDays;
        Project newProject = Project(projectName, courseName, assignDate, dueDate, cushionDays);
    }
    

}

void ProjectReader::assign()
{
    // Assign projects to students
    // Store in vector
}