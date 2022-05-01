/*
Created by: Sergio Velazquez, Mariana Thomas ,ReNell Beauford, Justin Keeter, Herbert Crooks
Problem:
As it is nearing graduation at Sumner Academy, the adminastration wants to review the academic performance of the current senior class. Create a list of all the students in the senior class, list them in order of highest gpa to lowest via the quick sort algorithm. 
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

  //insert the values from the file into the Vector of pairs
  while(NAME != "STOP"){ 
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
  student.prequicksort();
  

  cout << "end\n";
  student.displayPairs();
  return 0;
}
