//
//  StudentNode.hpp
//  Lab4
//
//  Created by Sophie Hegarty on 02/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#ifndef StudentNode_hpp
#define StudentNode_hpp
#pragma once
#include <stdio.h>
#include <string>
using namespace std;

class StudentNode{

private:
    int ID;
    string firstName;
    double finalGrade;
    StudentNode* nextS;
    
public:
    StudentNode();
    StudentNode(int newID, string newfirstName, int newfinalGrade);
    
    int getID();
    string getFirstName();
    int getfinalGrade();
    StudentNode* getNextS();
    
    void print();
    void setNext(StudentNode* _next);
    void setFirstName(string _FirstName);
    void setfinalGrade(int _finalGrade);
    void setID(int _ID);
    int static numStudents; //counter for no. of StudentNodes
    
};

#endif /* StudentNode_hpp */
