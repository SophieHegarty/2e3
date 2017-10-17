//
//  Student.hpp
//  Lab 3
//
//  Created by Sophie Hegarty on 19/10/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    
    int studentID;
    double labs[3];
    double exam;
    double finalGrade;
    static int numStudents;
    string studentSurname;
    string studentForename;
    
    
public:
    Student();
    void readMarks();
    void printFinalGrade();
    string get_studentSurname();
    string get_studentForename();
    int get_finalGrade();
    int get_studentnum();
    
};


#endif /* Student_hpp */
