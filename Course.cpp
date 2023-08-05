#include "Course.h"

//***constructors
    //default constructor
    Course::Course()
    {
        courseName = "";
        courseCode.first = "";
        courseCode.second = 0;
        creditHours = 0;
        targetGPA = 0.0;
        instructorName = "";
        time = 0;
    }

    //constructor
    Course::Course(string newCourseName, pair<string, int> newCourseCode, int newCreditHours, double newTargetGPA)
    {
        courseName = newCourseName;
        courseCode = newCourseCode;
        creditHours = newCreditHours;
        targetGPA = newTargetGPA;
    }

//***rule of 3
    //copy constructor
    Course::Course(const Course& other)
    {
        courseName = other.courseName;
        courseCode.first = other.courseCode.first;
        courseCode.second = other.courseCode.second;
        creditHours = other.creditHours;
        targetGPA = other.targetGPA;
        instructorName = other.instructorName;
        time = other.time;
    }

    //copy assignment operator
    Course& Course::operator=(const Course& rhs)
    {
        if (this != &rhs)
        {
            courseName = rhs.courseName;
            courseCode.first = rhs.courseCode.first;
            courseCode.second = rhs.courseCode.second;
            creditHours = rhs.creditHours;
            targetGPA = rhs.targetGPA;
            instructorName = rhs.instructorName;
            time = rhs.time;
        }
        return *this;
    }

    //destructor
    Course::~Course()
    {

    }

//***accessors and mutators
    string Course::getCourseName() const
    {
        return courseName;
    }

    void Course::setCourseName(string newCourseName)
    {
        courseName = newCourseName;
    }

    pair<string, int> Course::getCourseCode() const
    {
        return courseCode;
    }

    void Course::setCourseCode(pair<string, int> newCourseCode)
    {
        courseCode.first = newCourseCode.first;
        courseCode.second = newCourseCode.second;
    }

    int Course::getCreditHours() const
    {
        return creditHours;
    }

    void Course::setCreditHours(int newCreditHours)
    {
        creditHours = newCreditHours;
    }

    double Course::getTargetGPA() const
    {
        return targetGPA;
    }

    void Course::setTargetPGA(double newTargetGPA)
    {
        targetGPA = newTargetGPA;
    }

    string Course::getInstructorName() const
    {
        return instructorName;
    }

    void Course::setInstructorName(string newInstructorName)
    {
        instructorName = newInstructorName;
    }
    
    int Course::getTime() const
    {
        return time;
    }
    
    void Course::setTime(int newTime)
    {
        time = newTime;
    }
