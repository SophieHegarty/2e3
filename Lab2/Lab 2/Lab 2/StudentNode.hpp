//
//  StudentNode.hpp
//  Lab 2
//
//  Created by Sophie Hegarty on 16/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#ifndef StudentNode_hpp
#define StudentNode_hpp

#include <stdio.h>
#pragma once
#include<string>
using namespace std;

class StudentNode {
private:
    int ID;
    string firstName;
    double finalGrade;
    StudentNode* nextS;
    int static numStudents;
    
public:
    StudentNode();
    StudentNode(int _ID, string _firstName, double _finalGrade);
    int getID() { return ID; }
    string getfirstName() { return firstName; }
    double getfinalGrade() { return finalGrade; }
    StudentNode* getNext() { return nextS; }
    void setNext(StudentNode* next) { nextS = next; }
    void setfirstName(string ifirstname) { firstName = ifirstname; }
    void setfinalGrade(double ifinalGrade) { finalGrade = ifinalGrade; }
    void print();
    
    
    
    
    
};

#endif /* StudentNode_hpp */
