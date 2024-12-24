// The task is that a given array of size n the task is to find the second largest element of array 

// Naive approach : the idea is to sort the array in 
// in increasing order now the largest element is at n-1 index element and the smallest element is at n-2 , 
// now traverse the array in the reverse direction as we find a no. which is not equal to largest element it will be second largest 
# include <bits/stdc++.h>
using namespace std;

int getsecondlargest(vector<int>&arr){
    int  n =arr.size();
    sort(arr.begin(), arr.end());
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]){
            return arr[i];

        }
    }
    return -1;

}
int main(){
    vector<int>arr={ 12,35,1,14,43,3};
    cout<<getsecondlargest(arr);
    return 0;
}