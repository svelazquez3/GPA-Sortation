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
    void quickSortCall(); 
    void quickSort(vector<pair<string,float>> *studentList, int left, int right);
    int partition(vector<pair<string,float>> *studentList, int left, int right);

  private: 
    int totalCount; 
    pair<string,float> studentInfo;
    vector<pair<string, float>> studentList;
};