/*
    Title:  	Programm1
    Author:		Group: Jenil Goyani,
                     Vraj Patel,
                     Sean Southall,
                     Fenil Patel,
    Date:		  10/03/2024
    Purpose:	Video Game Library
*/
#include "VideoGameLibrary.h"
#include <iostream>
#include <fstream>
using namespace std;

VideoGameLibrary::VideoGameLibrary(int maxSize)
{
    gameCount = 0;
    maxGames = maxSize;
    games = new VideoGame *[maxSize];
}

VideoGameLibrary::~VideoGameLibrary()
{
    for (int i = 0; i < gameCount; ++i)
    {
        delete games[i];
    }
    delete[] games;
}

void VideoGameLibrary::resize()
{
    maxGames *= 2;
    VideoGame **newGames = new VideoGame *[maxGames];
    for (int i = 0; i < gameCount; i++)
    {
        newGames[i] = games[i];
    }
    delete[] games;
    games = newGames;
}

void VideoGameLibrary::addGame(VideoGame *game)
{
    if (gameCount >= maxGames)
    {
        resize();
    }
    games[gameCount++] = game;
}

bool VideoGameLibrary::removeGame(int index)
{
    if (index < 0 || index >= gameCount)
    {
        return false;
    }
    delete games[index];
    for (int i = index; i < gameCount - 1; i++)
    {
        games[i] = games[i + 1];
    }
    gameCount--;
    return true;
}

void VideoGameLibrary::displayGames()
{
    if (gameCount == 0)
    {
        cout << "There are no available games in the library.\n";
        return;
    }
    for (int i = 0; i < gameCount; i++)
    {
        cout << i + 1 << ". ";
        games[i]->display();
    }
}

void VideoGameLibrary::saveToFile(string &filename)
{
    if (gameCount == 0)
    {
        cout << "There are no available games in the library.\n";
        return;
    }
    ofstream file(filename);
    for (int i = 0; i < gameCount; i++)
    {
        file << games[i]->getName() << ","
             << games[i]->getAuthor() << ","
             << games[i]->getPublisher() << ","
             << games[i]->getRating() << endl;
    }
}
void VideoGameLibrary::loadFromFile(string &filename)
{
    ifstream file(filename);
    string name, author, publisher;
    int rating, year;

    while (getline(file, name, ',') &&
           getline(file, author, ',') &&
           getline(file, publisher, ',') &&
           file >> rating >> year)
    { 
        addGame(new VideoGame(name, author, publisher, rating, year));
    }
}