//  Given an arraay the task is to reverse array 
//  .. The idea is to iterate the first half of the array and swap each element with the corresponding elemnt at index i
//  element at index i will  swap by n-i-1
#include <bits/stdc++.h>
using namespace std;
void reversearr(vector<int>&arr){
    int n =arr.size();
    for(int i=0;i<n/2 ;i++){
        swap(arr[i],arr[n-i-1]);

    }

}
//  the time complexity would be linear as the loop run half the size of array 
//  we can also use inbuit method to reverse the array available across diffrent languages
 void reversearr(vector<int>&arr){
    reverse(arr.begin(),arr.end());
 }