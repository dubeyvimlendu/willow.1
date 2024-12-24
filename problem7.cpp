//  the task is ; given an array of price n denoting the cost of stock on each day the task is to find 
// maximum total profit if we can sell and buy any no. of stock 

//  ;; The task is to find the local minima and maxima when the price are going down we do nothing and let the price go down when the price reach local minima 
//  ''' a value after which the price go up we let the price once it reach local maxima we sell the stock 


# include<bits/stdc++.h>
using namespace std;
int maxprofit(vector<int>&prices){
    int n = prices.size();
    int lMIN=prices[0];
    int lMAX=prices[0];
    int res=0;
    int i=0;
    while(i<n-1){
        //  find the local minima 
        while(i<n-1&&prices[i]>=prices[i+1]){
            i++;
        }
        lMIN=prices[i];
        //  locall maxima 
        while(i<n-1&&prices[i]<= prices[i+1]){
            i++;
        }
        lMAX=prices[i];
    
     res=res+(lMAX-lMIN); 
     } // add the current profit 

return res;

}