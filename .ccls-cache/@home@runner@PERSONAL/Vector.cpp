#include <iostream>
#include "Vector.h"
#include <string> 
#include <unordered_map>
#include <stdio.h>
#include <vector> 

using namespace std; 

Vector::Vector(){
  totalCount = 0;
}

void Vector::insert(string NAME, float GPA)
{
  studentInfo.first = NAME;
  studentInfo.second = GPA; 
  studentList.push_back(studentInfo); 
  totalCount++;
}

void Vector::displayPairs()
{
  for(int i = 0; i < totalCount; i++)
    cout << studentList[i].first << " : " << studentList[i].second << endl;
}

void swap(double array[], int i, int j) {
  auto h = array[i];
  array[i] = array[j];
  array[j] = h;
}

int partition(vector <>testing, int low, int high) {
  //  Assign the last element to the pivot element
  int pivot = testing[high];
  //  Index of smaller element
  int lowIndex = (low - 1);
  //  Iterate from lowest to highest element
  for (int j = low; j <= high - 1; j++) {

    // Swap elements if j-th element is smaller than the pivot element
    if (testing[j] < pivot || testing[j] == pivot) {
      lowIndex++;
      swap(array, lowIndex, j);
    }
  }
  swap(array, lowIndex + 1, high);
  return (lowIndex + 1);
}

double *quickSort(double array[], int lo, int hi) {
  if (lo < hi) {
    int pi = partition(array, lo, hi);
    //  Recursively sort smaller half of the list
    quickSort(array, lo, pi - 1);
    //  Recursively sort higher half of the list
    quickSort(array, pi + 1, hi);
  }
  //  Return sorted list
  return array;
}

void Vector::totalStudents(){
  cout << "Total number of students found is: " << totalCount;
}