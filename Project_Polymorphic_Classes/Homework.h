#ifndef HOMEWORK_H
#define HOMEWORK_H

#include <string>
#include <cmath>
using namespace std;

class Homework : public Project
{
private:
    int difficulty;
public:
    int getDifficulty() const;
    void setDifficulty(int newDifficulty);
};

#endif