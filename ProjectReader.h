#ifndef PROJECTREADER_H
#define PROJECTREADER_H

#include "Project_Polymorphic_Classes/Project.h"
#include <string>
#include <vector>
using namespace std;

class ProjectReader
{
private:
    vector<Project> readResult;
public:
    void read();
    void assign();
};

#endif