//
//  Module.cpp
//  Lab 3
//
//  Created by Sophie Hegarty on 25/10/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include "Module.hpp"
#include "Student.hpp"
#include <iostream>
#include <string>
using namespace std;

    void Module::readAll(){
        for(int i = 0; i < 5; i++){
            
            students[i].readMarks();
            
        }
    }

        
void Module::printAll(){
    
    for (int i = 0; i < 5; i++) {
        students[i].printFinalGrade();
    }
}

int Module::findbyName(string name){
    string surname[5];
    int ID = 0;
    
    for(int i = 0; i < 5; i++){
        surname[i] = students[i].get_studentSurname();
        ID++;
    }
    for(int i = 0; i < 5; i++){
        if(name == surname[i]){
            ID = students[i].get_studentnum();
        }
    }
return ID;
}

string Module::findbyID(int id){
    
    int studentnum[5];
    string name;
    
    for(int i = 0; i < 5; i++){
        studentnum[i]= students[i].get_studentnum();
        
    }
    
    for(int j = 0; j < 5; j++){
        
        if(id == studentnum[j]){
            name = students[j].get_studentSurname();
        }
    }
    return name;
}
    

