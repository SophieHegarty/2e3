//
//  DrawMap.hpp
//  Project
//
//  Created by Sophie Hegarty on 07/12/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#ifndef RunGame_hpp
#define RunGame_hpp
#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
//#include <windows.h>
//#include <conio.h>
using namespace std;


class RunGame{
    
public:
    int static mapArray[16][33];
    int static mapArray2[16][33];
    
    void DrawMap();
    
};

#endif /* DrawMap_hpp */
