//  Given a subrr the task is to found the sum of subarr " the condition is that the sum must be  max"
// karna kya hai do pointer initialize karo arr ke first element se  
//  when encountered a positive element add it to maxending and result 
// if encountered a negative  element update maxending and leave the result as it is ;
//   if the value of pointers bacome negative it is advised to start with a new subarr
//  repeat the above task until last element is encountered

#include<bits/stdc++.h>
using namespace std;
int maxsubarray(vector<int>&arr){
    int res=arr[0];
    int maxending =arr[0];
    for(int i=1;i<arr.size();i++){
        //   find the maximum sum by extending at index i by either extending the 
        // max sum subarr ending at index i-1 or by starting a new subarr from indexx i
        res=max(maxending +arr[i],arr[i]);
    }
    return res;
}