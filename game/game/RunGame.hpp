#pragma once
#include <iostream>
//#include <conio.h>
//#include <windows.h>
using namespace std;

class RunGame {
private:
    const int width = 20;
    const int height = 20;
    
    
public:
    
    //RunGame();
    //~RunGame();
    
    bool gameBoard[20][20];
    void Setup();
    void Draw();
    void Input();
    void Logic();
    void clearScreen();
    bool gameOver;
    int x, y, fruitX, fruitY, score;
    int tailX[100];
    int tailY[100];
    int nTail;
    enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN };
    eDirecton dir;
    int get_width() {return  width; };
    int get_height() { return height; };
    void MainMenu();
    void drawmap();
    
};
