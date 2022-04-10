#include<bits/stdc++.h>
using namespace std;

int countDigitsI(int x) // Iterative Solution
{
	int res = 0;
	while(x > 0){
			x = x / 10;
			res++;
	}	
	return res;
}
int countDigitsR(int x) // Recursive Solution
{
	if (x==0)
	    return 0;
	return 1 + countDigitsR(x/10);
}
int countDigitsL(int x) // Logarithmic Solution
{
    return floor(log10(x)+1);
}

int main() {
    	int number = 789;
    	cout<<countDigitsI(number)<<"\n";
    	cout<<countDigitsR(number)<<"\n";
    	cout<<countDigitsL(number);
    	return 0;
}
