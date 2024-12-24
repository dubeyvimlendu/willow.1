//  the task is to add min no. of char to  make a string pallindrome 
// pallindrome: a sequence of char that read same forward and backward 
#include<bits/stdc++.h>
using namespace std;
vector<int>computelpsarray(string&pat){
    int n =pat.length();
    vector<int>lps(n);
    lps[0]=0;
    int len =0;
    int i=1;
    while(i<n ){
        if(pat[i]==pat[len])
{
    len++;
    lps[i]=len;
    i++;
}
else if(pat[i]!=pat[len]){
    if(len!=0){
        len=lps[len-1];

    }
    else{
        lps[i]=0;
        lps[i]=0;
        i++;
    }
}
return lps;
    }