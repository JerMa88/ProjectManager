#ifndef PROJECTREADER_H
#define PROJECTREADER_H

#include "Project_Polymorphic_Classes/Project.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class ProjectReader
{
private:
    vector<Project> readResult;
public:
    int read();
    void assign();
};

#endif