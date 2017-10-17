//
//  Movement.hpp
//  Project
//
//  Created by Sophie Hegarty on 07/12/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#ifndef Movement_hpp
#define Movement_hpp

#include <stdio.h>
//#include <windows.h>
//#include <conio.h>


class Movement{
public:
    int x; //start position of character x axis
    int y; //start poistion of character y axis
    
    int prev_x; //initalise position of x before movement
    int prev_y;  //initalise position of y before movement

    
    void gotoXY(int x, int y);
    Movement();
    void movement();
    
};
#endif /* Movement_hpp */
