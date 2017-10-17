//
//  main.cpp
//  Lab 3
//
//  Created by Sophie Hegarty on 19/10/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include <iostream>
#include "Student.hpp"
#include "Module.hpp"
#include <string>
#include <stdio.h>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //Student s0;
    
    //s0.readMarks();
    
    //s0.printFinalGrade();
    
    
    Module m0;
    m0.readAll();
    m0.printAll();
    
    string sname;
    cout << "Enter search name; ";
    cin >> sname;
    int ID = m0.findbyName(sname);
    cout << "ID is " << ID <<endl;
    
    int id_1;
    cout << "Enter search ID; ";
    cin >> id_1;
    string Name = m0.findbyID(id_1);
    cout << "Name is " << Name << endl;
    
    
    return 0;
}
