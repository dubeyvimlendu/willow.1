// given an arr consisting of 0 and 1s the task is to sort all 0's 1's and 2's 
//  this problen is similar to problen where n ball of color red white and blue are arranged in line of random order 
// you have to arrange the balls in the order such that all the balls of same color are adjacent to  each other  red ball first then white and then blue'
 #include<bits/stdc++.h>
 using namespace std;
void sort(vector<int>&arr){
    int n =arr.size();
    int start=0;
    int end=n-1;
    int mid=0;
    while(mid<=end){
        if(arr[mid]==0)
        swap(arr[start++],arr[mid++]);
        else if(arr[mid]==1)
        mid++;
        else
        swap(arr[mid],arr[end--]);
    
    
    }
}