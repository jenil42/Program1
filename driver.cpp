/*
    Title:  	Programm1
    Author:		Group: Jenil Goyani,
                     Vraj Patel,
                     Sean Southall,
                     Fenil Patel,
    Date:		  10/03/2024
    Purpose:	Video Game Library
*/
#include <iostream>
#include <string>
#include "VideoGameLibrary.h"
using namespace std;

int main()
{
    VideoGameLibrary library(2); // Start with a small size

    int choice = 0;

    while (choice != 6)
    {
        cout << "\n--- Video Game Library Menu ---\n";
        cout << "1. Add Game\n";
        cout << "2. Remove Game\n";
        cout << "3. Display Games\n";
        cout << "4. Save to File\n";
        cout << "5. Load from File\n";
        cout << "6. Exit\n";
        cout << "Select a choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice)
        {
        case 1:
        {
            string name, author, publisher;
            int rating, year;

            cout << "Enter game name: ";
            getline(cin, name);
            cout << "Enter author: ";
            getline(cin, author);
            cout << "Enter publisher: ";
            getline(cin, publisher);
            cout << "Enter rating (0-100): ";
            cin >> rating;
            cout << "Enter year of release: ";
            cin >> year;

            VideoGame *newGame = new VideoGame(name, author, publisher, rating, year);
            library.addGame(newGame);
            cout << "Game added successfully!\n";
            break;
        }
        case 2:
        {
            int index;
            cout << "Enter game index to remove: ";
            cin >> index;
            if (library.removeGame(index - 1))
            {
                cout << "Game removed successfully!\n";
            }
            else
            {
                cout << "Invalid index!\n";
            }
            break;
        }
        case 3:
            library.displayGames();
            break;
        case 4:
        {
            string filename;
            cout << "Enter filename to save: ";
            getline(cin, filename);
            library.saveToFile(filename);
            break;
        }
        case 5:
        {
            string filename;
            cout << "Enter filename to load: ";
            getline(cin, filename);
            library.loadFromFile(filename);
            break;
        }
        case 6:
        {
            cout << "Exiting the program." << endl;
            break;
        }
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
    }

    return 0;
}
