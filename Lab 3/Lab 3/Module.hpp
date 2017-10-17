//
//  Module.hpp
//  Lab 3
//
//  Created by Sophie Hegarty on 25/10/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#ifndef Module_hpp
#define Module_hpp
#pragma once
#include "Student.hpp"
#include <iostream>
#include <string>
using namespace std;

#include <stdio.h>

class Module{

public :
    Student students[5];
    int studentnum[5];
    void printAll();
    void readAll();
    int findbyName(string name);
    string findbyID(int id);
    

};



#endif /* Module_hpp */
