//
//  StudentList.cpp
//  Lab5_2
//
//  Created by Sophie Hegarty on 29/11/2016.
//  Copyright © 2016 Sophie Hegarty. All rights reserved.
//

#include "StudentList.hpp"


//int StudentList::numberOfComparisons = 1;

StudentList::StudentList(){
        root = NULL;
    }

void StudentList::insert(string newlastname, string newfirstname, int newID, double newGrade){
    
    StudentNode* n = new StudentNode( newlastname, newfirstname,  newID,  newGrade); // dynamically allocate the node
    
    if (root == NULL) { // empty tree
        root = n; // so just add node and finish
        return;
    }
    
    
    StudentNode *curr = root; // Start at the root
    StudentNode *prev = root; // Keep track of where you’ve been
    
    while (curr != NULL) { // find a correct leaf to insert at
        
        prev = curr;
        
        if (n->getfirstname() > curr->getfirstname()) // n bigger?
            curr = curr->getRight(); // go right
        else
            curr = curr->getLeft(); // Otherwise go left
    }
    if (n->getfirstname() > prev->getfirstname())
        prev->setRight(n);// insert node as a right child of the leaf
    else
        prev->setLeft(n);// insert node to left
}





StudentNode* StudentList::findStudent(string f, string l){
    
    int numberOfComparisons = 1;
    
    StudentNode *n = root; // start searching at root
    
    
    while (n!=NULL) {
        
        //cout << "Number of Comparisons: " << numberOfComparisons << endl;

        numberOfComparisons++;
        
        
        if (f.compare(n->getfirstname()) == 0 && (l.compare(n->getlastname()) == 0)){ // match
           
           
       cout << "Number of Comparisons: " << numberOfComparisons << endl;
             return n; // return pointer to found node
        }
       else  if ( f.compare(n->getfirstname()) > 0)
            
            n = n->getRight(); // go right
        
        else
            n = n->getLeft(); // go left
    }
    //cout << "Number of Comparisons: " << numberOfComparisons << endl;
    return NULL; // NOT found
}





/*StudentList::~StudentList(){
 //Destructor -- free up all used nodes
 StudentNode* curr=headP; //start at head of list
 StudentNode* next;
 
 while (curr != NULL) { //iterate until end
 next = curr->getNext(); //remember what next one is
 delete curr; //delete the current one
 curr = next; //move to the next one
 }
 }*/

void StudentList::printAllStudents() {
    StudentNode* currNode;
    currNode = headP;
    while (currNode != NULL) {
        cout << currNode->getID() << " ";
        cout << currNode->getName() << " ";
        cout << currNode->getGrade() <<" "<<endl;
        currNode = currNode->getNext();
    }
    cout << endl;
}

void StudentList::addNode(string newlastname, string newfirstname, int newID, double newGrade){
    
    //create the new node
    StudentNode* newNode = new StudentNode(newlastname, newfirstname, newID, newGrade);
    
    
    //add it to the tail of the list
    if (tailP == NULL)
        //list was empty
        headP = tailP = newNode;
    else {
        //list not empty
        tailP->setNext(newNode);
        tailP = newNode;
    }
    length++;
}

bool StudentList::insertStudentAfter(StudentNode* sPtr, string name) {
    //add the student pointed to by sPtr after the student name passed in
    
    //Scan the list looking for 1st occurrence of name passed in
    StudentNode* curr = headP;
    
    while (curr != 0) {
        if (curr->getName() == name) {
            //found it so add sPtr after it
            sPtr->setNext(curr->getNext());
            curr->setNext(sPtr);
            if (curr == tailP)	//is curr the last node?
                tailP = sPtr;
            length++;			//we've added a node to the list
            return true;		//successfully inserted, so return
        }
        //Move to the next one
        curr = curr->getNext();
    }
    //If we get to here then none found
    return false;
}

bool StudentList::removeNode(int id) {
    //Scan the list looking for 1st occurrence of ID passed in
    StudentNode* curr = headP;
    StudentNode* prev = headP;
    
    while (curr != 0) {
        if (curr->getID() == id) {
            //found it so remove it
            if (curr == headP) {
                //this is the first element
                headP = curr->getNext();
            }
            else {
                //not the first element
                prev->setNext(curr->getNext());
                if (curr == tailP) {
                    //this is the last element
                    tailP = prev;
                }
            }
            delete curr;
            length--;
            return true;
        }
        //Move to the next one, using prev to remember previous node
        prev = curr;
        curr=curr->getNext();
    }
    //If we get to here then none found
    return false;
}

bool StudentList::removeNode(string name) {
    //Scan the list looking for 1st occurrence of name passed in
    StudentNode* curr = headP;
    StudentNode* prev = headP;
    
    while (curr != 0) {
        if (curr->getName() == name) {
            //found it so remove it
            if (curr == headP) {
                //this is the first element
                headP = curr->getNext();
            }
            else {
                //not the first element
                prev->setNext(curr->getNext());
                if (curr == tailP) {
                    //this is the last element
                    tailP = prev;
                }
            }
            delete curr;
            length--;
            return true;
        }
        //Move to the next one, using prev to remember previous node
        prev = curr;
        curr = curr->getNext();
    }
    //If we get to here then none found
    return false;
}

bool StudentList::removeNode(StudentNode* sPtr) {
    //Delete the node pointed to by sPtr
    
    if (sPtr == 0) {
        cout << "Error: null pointer";
        return false;
    }
    delete sPtr;
    return true;
}

/*StudentNode* StudentList::findStudent(string f, string l) {
    
    StudentNode* currS;
    int number_of_comparisons = 0;
    currS = headP;
    
    while (currS != NULL) {
        number_of_comparisons++;
        if (f.compare(currS->getfirstname()) == 0 && (l.compare(currS->getlastname()) == 0)) {
            cout << "Student has entered the name: " << f << " " << l << ". ID is: " << currS->getID() << " Final Grade is: " << currS->getGrade() << endl;
            
            cout << "Number of Comparisons: " << number_of_comparisons << endl;
            return currS;
            
        }
        currS = currS->getNext();
        
        
    }
    
    cout << "Could not find the student. Number of comparisons: " << number_of_comparisons << endl;
    return NULL;
}*/

