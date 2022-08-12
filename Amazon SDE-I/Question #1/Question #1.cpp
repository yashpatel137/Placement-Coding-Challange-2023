#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif
}

void solve(vector<int>&processes,int m)
{
	int n=processes.size();
	int currSum=0;
	for(int i=0;i<m;i++)
	{
		currSum+=processes[i];
	}
	int maxSum=currSum;
	for(int i=m;i<n;i++)
	{
		currSum=currSum-processes[i-m]+processes[i];
		maxSum=max(currSum,maxSum);
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans+=processes[i];
	}
	cout<<(ans-maxSum);
}

int main()
{
	init_code();
	vector<int>processes{4,6,10,8,5,7};
	int m=3;
	solve(processes,m);
    return 0;
}
