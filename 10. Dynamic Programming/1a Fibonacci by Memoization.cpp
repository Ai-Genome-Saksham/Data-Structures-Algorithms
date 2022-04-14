#include<bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &dp){
    // Base condition
    if(n<=1) return n;
    
    // checking if values have already been computed
    if(dp[n]!=-1) return dp[n];
    
    // recurrence relation or choice diagram
    
    return dp[n] = f(n-1, dp) + f(n-2, dp);
}

int main()
{
    int n;
    cin>>n;
    
    vector<int> dp(n+1,-1); // declare dp array here in order to avoid using global variable
    cout<< f(n,dp);
}
