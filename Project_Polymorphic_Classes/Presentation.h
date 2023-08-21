#ifndef PRESENTATION_H
#define PRESENTATION_H

#include <string>
#include <cmath>
using namespace std;

class Presentation : public Project
{
private:
    vector<string> topics;
public:
    vector<string> getTopics() const;
    void setTopics(vector<string> newTopics); 
};

#endif
