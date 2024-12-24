//  The problem is to solve two stirngs which both are in lowercase we need to check if they are anagram to each other
//  two strigs are said to anagram of each other if if they contain same char if the order of char is diffrent 
//  algorithms to perform this opreation 
// initialize a frequency arr of size 26 with all element set to 0
// 2> traverse the string s1 and for each element increment the frequency count of that element 
// 3> traverse the string s2 and for each element decrement the value at each corresponding index in the frequency arr
//  4> if the value at every index of each element is 0 the frequency of each character in s1 and s2 is same 
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR=26;
bool areanagram(string&s1,string&s2){
    vector<int>freq(MAX_CHAR,0);
    for (char ch :s1) // count for frequncy in string s1
    freq[ch-'a']++;
    for (char ch:s2)
    freq[ch-'a']--;  // coount for frequency in stirng s2
    for(int count:freq){
        if(count!=0)
        return false;// check if al frequency are zero 

    }
    return true;
}