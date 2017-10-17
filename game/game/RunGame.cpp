#include <iostream>
//#include <conio.h>
//#include <windows.h>
#include "RunGame.hpp"
using namespace std;

void RunGame::drawmap() {
    for (int i = 0; i < get_width(); i++) {
        for (int j = 0; j < get_height(); j++) {
            gameBoard[i][j] = false;
        }
    }
    
    for (int i = 0; i < get_width(); i++) {
        for (int j = 0; j < get_height(); j++) {
            if (i == 0 || i == height -1 || j == 0 || j == width -1 ) {
                gameBoard[i][j] = true;
            }
        }
    }
}

void RunGame::Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = (rand() % (width - 2)) + 1;
    fruitY = (rand() % (height -2)) +1;
    score = 0;
    nTail = 0;
    drawmap();
    
}

void RunGame::Draw()
{
    clearScreen(); //system("clear");
    
    
    /*for (int i = 0; i < width + 2; i++)
     cout << "#";
     cout << endl;*/
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            bool print = false;
            if (gameBoard[i][j]) {
                cout << char(219);
                print = true;
            };
            //if (j == 0)
            //	cout << "#";
            if (i == y && j == x && print == false)
                cout << "O";
            else if (i == fruitY && j == fruitX && print == false)
                cout << "F";
            else if(print == false)
            {
                
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
            
            
            //if (j == width - 1)
            //	cout << "#";
        }
        cout << endl;
    }
    
    //for (int i = 0; i < width + 2; i++)
    //cout << "#";
    //cout << endl;
    cout << "Score:" << score << endl;
    cout << "Tail Length:" << nTail << endl;
    cout << "X " << fruitX << " Y " << fruitY << endl;
    cout << "Player X: " << x << " Player Y: " << y << endl;
}


void RunGame::Input()
{
    if (true//kbhit())
    ){
        switch (true)//_getch())
        {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}

void RunGame::Logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir)
    {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }
    
    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;
    
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;
    
    if (x == fruitX && y == fruitY)
    {
        score += 10;
        fruitX = (rand() % (width - 2)) + 1;
        fruitY = (rand() % (height - 2)) + 1;
        nTail++;
    }
}

void RunGame::clearScreen()
{
  //  HANDLE hOut;
    //COORD Position;
    
   // hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    
   // Position.X = 0;
   // Position.Y = 0;
   // SetConsoleCursorPosition(hOut, Position);
}

/*void RunGame::MainMenu() {
	cout << "Welcome to Snake!" << endl << "Press 1 to start game." << endl << "Press 2 for scoreboard." << endl;
	int option;
	cin >> option;
	
 }*/

/*RunGame::RunGame() {
	Setup();
	while (!gameOver)
	{
 Draw();
 Input();
 Logic();
 Sleep(100); //sleep(10);
	}*/
