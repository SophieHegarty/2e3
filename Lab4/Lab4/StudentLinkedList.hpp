//
//  StudentLinkedList.hpp
//  Lab4
//
//  Created by Sophie Hegarty on 13/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#ifndef StudentLinkedList_hpp
#define StudentLinkedList_hpp
#pragma once
#include "StudentNode.hpp"
#include <stdio.h>
#include <string>
using namespace std;

class StudentLinkedList{
private:
    StudentNode* headP;
    StudentNode* tailP;
    int num;
    
public:
    StudentLinkedList();
    //~StudentLinkedList();
    
    void addStudent();
    
    bool removeStudent(int _data);
    bool removeStudent(string _name);
    bool removeStudent(StudentNode* _student);
    bool insertStudentAfter(StudentNode* _newStudent, string _name);
    
    void printAllStudents();
    
    StudentNode* findbyName(string _name);
    StudentNode* findbyID(int _ID);
    


};
#endif /* StudentLinkedList_hpp */
