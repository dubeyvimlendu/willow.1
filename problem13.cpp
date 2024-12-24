//  Given two binary s1 and s2 , the task   is to return the sum .
//  the input stirng may containing leading zeros but the string 
// should not have any leading zero
 
//   >>.The idea is to first trim leading zero in the input string 
//  now start from the last character of the string and compute the digit sum  one by one .
#include<bits/stdc++.h>
using namespace std;
string trimleadingzero(const string&s){
    size_t firstone=s.find('1');
    return (firstone==string:: npos) ? "0": s.substr(firstone);
}
string  addbinary(string&s1,string&s2){
    s1=trimleadingzero(s1);
    s2=trimleadingzero(s2);
    int n=s1.size();
    int m=s2.size();
    if(n < m){
        return addbinary(s2,s1);
    }
    int j=m-1;
    int carry=0;
    //  traverse both string from the end 
    for(int i=n-1;i>=0;i--){
        int bit1=s1[i]-'0';
        int sum =bit1+carry;
        //  
        if(j>=0){
            int bit2=s2[j]-'0';
            sum+=bit2;
            j--;
        }
        int bit =sum%2;
        carry=sum/2;
        s1[i]=(char)(bit+'0');
    }
    if(carry>0){
        s1='1'+s1;

    }
    return s1;
}