//  The problem is to find max possible sum of non empty subarr in circular arr
//  Using prefix and suffix sum
//  in  a circular subarr sum can eitherr max normal sum which is the highest sum of a non circular subarr 
//  or it can be circular sum calaulated by combining prefix and suffix 
#include<bits/stdc++.h>
using namespace std;
int circularsubarrsum(vector<int>&arr){
    int n =arr.size();
    int suffixsum=arr[n-1];
    //  maxsuffix arr to store the value of 
    vector<int>maxsuffix(n+1,0) ;
    maxsuffix[n-1]=arr[n-1];
    for(int i =n-2;i>=0;i--){
        suffixsum=suffixsum+arr[i];
        maxsuffix[i]=max(maxsuffix[i+1],suffixsum);

    }
    int circularsum=arr[0];
    int normalsum=arr[0];
    int currsum=0;
    int prefix=0;
for(int i=0;i<n ;i++){
    // kadane's algorithms
    currsum=max(currsum+arr[i],arr[i]);
    normalsum=max(normalsum, currsum);
    // calculating maximum circular sum;
    prefix=prefix+arr[i];
    circularsum=max(circularsum,prefix+maxsuffix[i+1]);

}
return max(circularsum,normalsum);
}

