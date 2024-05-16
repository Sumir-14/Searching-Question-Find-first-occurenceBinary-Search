  #include <iostream>
#include <vector>
using namespace std;


// This code is for finding the first occurence of a target in a sorted vector
// The function firstoccurence takes a vector and a target as input and returns the index of the first occurence of the target in the vector
// If the target is not found, the function returns -1

int firstoccurence(vector<int> v, int target)
{
  // Initialize start and end indices
  int s = 0;
  int e = v.size() - 1;
  // Calculate the middle index
  int mid = s + (e - s) / 2;
  // Initialize the answer to -1
  int ans = -1;

  // Loop until start index is less than or equal to end index
  while(s<=e)
    {
      // If the middle element is equal to the target, store the middle index as the answer and move the end index to the middle index - 1
      if(v[mid]==target)
      {
        ans = mid;
        e = mid - 1;
      }
      // If the middle element is less than the target, move the start index to the middle index + 1
      else if(v[mid]<target)
      {
        s = mid + 1;
      }
      // If the middle element is greater than the target, move the end index to the middle index - 1
      else{
        e = mid - 1;
      }

      // Recalculate the middle index
      mid = s + (e - s) / 2;
    }
  // Return the answer
  return ans;
}

int main() {
  // Initialize a vector with sorted elements
  vector <int> v={1,2,3,4,4,4,4,8,9,10};
  // Set the target value
  int target = 4;
  // Call the function to find the index of the first occurence of the target
  int indexfound = firstoccurence(v,target); 

  // Print the result
  cout<<"First occurence of "<<target<<" is at index "<<indexfound<<endl;
  return 0;
}

