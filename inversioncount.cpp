//  given an integer arr of size n find the inversion counyt of arr two arr form an  inversion count fi element arr[i] and arr[j] form an inversion if arr[i]> arr[j] and i<j
#include<bits/stdc++.h>
using namespace std;
int countandmerge(vector<int>&arr,int l ,int m, int r ){
    int n1=m-1+1,n2=r-m;
    vector<int>left(n1),right(n2);
    for(int i=0;i<n1;i++)
    left[i]=arr[i+l];
    for(int j =0; j<n2;j++)
    right[j]=arr[m+1+j];
// initialize inversion count and merge two halves
int res=0;
int i=0,j=0,k=l;
while(i<n1&&j<n2){
    if(left[i]<=right[j])
    arr[k++]=left[i++];
    else{
        arr[k++]=right[j++];
        res+=(n1-i);
    }
}
// merge the remaining element 
while(i<n1)
arr[k++]=left[i++];
while(j<n2)
arr[k++]=right[j++];
return res;
}