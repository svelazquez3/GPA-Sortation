#include<iostream>
#include "Vector.h"
#include <stdio.h>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

Vector::Vector() { totalCount = 0; }

void Vector::insert(string NAME, float GPA) {
  studentInfo.first = NAME;
  studentInfo.second = GPA;
  studentList.push_back(studentInfo);
  totalCount++;
}

void Vector::displayPairs() {
  for (int i = 0; i < totalCount; i++)
    cout << studentList[i].first << " : " << studentList[i].second << endl;
}

void Vector::prequicksort(){
  this->quickSort(studentList); // Calling quickSort function, insertin studentList as parameter
}

void Vector:: quickSort(vector< pair<string,float>>& Students)
{
  if(Students.size() > 1)
  {
    vector<pair<string,float>> a,b;
    pair<string,float> pivot = Students[0]; // Sets the pivot to the first pair in the vector
    for(int i=1; i<Students.size(); i++)
    {//compares the pivot value with the value of the i
      if(Students[i].second >= pivot.second)
        a.push_back(Students[i]);
      else if(Students[i].second < pivot.second) 
        b.push_back(Students[i]);
      if(a.size() > 0) 
        quickSort(a);
      if(b.size() > 0) 
        quickSort(b);
    }
    
    for(int i=0; i<a.size(); i++) 
      {Students[i] = a[i];}
    
    Students[a.size()] = pivot; 
    
    for(int i=0; i<b.size(); i++)
      {Students[i+a.size()+1] = b[i];}
  }
}

void Vector::totalStudents() {
  cout << "Total number of students found is: " << totalCount;
}