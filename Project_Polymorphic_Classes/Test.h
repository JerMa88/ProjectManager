#ifndef TEST_H
#define TEST_H

#include <string>
#include <cmath>
using namespace std;

class Test : public Project
{
private:
    vector<string> type = {"final", "mid-term", "unit", "quiz"};
public:
    string getType(int i);//{return type[i];}    
};

#endif
