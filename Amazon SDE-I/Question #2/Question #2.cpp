//Minimim net change in profit of stocks on the given day such that average price till nth day and days after has minimum absolute difference.

#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif
}

void solve(vector<int>stockPrice)
{
	int n=stockPrice.size();
	int totalSum=0;
	for(auto &x:stockPrice)
	{
		totalSum+=x;
	}
	int ans=INT_MAX;
	int id;
	int preSum=0;
	for(int i=0;i<n-1;i++)
	{
		preSum+=stockPrice[i];
		int first=0,second=0;
		first=(preSum)/(i+1);
		second=(totalSum-preSum)/(n-i-1);
		if(ans>(abs(first-second)))
		{
			ans=abs(first-second);
			id=i+1;
		}
	}
	cout<<id;
}

int main()
{
	init_code();
	vector<int>stockPrice{3,1,3,2,3};
	solve(stockPrice);
    return 0;
}
