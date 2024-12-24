//  rotate the arr of size n to the left by d position 
//  the idea is that if we rotate the arr by d position the last n-d element will be at the front and the first d element at end
// reverse the first subarr containing the first n element and the last n -d element 
#include <bits/stdc++.h>
using namespace std;

void rotatearr(vector<int>&arr,int d){
    int n =arr.size();
    d%=n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());

}