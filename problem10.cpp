// given an integer the task is to find the prodcut of any subarr
//  lets assume that the input arr has only postive integer then we iterate from left to right keeping track 
// of max product endig  at any index
//  if we encounter zero then all the subarr containing zero will have product zero 
// if we encounter a negative element we need to keep track of min and max product ending at previous index 
// 
//  step by step algo to solve the problem:
// create 3 var currmin , currmax , and maxprod 
// iterate the index at -to N-1
#include<bits/stdc++.h>
using namespace std;
int maxproduct(vector<int>&arr){
    int n= arr.size();
    int currmax=arr[0];
    //  initialize overall the max product ,,.// 
    int currmin=arr[0];
    int maxprod=arr[0];
     for(int i=1;i<n;i++){  
        int temp=max({arr[i],arr[i]*currmax,arr[i]*currmin});
        currmin=min({arr[i],arr[i]*currmax,arr[i]*currmin});
        currmax=temp;
        maxprod= max(maxprod,currmax);

    }
    return maxprod;
}
// function to find thr product of max product subarr
// max product ending at current index 
// min product ending at current index
// initialize overall the max product ,,.// 
