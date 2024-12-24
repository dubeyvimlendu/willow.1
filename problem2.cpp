//  givne an array the task  is to move all the zero to the end of array whilie maintaining order of non zero element 

//   -- the idea is that we took a pointer and track where the next zero element will we placed we will swap the non zero element with arr count we will swap non zero element with arr count 

//  first a pointer will point to first index also the firsst index is representes by i 
//  swap  arr coutn with arr i and increment count with 1
// as we incounrter -0 do not swap  count will point to that index itself once the swapping is done increment count 
# include<bits/stdc++.h>
using namespace std;
void pushzerotoend(vector<int>&arr){
    int count =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
            
        }
    }

}
