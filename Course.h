#ifndef COURSE_H
#define COURSE_H

#include <string>

using namespace std;

class Course
{
private:
    string courseName;
    pair<string, int> courseCode;
    int creditHours;
    double targetGPA;
    string instructorName;
    int time;

public:
//***constructors
    //default constructor
    Course();

    //constructor
    Course(string newCourseName, pair<string, int> newCourseCode, int newCreditHours, double newTargetGPA);

//***rule of 3
    //copy constructor
    Course(const Course& other);

    //copy assignment operator
    Course& operator=(const Course& rhs);

    //destructor
    ~Course();

//***accessors and mutators
    string getCourseName() const;
    void setCourseName(string newCourseName);
    pair<string, int> getCourseCode() const;
    void setCourseCode(pair<string, int> newCourseCode);
    int getCreditHours() const;
    void setCreditHours(int newCreditHours);
    double getTargetGPA() const;
    void setTargetPGA(double newTargetGPA);
    string getInstructorName() const;
    void setInstructorName(string newInstructorName);
    int getTime() const;
    void setTime(int newTime);
};

#endif