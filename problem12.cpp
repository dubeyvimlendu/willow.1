//  #@ Given an unsorted arr with both positive and negative element,
//  the task is to find the smallest missing number
#include<bits/stdc++.h>
using namespace std;
//  function to find the  first missing number from array 
int missingnumber(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        while(arr[i]>=1&&arr[i]<=n&& arr[i]!=arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }
    }
    for(int i=1;i<=n;i++){
        if(i!=arr[i-1]){
            return i;
        }
    }
    return n+1;
}