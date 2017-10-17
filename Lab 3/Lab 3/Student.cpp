//
//  Student.cpp
//  Lab 3
//
//  Created by Sophie Hegarty on 19/10/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include "Student.hpp"
#include <string>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int Student::numStudents=1;

Student::Student(){
    exam = 0;
    
    for(int i=0; i<3; i++){
        labs[i]=0;
    };
    
    cout << "Enter Forename and Surname of student: " << endl;
    cin >> studentForename >> studentSurname;
    
    studentID = numStudents;
    numStudents++;
    
    
};

void Student::readMarks(){
    cout << studentForename << " " << studentSurname;
    
    for(int i = 1; i < 4; i++){
    
      
        cout << " Enter lab mark " << i << ": " << endl;
        cin >> labs[i];
        
        while(labs[i]> 100 || labs[i]<0){
            
            cout<< "Invlaid mark, enter again.";
            cin >> labs[i];
        }
        
        
    };
    
    
    cout << "Enter exam mark: " << endl;
    cin >> exam;
    while (exam>100 || exam < 0) {
        cout<< "Invlaid mark, enter again.";
        cin >> exam;
    }
    
};

void Student::printFinalGrade(){
    cout << studentForename << " " << studentSurname << endl;
    
    int lab_total = 0;
   
    for (int i = 1; i <=3; i++) {
        
        lab_total = lab_total + labs[i];
    };
    
    lab_total = (lab_total/3)*0.4;
    exam = exam*0.6;
    finalGrade = exam + lab_total;
    cout << "Final Grade is: " << finalGrade << endl;
    
};

string Student::get_studentSurname(){
    return studentForename;
};


int Student::get_finalGrade(){
    return finalGrade;
};

string Student::get_studentForename(){
    return studentForename;
};


int Student::get_studentnum(){
    return numStudents;
};

