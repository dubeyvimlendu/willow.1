//  given  two string the task is to find the indexes of occurence of pattern within  the text 

//  KPM : it is  a algorithms which is used to search  for a pattern within a text efficiently 
 #include<bits/stdc++.h>
 using namespace std;
 void constructlps(string&pat,vector<int>&lps){
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<pat.length()){
        if(pat[i]==pat[len])
{
    len++;
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
}  }
 }
 vector<int>search(string&pat,string&txt){
    int n =txt.length();
    int m = pat.length();
    vector<int>lps(m);
    vector<int>res;
    constructlps(pat,lps);
    int i=0;
    int j=0;
    while(i<n){
        if(txt[i]==pat[j]){
            i++;
            j++;
            if(j==m){
                res.push_back(i-j);
                j=lps[j-1];
            }
        }
        else{
            if(j!=0)
            j=lps[j-1];
            else
            i++;
        }
    }
    return res;
 }