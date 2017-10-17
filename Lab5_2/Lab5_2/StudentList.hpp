//
//  StudentList.hpp
//  Lab5_2
//
//  Created by Sophie Hegarty on 29/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#ifndef StudentList_hpp
#define StudentList_hpp

#include <stdio.h>
#include <string>

//StudentList.h
//Defines a simple linked list class called List
#include "StudentNode.hpp"

class StudentList {
private:
        StudentNode* headP;	//a pointer to the first node in list
        StudentNode* tailP;	//a point to the last node in list
        int length;		//the length of the list

    StudentNode *root;// initially NULL
    StudentNode* findStudent(StudentNode* n, int x);// Private helper
    
    
public:
    StudentList();			//Constructor to create an empty list
    // ~StudentList();		//Destructor that deletes all nodes in the list
        void addNode(string newlastname, string newfirstname, int newID, double newGrade);	//Add a node to the end of the list
        bool insertStudentAfter(StudentNode* sPtr, string name); //insert the student node after the student named
        void printAllStudents();	//Print out all the data values in the list
        bool removeNode(string name);	//Remove a node that contains the ID passed in
        bool removeNode(int id);			//Remove a node that contains the ID passed in
        bool removeNode(StudentNode* sPtr);	//Remove the student node pointed to by sPtr
    StudentNode* findStudent(string f, string l); //return pointer of mathcing student names
    
    void insert(string newlastname, string newfirstname, int newID, double newGrade);// insert a node containing ----
    StudentNode* findStudent(string f);// find a node containing x
    int remove(StudentNode* n);// remove node n
   // int static numberOfComparisons;
    
};
#endif /* StudentList_hpp */
