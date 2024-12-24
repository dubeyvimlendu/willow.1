#include<bits/stdc++.h>
using namespace std;
vector<int>computelpsarray(string&pat){
    int n = pat.size();
    vector<int>lps(n );
    int len =0;
    lps[0]=0;
    int i =1 ;
    while(i<n ){
        if(pat[i]==pat[len]){
            len ++;
            lps[i]=len;
            i++;

        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps;
}