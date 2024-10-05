/*
    Title:  	Programm1
    Author:		Group: Jenil Goyani,
                     Vraj Patel,
                     Sean Southall,
                     Fenil Patel,
    Date:		  10/03/2024
    Purpose:	Video Game Library
*/
#include "VideoGame.h"
#include <iostream>

VideoGame::VideoGame(string name, string author, string publisher, int rating, int year)
{
    this->name = name;
    this->author = author;
    this->publisher = publisher;
    this->rating = rating;
    this->year = year; 
}

VideoGame::~VideoGame() {}

string VideoGame::getName()
{
    return name;
}

string VideoGame::getAuthor()
{
    return author;
}

string VideoGame::getPublisher()
{
    return publisher;
}

int VideoGame::getRating()
{
    return rating;
}

int VideoGame::getYear()
{
    return year; 
}

void VideoGame::setName(string name)
{
    this->name = name;
}

void VideoGame::setAuthor(string author)
{
    this->author = author;
}

void VideoGame::setPublisher(string publisher)
{
    this->publisher = publisher;
}

void VideoGame::setRating(int rating)
{
    this->rating = rating;
}

void VideoGame::setYear(int year)
{
    this->year = year;
}

void VideoGame::display()
{
    cout << "Name: " << name << ", Author: " << author
         << ", Publisher: " << publisher << ", Year: " << year
         << ", Rating: " << rating << endl;
}
