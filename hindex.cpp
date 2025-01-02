//  given a citation of n paper we need to find the h index 
#include<bits/stdc++.h>
using namespace std;
int hindex(vector<int>&citation){
    int n =citation.size();
    vector<int>freq(n+1);
    for(int i =0 ;i<n;i++){
        if(citation[i]>=n)
        freq[n]+=1;
        else 
        freq[citation[i]]+=1;
    }
    int index=n;
}

//  description " givne an arr of citation of size n such that  citation[i] is thhe number of citation a researcher recieved for ith citation the task is to find h index"
