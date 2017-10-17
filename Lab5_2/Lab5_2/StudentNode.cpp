//
//  StudentNode.cpp
//  Lab5_2
//
//  Created by Sophie Hegarty on 29/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include "StudentNode.hpp"

//Node.cpp
//Implements constructor, getter and setter methods
int StudentNode::numStudents = 99; //declare and initialize the static variable just once

// Node constructor
StudentNode::StudentNode(string newlastname, string newfirstname, int newID, double newGrade){
   
    firstname = newfirstname;
    lastname = newlastname;
    studentID = newID;
    grade = newGrade;
    left = NULL;
    right = NULL;
}




/*StudentNode::StudentNode(string newlastname, string newfirstname, int newID, double newGrade)

{ 
    studentID = newID;
    firstname = newfirstname;
    lastname = newlastname;     //set the name to the string passed in
    grade = newGrade;			//set the grade to the double passed in
    
    
    
    nextP = NULL;				//doesn't yet point to the next student
}*/

/*StudentNode::StudentNode(int newID, string newName, double newGrade) { //set the data to the id, name and grade passed in.
 
 numStudents++;				//one  more student node created
 
 studentID = newID;	//set the ID to the number of students
 studentName = newName;		//set the name to the string passed in
 grade = newGrade;			//set the grade to the double passed in
 
 cout << "Added Student " << studentID << ": " << studentName << " Grade: " << grade << endl;
 
 nextP = NULL;				//doesn't yet point to the next student
 }*/

StudentNode::~StudentNode() {
    cout << "Deleted Student " << numStudents << ": " << studentName << " Grade: " << grade << endl;
}


int StudentNode::getID() {
    return studentID;			//return the value of ID
}

string StudentNode::getName() {
    return studentName;			//return the name
}

string StudentNode::getfirstname() {
    return firstname;			//return the name
}

string StudentNode::getlastname() {
    return lastname;			//return the name
}
double StudentNode::getGrade() {
    return grade;				//return the grade
}

StudentNode* StudentNode::getNext() {
    return nextP;				//return the address of the next StudentNode
}

void StudentNode::setNext(StudentNode* _next){
    nextP=_next;				//set the value of pointer to the next StudentNode
};


