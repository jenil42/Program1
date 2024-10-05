/*
    Title:  	Programm1
    Author:		Group: Jenil Goyani,
                     Vraj Patel,
                     Sean Southall,
                     Fenil Patel,
    Date:		  10/03/2024
    Purpose:	Video Game Library
*/
#ifndef TEXT_H
#define TEXT_H

#include <cstring>
using namespace std;

class Text
{
private:
    char *str;
    int size; 

public:
    Text(char *inputStr);
    ~Text();

    char *getString();
};

#endif 
