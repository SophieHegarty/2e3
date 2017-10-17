//
//  StudentLinkedList.cpp
//  Lab 2
//
//  Created by Sophie Hegarty on 16/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include "StudentLinkedList.hpp"
#include "StudentLinkedList.hpp"

using namespace std;

StudentLinkedList::StudentLinkedList() {
    headP = NULL;
    tailP = NULL;
    
    
}

void StudentLinkedList::printAllStudents() {
    StudentNode* curr;
    curr = headP;
    
    while (curr != NULL)
    {
        cout << "Student number: " << curr->getID() << endl;
        cout << "Student name: " << curr->getfirstName() << endl;
        cout << "Student Grade: " << curr->getfinalGrade() << endl;
        curr = curr->getNext();
        cout << endl;
        
    }
    cout << endl;
    
}

void StudentLinkedList::addStudent() {
    StudentNode* newNode = new StudentNode();
    
    if ( tailP == NULL)
    {
        tailP = headP = newNode;
        
    }
    else
    {
        tailP->setNext(newNode);
        tailP = newNode;
        
    }
    length++;
}

StudentNode* StudentLinkedList::findByName(string name) {
    StudentNode* curr;
    curr = headP;
    while (curr != NULL)
    {
        if (curr->getfirstName() == name)
        {
            return curr;
            
        }
        curr = curr->getNext();
    }
    cout << "There was no student of this name found in the database." << endl;
    return curr;
}

StudentNode* StudentLinkedList::findByID(int _ID) {
    StudentNode* curr;
    curr = headP;
    while (curr != NULL)
    {
        if (curr->getID() == _ID)
        {
            return curr;
            
        }
        curr = curr->getNext();
    }
    cout << "There was no student of this ID found in the database." << endl;
    return curr;
}

bool StudentLinkedList::removeStudent(string name) {
    StudentNode* curr;
    StudentNode* prev;
    curr = headP;
    prev = headP;
    while (curr != NULL)
    {
        if (curr->getfirstName() == name)
        {
            if (curr == headP)
            {
                headP = curr->getNext();
                
            }
            else
            {
                prev->setNext(curr->getNext());
                if (curr == tailP)
                {
                    tailP = prev;
                }
            }
            
            delete curr;
            length--;
            return true;
        }
        prev = curr;
        curr = curr->getNext();
    }
    cout << "There was no student of this name found in the database." << endl;
    return false;
}

bool StudentLinkedList::removeStudent(StudentNode* node) {
    StudentNode* curr;
    StudentNode* prev;
    curr = headP;
    prev = headP;
    while (curr != NULL)
    {
        if (curr == node)
        {
            if (curr == headP)
            {
                headP = curr->getNext();
                
            }
            else
            {
                prev->setNext(curr->getNext());
                if (curr == tailP)
                {
                    tailP = prev;
                }
            }
            
            delete curr;
            length--;
            return true;
        }
        prev = curr;
        curr = curr->getNext();
    }
    cout << "There was no student of this name found in the database." << endl;
    return false;
}

bool StudentLinkedList::insertStudentAfter(StudentNode* _newNode, string _name) {
    StudentNode* curr;
    StudentNode* studentNamed = NULL;
    curr = headP;
    while (curr != NULL)
    {
        if ( curr->getfirstName() == _name)
        {
            studentNamed = curr;
            
        }
        curr = curr->getNext();
    }
    
    if (studentNamed == NULL)
    {
        cout << "There was no student of this name found in the database." << endl;
    }
    
    _newNode->setNext(studentNamed->getNext());
    studentNamed->setNext(_newNode);
    
    
    
    
    return true;
}
