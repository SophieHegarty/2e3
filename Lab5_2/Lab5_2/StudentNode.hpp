//
//  StudentNode.hpp
//  Lab5_2
//
//  Created by Sophie Hegarty on 29/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#ifndef StudentNode_hpp
#define StudentNode_hpp

#include <stdio.h>
#pragma once
#include <iostream>
#include <string>
using namespace std;

class StudentNode {
private:
    int studentID;		//ID
    string studentName;//Name
    string firstname;
    string lastname;
    double grade;		//Final Grade
    StudentNode *left; //Pointer to left child
    StudentNode *right; //Pointer to right child
    StudentNode* nextP;		//a pointer to the next StudentNode
    static int numStudents;

public:
    StudentNode(string newlastname, string newfirstname, int newID, double newGrade);//set the data to the name and grade passed in, id will be numStudents
    
    StudentNode(int newID, string newName, double newGrade);	//set the data to the id, name and grade passed in.
    
    ~StudentNode();
    
    int getID();		//return the value of ID
    string getName();	//return the name
    double getGrade();	//return the grade
    string getfirstname();
    string getlastname();
    
    
    
    void setLeft(StudentNode* n) { left = n; } //Setter for left
    void setRight(StudentNode* n) { right = n; } //Setter for right
    StudentNode* getLeft() { return left; } //Getter for left
    StudentNode* getRight() { return right; } //Getter for right
    
    StudentNode* getNext();	//return the address of the next StudentNode
    void setNext(StudentNode* _next);	//set the value of pointer to the next StudentNode
};
#endif /* StudentNode_hpp */

