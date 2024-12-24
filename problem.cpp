//  given the heights of  n towers incresse or decrase the height of tower by k only ooce
//   find the minimum diffrence of height of tallest height and smallest tower 
//  the idea is to sort the arr and check the max height diffrence at each index by increasing the  height of tower up to that index and
// decreasing the heights of tower beyond that index

#include<bits/stdc++.h>
using namespace std;
int getMinDiff(vector<int>&arr,int k){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    //if we increase all heights by k and decrease all heights by k 
    int res=arr[n-1]-arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-k<0)
        continue;
        // minimum heights after modification 
        int minH=min(arr[0]+k,arr[i]-k);
        int maxH=max(arr[i-1]+k,arr[n-1]-k);
        res=min(res,maxH-minH);
        
    }
    return res;
}
int main(){
    int k=6;
    vector<int> arr={12,6,4,15,17,10};
    int ans =getMinDiff(arr,k);
    cout<<ans;
    return 0;
}
//18,12,10,21,23,16  it is the result after incresing heights of all the tower by n which in case is 6
// 6,0,-2,9,11,4  it is the result after decrement of all the heights of all the tower by 6  