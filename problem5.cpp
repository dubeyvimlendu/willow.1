//  given an arr of size n the task is to print lexicographically the next greater permutation 
// if there do not exist any grater permutation find the smallest permutation of arr
//  basically what we have to do is generate all the remaining permutationi of given possible arr 
// if last permutation is given find the next in order
# include<bits/stdc++.h>
using namespace std;
void nextpermutation(vector<int>&arr){
    int n =arr.size();
    int pivot=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            pivot=i;
            break;
        }
    }
//  if pivot does not exist reverse the entire array 
if(pivot==-1){
    reverse(arr.begin(),arr.end());
    return;
}
for(int i=n-1;i>pivot;i--){
    if(arr[i]>arr[pivot]);{
    swap(arr[i],arr[pivot]);
    break;
    }
}
reverse(arr.begin()+pivot+1,arr.end());
}

/// there is another way an inbuilt function that return  the next permutation
int main(){
    vector<int>arr={1,2,4,1,7,5,0};
    next_permutation(arr.begin(),arr.end());
    for(int num:arr)
    cout<<num<<" ";
    return 0;

}