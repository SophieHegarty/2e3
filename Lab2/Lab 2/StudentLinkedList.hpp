//
//  StudentLinkedList.hpp
//  Lab 2
//
//  Created by Sophie Hegarty on 16/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#ifndef StudentLinkedList_hpp
#define StudentLinkedList_hpp

#include <stdio.h>
#pragma once
#include <iostream>
#include <string>
#include "StudentNode.hpp"

using namespace std;




class StudentLinkedList {
private:
    StudentNode* headP;
    StudentNode* tailP;
    int length;
    
    
public:
    StudentLinkedList();
    void printAllStudents();
    StudentNode* findByName(string name);
    StudentNode* findByID(int _ID);
    void addStudent();
    bool removeStudent(string name);
    bool removeStudent(StudentNode* node);
    bool insertStudentAfter(StudentNode* _newNode, string _name);
    
    
    
};
#endif /* StudentLinkedList_hpp */
