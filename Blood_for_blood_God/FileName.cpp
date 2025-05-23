#include <iostream>
#include "Func.h"
using namespace std;

const int MAX_TEXT = 2000;
const int MAX_SONGS = 10;

struct Music
{
    char title[100];
    char author[100];
    int year;
    char text[MAX_TEXT];
};
void displayMenu() 
{
    cout << "\nSong Lyrics Catalog\n";
    cout << "1. Add song (from keyboard,from file)\n";
    cout << "2. Delete song\n";
    cout << "3. Change song text\n";
    cout << "4. Show text\n";
    cout << "5. Search songs by author\n";
    cout << "6. Show all songs\n";
    cout << "0. Log out\n";
    cout << "Select an option: ";
}
void enterMusic(Music music[], int& songCount) 
{
    if (songCount >= MAX_SONGS) 
    {
        cout << "Catalog is full!\n";
        return;
    }

    cout << "Enter title: ";
    cin.ignore();
    cin.getline(music[songCount].title, 100);


    cout << "Enter author: ";
    cin.getline(music[songCount].author, 100);


    cout << "Enter year: ";
    cin >> music[songCount].year;


    cout << "Chouse the mode of entering text(1-by hand,2-from file): ";
    int n;
    cin >> n;
    if (n == 1)
    {
        cin.ignore();
        cout << "Enter text: ";
        cin.getline(music[songCount].text, 2000);
    }
    else if (n==2)
    {
        //פאיכ
    }
    else
    {
        cout << "Error! Enter 1 or 2!!!";
    }
    
    songCount++;
    cout << "Song added successfully!\n";

   /* int size = 0;
    const int N = 1000;
    char arr[N];
    cin >> arr;
    size = strlen(arr) + 1;
    music->text = new char[size];
    strcpy_s(music->text, size, arr);*/
}

void deleteMusic(Music music[], int& songCount)
{
    if (songCount == 0) 
    {
        cout << "Catalog is empty!\n";
        return;
    }
    cout << "Enter song number to delete (1-" << songCount << "): ";
    int index;
    cin >> index;
    index--;
    if (index < 0 || index >= songCount)
    {
        cout << "Error song number!\n";
        return;
    }
    for (int i = index; i < songCount - 1; i++) 
    {
        music[i] = music[i + 1];
    }
    songCount--;
    cout << "Song deleted!\n";
}
void changeMusic(Music music[], int& songCount) //!
{
    if (songCount == 0) 
    {
        cout << "Catalog is empty!\n";
        return;
    }

}
void showText(Music music[],int songCount)
{
    if (songCount == 0) 
    {
        cout << "Catalog is empty!\n";
        return;
    }
    cout << "Enter song number to show text (1-" << songCount << "): ";
    int index;
    cin >> index;
    index--;

    if (index < 0 || index >= songCount) 
    {
        cout << "Error song number!\n";
        return;
    }
    else
    {
        cout << "\nText of song '" << music[index].title << "':\n";
        cout << music[index].text << endl;
    }

}
void searchMusic() //!
{

}
void ShowAllMusic(Music music[], int songCount)
{
    for (int i = 0; i < songCount; i++)
    {
        cout << i + 1 << ". Title: " << music[i].title<< "  ";
        cout << "Author: " << music[i].author << "  ";
        cout << "Year: " << music[i].year << endl;
    }
}
int main()
{
    Music catalog[MAX_SONGS];
    int songCount = 0;

  int choice;
   do
   {
        displayMenu();
        cin >> choice;
       switch (choice)
        {
        case 1:
            enterMusic(catalog, songCount);
            break;
        case 2:
            deleteMusic(catalog, songCount);
            break;
        case 3:
            changeMusic(catalog, songCount);
            break;
        case 4:
            showText(catalog, songCount);
            break;
        case 5:
            searchMusic;
            break;
        case 6:
            ShowAllMusic(catalog, songCount);
            break;
        default:
            cout << "Error";
        }
   
   } while (choice != 0);
	return 0;
}