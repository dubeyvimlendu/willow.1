//  given a set of non overlapping intervals and a new intervals the task is to insert new interval at the correct position 
// after if  insertion result in overlapping in overlapping interval then merge overlapping interval 

//  Algorithms : we need to add newintervals in the given set of sorted and non overlapping intervals 
// intervals [][]=[[1,3],[4,5],[6,7],[8,10]], new interval [5,6]
//  new intervals [][]=[[1,3],[4,7],[8,10]]: let the initials intervals are named as i1 ,i2,i3,i4 look for overlapping of intervals in the 
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>insertinterval(vector<vector<int>>& intervals,vector<int> &newinterval){
    vector<vector<int>>res;
    int i =0;
    int n= intervals.size();
    //  add all intervals that come before the new intervals 
    while(i<n&&intervals[i][1]<newinterval[0]){
        res.push_back(intervals[i]);
        i++;
    }
    res.push_back(newinterval);
    // add all the remaining intervals 
while(i<n){
    res.push_back(intervals[i]);
    i++;

}
return res;
}