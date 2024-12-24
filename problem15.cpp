// find the first non repeating element of a given string  if there is no char return 0
//  by storing index in a single travrsal : the idea is to maintain a single arr of size 26 initialized to -1 indicatng that no char has been visited yet 
//  if a char  is found for the first time its index is stored in the arr if the char is now find again the index value is set to -2 

// algorithm :
// 1> initialize a  visited arr  of size 26 with all element set to -1 indicating that no char has beenn visited yet 
//  2> if a char is now visited then replace the value of that element at thay index by 0 : ex  'r' so the index value is r-1 : 17-0 
// replace the value at that  char by the  index of the  char which occured in the previous string 
//  jo char ek baar visit kiya gaya hai if it is found again then replace that index with -2 
//  the minimumm positive value will be index off first non repeating positive element 
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR =26;
char nonrepeatingelement(string s ){
    vector <int> vis(MAX_CHAR,-1);
    for(int i=0;i<s.length();i++){
        if(vis[s[i]-'a']==-1)
        vis[s[i]-'a']=i;
        else
        vis[s[i]-'a']=-2;}
        int idx=INT_MAX;
        for(int i=0;i<MAX_CHAR;i++){
        if(vis[i]>=0)
        idx=min(idx,vis[i]);
    }
    return (idx==INT_MAX?  '$ ': s[idx]);
}
