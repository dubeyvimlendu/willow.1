# include<bits/stdc++.h>
using namespace std;
//  the task is same as in previous question to find the max pofit on buying and selling of stock 
//  but the condition is max one transaction is allowed // one transaction means one buy and one sell
int maxprofit (vector<int>&prices){
    int minsofar=prices[0],res=0;
    for(int i=1;i<prices.size();i++){
        minsofar=min(minsofar,prices[i]);
        res=max(res,prices[i]-minsofar);

    }
    return res;
}

//  in this soln we need to maximize the selling price by minimjize the cost prices
//  we keep track of min buy price at each stock  encountered so far 
//  for every price we subtract min so farr and if we get more profit we update the result 

