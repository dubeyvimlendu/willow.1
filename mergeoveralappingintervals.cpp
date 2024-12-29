//  given an arr of time intervals the task is to merge all the overlapping intervals into one and return the result
//  input arr[]= [1,3][2,4][6,8][9,10]: we can see that 1,3 is merging with [2,4] so return instead [1,4]
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>mergeoverlap(vector<vector<int>>&arr){
     sort(arr.begin(),arr.end()); // sort arr intervals based on start values
    vector<vector<int>>res;
    res.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
        vector<int>&last=res.back();
        vector<int>&curr=arr[i];
        if(curr[0]<=last[1])
        last[1]=max(last[1],curr[1]);
        else
        res.push_back(curr);

    }
    return res;
}

