#include <iostream>
#include <unordered_map> 
#include <string>
#include <vector>
using namespace std; 

class UMap{
  public:
    UMap(); 
    void insert(string NAME, float GPA); // inserts value
    void DisplayUMap(); 
    void totalStudents(); // Displays total number of students in Unordered Map

  private: 
    int totalCount; 
    pair<string,float> studentInfo;
    vector<pair<string, float>> studentList;
};