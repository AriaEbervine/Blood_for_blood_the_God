#include <iostream>
#include "Func.h"
using namespace std;
struct Music
{
    char title[100];
    char author[100];
    int year;
    char* text;
};
void displayMenu() 
{
    cout << "\nSong Lyrics Catalog\n";
    cout << "1. Add song (from keyboard)\n";
    cout << "2. Delete song\n";
    cout << "3. Change song text\n";
    cout << "4. Show text\n";
    cout << "5. Search songs by author\n";
    cout << "6. Show all songs\n";
    cout << "0. Log out\n";
    cout << "Select an option: ";
}
void enterMusic(Music* music) //для ввода текста.Потом перенесёшь в Heder File
{
    cout << "Enter title: ";
    cin >> music->title;

    cout << "Enter author: ";
    cin >> music->author;

    cout << "Enter year: ";
    cin >> music->year;
    
    int size = 0;
    const int N = 1000;
    char arr[N];
    cout << "Enter text of song: ";
    cin >> arr;
    size = strlen(arr) + 1;
    music->text = new char[size];
    strcpy_s(music->text, size, arr);
}
void deleteMusic() 
{

}
void changeMusic() 
{

}
void showText(Music music)
{

    /*cout << "Text of song: " << music.text << endl;*/
}
void searchMusic()
{

}
void ShowAllMusic(Music music)
{
   /* cout << "Title: " << music.title<< endl;
    cout << "Author: " << music.author << endl;
    cout << "Year: " << music.year << endl;*/
}
int main()
{
  int choice;
   do
   {
        displayMenu();
        cin >> choice;
       /* switch (choice)
        {
        case 1:
            enterMusic();
            break;
        case 2:
            deleteMusic;
            break;
        case 3:
            changeMusic;
            break;
        case 4:
            showText;
            break;
        case 5:
            searchMusic;
            break;
        case 6:
            ShowAllMusic;
            break;
        default:
            cout << "Error";
        }*/
   
   } while (choice != 0);
	return 0;
}