#include <iostream>
#include "UMap.h"
#include <string> 
#include <unordered_map>
#include <stdio.h>

using namespace std; 

UMap::UMap(){
  totalCount = 0;
}

void UMap::insert(string NAME, float GPA)
{
  studentInfo.first = NAME;
  studentInfo.second = GPA; 
  studentList.push_back(studentInfo); 
  totalCount++;
}

void UMap::DisplayUMap()
{
  for(int i = 0; i < totalCount; i++)
    cout << studentList[i].first << " : " << studentList[i].second << endl;
}

void UMap::totalStudents(){
  cout << "Total number of students found is: " << totalCount;
}