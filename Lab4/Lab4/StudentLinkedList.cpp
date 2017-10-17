//
//  StudentLinkedList.cpp
//  Lab4
//
//  Created by Sophie Hegarty on 13/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include "StudentLinkedList.hpp"
#include "StudentNode.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

StudentLinkedList::StudentLinkedList(){
    headP = NULL;
    tailP = NULL;
}

/*StudentLinkedList::~StudentLinkedList(){
    StudentNode* curr;
    curr = headP;
    
    StudentNode* nextS;
    
    while(curr != NULL){
        nextS = curr -> getNextS();
        
        delete curr;
        curr = nextS;
    }
};
*/

void StudentLinkedList::printAllStudents(){
    StudentNode* currNode;
    
    currNode = headP;
    
    while(currNode != NULL){
        
        cout << "Student ID: " << currNode ->getID() << endl;
        cout << "Student name: " <<currNode ->getFirstName() << endl;
        cout << "Grade: " << currNode ->getfinalGrade() << endl;
       
        currNode = currNode ->getNextS();
    }
    cout << endl;
}

void StudentLinkedList::addStudent(){
    
    StudentNode* newStudent = new StudentNode();
    
    if (tailP == NULL){
        
        headP = tailP = newStudent;
        
        }
    else {
        tailP -> setNext(newStudent);
        tailP = newStudent;
    }
    num++;
    
}

bool StudentLinkedList::removeStudent(int _data){
    StudentNode* curr = headP;
    StudentNode* prev = headP;

    while(curr != 0){
        if(curr -> getID() == _data) {
            
            if( curr == headP) {
                
            headP = curr->getNextS();
            }
            else {
                prev -> setNext(curr->getNextS());
                
                if(curr == tailP){
                    tailP = prev;
               }

            }
            delete curr;
            num--;
            return true;
        }
       prev = curr;
        curr = curr -> getNextS();
    }
    cout << "No student found. ";
    return false;
}

bool StudentLinkedList::removeStudent(string _name){
    StudentNode* curr = headP;
    StudentNode* prev = headP;
    
    while(curr != NULL){
        
        if(curr -> getFirstName() == _name) {
            
            if( curr == headP) {
                
                headP = curr->getNextS();
            }
            else {
                prev -> setNext(curr->getNextS());
                
                if(curr == tailP){
                    tailP = prev;
                }
                
            }
            delete curr;
            num--;
            return true;
        }
        prev = curr;
        curr = curr -> getNextS();
    }
    cout << "No student found. " << endl;
    return false;
    
};

bool StudentLinkedList::removeStudent(StudentNode* _student) {
    StudentNode* curr = headP;
    StudentNode* prev = headP;
   
    while(curr != NULL){
        
        if(curr  ==  _student) {
            
            if( curr == headP) {
                
                headP = curr->getNextS();
            }
            else {
                prev -> setNext(curr->getNextS());
                
                if(curr == tailP){
                    tailP = prev;
                }
                
            }
            delete curr;
            num--;
            return true;
        }
        prev = curr;
        curr = curr -> getNextS();
    }
    cout << "No student found. " << endl;
    return false;
    
}

bool StudentLinkedList::insertStudentAfter(StudentNode*_newStudent, string _name){
    StudentNode* curr = headP;
    StudentNode* studentName = NULL;
    
    while (curr != NULL)
    {
        if ( curr -> getFirstName() == _name)
        {
            studentName = curr;
            
        }
        curr = curr->getNextS();
    }
    
    if (studentName == NULL)
    {
        cout << "No student found." << endl;
    }
    
    _newStudent->setNext(studentName ->getNextS());
    studentName->setNext(_newStudent);
    return true;
}



StudentNode* StudentLinkedList::findbyName(string _name) {
    StudentNode* curr;
    curr = headP;
    
    while (curr != NULL)
    {
        if (curr->getFirstName() == _name)
        {
            return curr;
            
        }
        curr = curr->getNextS();
    }
    cout << "No Student Found." << endl;
    return curr;
}



StudentNode* StudentLinkedList::findbyID(int _ID) {
    StudentNode* curr;
    curr = headP;
    
    while (curr != NULL)
    {
        if (curr->getID() == _ID)
        {
            return curr;
            
        }
        curr = curr->getNextS();
    }
    cout << "No Student Found." << endl;
    
    return curr;
}








