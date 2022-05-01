/*
Created by: Sergio Velazquez
- Purpose of this program is to sort an unordered map of students GPA with the use of _____ sorting algorithm and the result. Only the top ten in the list will be displayed.
*/ 
#include <iostream>
#include <string>
#include <fstream>
#include "Vector.h"

using namespace std;

// MERGE SORT!
int main()
{
  ifstream inputFile; 
  ofstream outputFile; 
  inputFile.open("listOfStudents.txt");
  outputFile.open("testing.txt"); 
  
  string NAME; 
  float GPA; 
  int counter = 0;
  Vector student;

  while(NAME != "STOP"){ // Iterates th rough loop
    if(counter == 0)
      inputFile >> NAME;
    else if(counter == 1)
      inputFile >> GPA; 
    else if(counter == 2)
    {
      student.insert(NAME, GPA);
      inputFile >> NAME;
      counter = 0; 
    }
    counter++; 
  }

  student.DisplayUMap();
  
  
  return 0;
  
}
