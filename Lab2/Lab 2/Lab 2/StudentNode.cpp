//
//  StudentNode.cpp
//  Lab 2
//
//  Created by Sophie Hegarty on 16/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include "StudentNode.hpp"
#include<string>
#include<iostream>

using namespace std;

int StudentNode::numStudents = 1;

StudentNode::StudentNode() {
    ID = numStudents;
    numStudents++;
    cout << "Enter the next student's firstname" << endl;
    cin >> firstName;
    cout << "What grade did this student receive?" << endl;
    cin >> finalGrade;
    nextS = NULL;
    cout << endl;
    
}

StudentNode::StudentNode(int _ID, string _firstName, double _finalGrade)
{
    ID = _ID;
    firstName = _firstName;
    finalGrade = _finalGrade;
}

void StudentNode::print() {
    cout << "Student number: " << ID << endl;
    cout << "Student name: " << firstName << endl;
    cout << "Student grade: " << finalGrade << endl;
    cout << endl;
    
}
