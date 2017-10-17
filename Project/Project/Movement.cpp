//
//  Movement.cpp
//  Project
//
//  Created by Sophie Hegarty on 07/12/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include "Movement.hpp"
#include "RunGame.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
//#include <windows.h>
//#include <conio.h>
using namespace std;

void Movement::gotoXY(int x, int y) //sets cursor position to start of maze
{
    COORD coord; //represents coordinates of cursor
    Coord.X = x;
    Coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE));coord; //redirects handle ie cursor to coord position
}

void Movement::movement(){
    
    x = 1; //start position of character x axis
    y = 1; //start poistion of character y axis
    
    prev_x = 1; //initalise position of x before movement
    prev_y = 1; //initalise position of y before movement
    
    while(true){
        gotoXY(prev_x, prev_y);
        cout << " ";
        gotoXY(x,y);
        cout << char(1);
    
        inputKey = _getch();
        prev_x = x;
        prev_y = y;
        
        if(inputKey == 'w'){
            y--;
        }
            else if(inputKey == 's'){
                y++;
            }
            else if(inputKey == 'd'){
                    x--;
            }
                else(inputKey == 'a'){
                        x++;
                }
        
        if (DrawMap::mapArray[x][y] == 1){ //prevents character moving through walls
            x = prev_x;
            y = prev_y;
        }
        else if(DrawMap::mapArray[x][y] == 2){
                gotoXY(0,17);
                cout << "You have completed the level." << endl;
                cout << "Your score is: " << endl;
    
    };
}
