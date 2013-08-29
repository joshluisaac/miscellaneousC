#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
  int a[] = {36, 19, 25, 17, 3, 7, 1, 2,};
  vector<int> v(a, a+8);
 
  cout <<"\nHere are the values in the vector (the heap):\n";
  for (vector<int>::size_type i=0; i<v.size(); i++)
    cout <<v.at(i)<<" ";
 
  cout <<"\nNow we add the value 100 to the heap.";
  v.push_back(100);
  push_heap(v.begin(), v.end());
 
  cout <<"\nHere are the revised contents of the vector (the new heap):\n";
  for (vector<int>::size_type i=0; i<v.size(); i++)
    cout <<v.at(i)<<" ";
 
  return 0;
}
