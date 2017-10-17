#include <iostream>
//#include <conio.h>
//#include <windows.h>
#include <fstream>
#include <string>
#include "RunGame.hpp"
using namespace std;


int main()
{
    //cout << "Welcome to Snake!" << endl << "Press 1 to start game." << endl << "Press 2 for scoreboard." << endl;
    
    RunGame g1;
    
    
    cout <<"--------------------" << endl <<  "Welcome to Snake!" << endl << "--------------------" << endl << "Press 1 to start" << endl << "Press 2 for scores" << endl;
    cout << "--------------------" << endl << "    Game Controls: " << endl << "W = go up " << endl << "S = go down" << endl << "D = go right" << endl << "A = go left" << endl << "--------------------" << endl;
    
    int option;
    cin >> option;
    
    if (option == 1) {
        
        g1.Setup();
        while (!g1.gameOver)
        {
            g1.Draw();
            g1.Input();
            g1.Logic();
           // Sleep(50); //sleep(10);
        }// end of while
        
        cout << "Game Over" << endl;
        cout << "Please enter your name and score: " << endl;
        string name, score;
        
        
        cin >> name >> score;
        
        ofstream myFile;
        myFile.open("ScoreBoard1.txt", ios::in | ios::out);
        myFile << name << "           " << score << endl;
        myFile.close();
        
        
    } //end of if
    
    else if (option == 2) {
        
        
        string x;
        ifstream inFile;
        
        inFile.open("ScoreBoard1.txt", ios::in | ios::out);
        if (!inFile) {
            cout << "Unable to open file";
            exit(1); // terminate with error
        }
        cout << "     ScoreBoard     " << endl;
        cout << "-----------------" << endl;
        cout << "Name    | Score     " << endl;
        while (getline(inFile,x)) {
            cout << x << endl ;
        }
        
        inFile.close();
    }
    
    cout << "Press 1 to start game" << endl;
    int option1;
    cin >> option1;
    
    if (option1 == 1) {
        
        g1.Setup();
        while (!g1.gameOver)
        {
            g1.Draw();
            g1.Input();
            g1.Logic();
        //    Sleep(50); //sleep(10);
        }// end of while
        
        cout << "Game Over" << endl;
        cout << "Please enter your name and score: " << endl;
        string name;
        int score;
        
        cin >> name >> score;
        
        ofstream myFile;
        myFile.open("ScoreBoard1.txt", ios::in | ios::out);
        myFile << name << "           " << score << endl;
        myFile.close();
        
    }					 //end of file writing
    
    // end of else if
    
    return 0;
}
