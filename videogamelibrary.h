/*
    Title:  	Programm1
    Author:		Group: Jenil Goyani,
                     Vraj Patel,
                     Sean Southall,
                     Fenil Patel,
    Date:		  10/03/2024
    Purpose:	Video Game Library
*/
#ifndef VIDEOGAMELIBRARY_H
#define VIDEOGAMELIBRARY_H

#include "VideoGame.h"
using namespace std;

class VideoGameLibrary
{
private:
    VideoGame **games;
    int gameCount;
    int maxGames;

    void resize();

public:
    VideoGameLibrary(int maxSize);
    ~VideoGameLibrary();

    void addGame(VideoGame *game);
    bool removeGame(int index);
    void displayGames();
    void saveToFile(string &filename);
    void loadFromFile(string &filename);
};

#endif 
