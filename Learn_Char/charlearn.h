#ifndef CHARLEARN_H
#define CHARLEARN_H

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

class CharLearn
{
public:
    CharLearn(int argc, char *arg[]);
    void getArgviLen(int argc, char *argv[]);
private:
    int iArgc;
    char* cP;
    int iArgLen;
};

#endif // CHARLEARN_H
