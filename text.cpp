/*
    Title:  	Programm1
    Author:		Group: Jenil Goyani,
                     Vraj Patel,
                     Sean Southall,
                     Fenil Patel,
    Date:		  10/03/2024
    Purpose:	Video Game Library
*/
#include "Text.h"

Text::Text(char *inputStr)
{
    size = strlen(inputStr);
    str = new char[size + 1];
    strcpy(str, inputStr);
}

Text::~Text()
{
    delete[] str;
}

char *Text::getString()
{
    return str;
}
