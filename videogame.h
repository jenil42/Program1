/*
    Title:  	Programm1
    Author:		Group: Jenil Goyani,
                     Vraj Patel,
                     Sean Southall,
                     Fenil Patel,
    Date:		  10/03/2024
    Purpose:	Video Game Library
*/
#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <string>
using namespace std;

class VideoGame
{
private:
    string name;
    string author;
    string publisher;
    int year; 
    int rating;

public:
    VideoGame(string name, string author, string publisher, int rating, int year);
    ~VideoGame();

    
    string getName();
    string getAuthor();
    string getPublisher();
    int getRating();
    int getYear(); 

    
    void setName(string name);
    void setAuthor(string author);
    void setPublisher(string publisher);
    void setRating(int rating);
    void setYear(int year);

    void display();
};

#endif