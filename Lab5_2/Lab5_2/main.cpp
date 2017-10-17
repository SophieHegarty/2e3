//
//  main.cpp
//  Lab5_2 || BST 
//
//  Created by Sophie Hegarty on 29/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "StudentList.hpp"

int main() {
    
    
    StudentList sll1;			//Declare an empty list
    
    string last_name, first_name;
    double grade;
    int student_ID;
    ifstream student_list;
    
    student_list.open("student10000.txt");
    
    if (student_list.fail()) {
        cout << "Error - File could not be opened" << endl;
        exit(1);
    }
    
    //student_list >> last_name >> first_name >> student_ID >> grade;
    while (!student_list.eof()) {
        student_list >> last_name >> first_name >> student_ID >> grade;
        sll1.insert(last_name, first_name, student_ID, grade);
    }
    
    first_name = "x";
    last_name = "x";
    
    while ((first_name != "end") && (last_name != "application")) {
        if ((first_name != "end") && (last_name != "application")) {
            cout << "Enter the name of student to find: " << endl;
            cin >> first_name >> last_name;
            //sll1.findStudent(first_name, last_name);
            
            StudentNode *S = sll1.findStudent(first_name, last_name);
            
            if(sll1.findStudent(first_name, last_name)== NULL){
                cout << "Could not find the student." << endl;
            }
            else {
                cout << "Student has entered the name: " << S->getfirstname() << " " << S->getlastname() << ". ID is: " << S->getID() << " Final Grade is: " << S->getGrade() << endl;
                
            }
            
        }
        
        
    }
    
    /*  string sName="x";				//Local variable to read in name
     double sGrade;					//Local variable to read in grade
     
     while (sName != "end") {		//Loop until user types end
     cout << "Enter Name:";
     cin >> sName;
     if(sName!="end"){
     cout << "Enter Grade: ";
     cin >> sGrade;
     sll1.addNode(sName, sGrade); //Add student to to list
     }
     
     }
     sll1.printAllStudents();	//Print out the list
     
     sName = "xxx";							//reset local variable
     while (sName != "end") {				//Loop until user types end
     cout << endl << "Enter a name to delete from list (end to stop): ";
     cin >> sName;
     if (sName != "end")
     if (!sll1.removeNode(sName)) {	//remove the node and check if it was successful
     cout << "No such student in list!" << endl;
     }
     }
     
     int sID = 0;							//local variable to read in ID
     while (sID != -1) {					//Loop until user types -1
     cout << endl << "Enter an ID to delete from list (-1 to stop): ";
     cin >> sID;
     if (sID != -1)
     if (!sll1.removeNode(sID)) {	//remove the node and check if it was successful
     cout << "No such student in list!" << endl;
     }
     }
     
     cout << "Enter a name to insert John after: ";
     cin >> sName;
     sll1.insertStudentAfter(&s0, sName);	//insert John (studentNode s0) after the name given
     
     sll1.printAllStudents();				//Print a list of all remaining students	*/
    
}
