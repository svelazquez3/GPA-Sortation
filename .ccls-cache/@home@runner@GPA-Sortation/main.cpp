/*
This program reads a list of students names from an inputfile. Right next to each students name is their corresponding GPA. They are then sorted by GPA from highest to lowest via the quicksort method/algorithm.

*/
#include <iostream>
#include <string>
#include <fstream>
#include "Vector.h"

using namespace std;

int main()
{
  ifstream inputFile; 
  ofstream outputFile; 
  inputFile.open("listOfStudents.txt");
  
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
  student.displayPairs();

  inputFile.close();
  
  return 0;
}
