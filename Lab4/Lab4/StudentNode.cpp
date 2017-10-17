//
//  StudentNode.cpp
//  Lab4
//
//  Created by Sophie Hegarty on 02/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include "StudentNode.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int StudentNode::numStudents = 1;

//getters and setters

int StudentNode::getID(){
    return ID;
}

string StudentNode::getFirstName(){
    return firstName;
}

int StudentNode::getfinalGrade(){
    return finalGrade;
}

StudentNode* StudentNode::getNextS(){
    return nextS;
}

void StudentNode::setNext(StudentNode* _next){
    nextS = _next;
}

void StudentNode::setFirstName(string _Firstname){
    firstName = _Firstname;
}

void StudentNode::setfinalGrade(int _finalGrade){
    finalGrade = _finalGrade;
}

void StudentNode::setID(int _ID){
    ID = _ID;
}




//int StudentNode::numStudents = 1;

StudentNode::StudentNode(){
    ID = numStudents;
    cout << "Enter students first name: " << endl;
    cin >> firstName;
    cout << "ENter students grade: " << endl;
    cin >> finalGrade;
    nextS = NULL;
    cout << endl;
    numStudents++;
}

StudentNode::StudentNode(int newID, string newfirstName, int newfinalGrade){
    
    ID = newID;
    firstName = newfirstName;
    finalGrade = newfinalGrade;
    
    
}

void StudentNode::print(){
    cout << "Student ID: " << ID << endl;
    cout << "Student name: " << firstName << endl;
    cout << "Student grade: " << finalGrade << endl;
    cout << endl;
}




