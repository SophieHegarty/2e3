//
//  main.cpp
//  Lab4
//
//  Created by Sophie Hegarty on 18/10/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include <iostream>
#include<string>
#include "StudentLinkedList.hpp"
#include "StudentNode.hpp"
using namespace std;


int main(int argc, const char * argv[]) {

    StudentLinkedList l1;
    StudentNode s0( 7, "John", 100 );
    StudentNode* s1;
    string test;
    int _test;
    int counter = 1;
    
    s0.print();
    
    while (counter <= 6)
    {
        l1.addStudent();
        counter++;
    }
    l1.printAllStudents();
    
    cout << "Name of Student to remove: " << endl;
    cin >> test;
    s1 = l1.findbyName(test);
    
    cout << "They will be removed." << endl;
    l1.removeStudent(s1);
    cout << "Name and grade: " << endl;
    s1->print();
    
    l1.printAllStudents();
    
    cout << "ID of student to remove:" << endl;
    cin >> _test;
    s1 = l1.findbyID(_test);
    
    cout << "They will be removed." << endl;
    l1.removeStudent(s1);
    cout << "Name and grade is:" << endl;
    s1->print();
    
    l1.printAllStudents();
    
    cout << "Name that will be inserted after:" << endl;
    cin >> test;
    s1 = &s0;
    l1.insertStudentAfter(s1, test);
    
    l1.printAllStudents();
    
    
    
    return 0;
}
