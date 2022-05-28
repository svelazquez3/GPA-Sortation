#include <iostream>
#include <unordered_map> 
#include <string>
#include <vector>
using namespace std; 

class Vector{
  public:
    Vector(); 
    void insert(string NAME, float GPA); // inserts value
    void displayPairs(); 
    void totalStudents(); // Displays total number of students in Unordered Map
    void preMergeSort();
    void prequicksort();

    void quickSort(vector< pair<string,float>>  &a);
    
  private: 
    int pivot;  
    int totalCount; 
    pair<string,float> studentInfo;
    vector<pair<string, float>> studentList;
    vector<pair<string,float>> res;
};