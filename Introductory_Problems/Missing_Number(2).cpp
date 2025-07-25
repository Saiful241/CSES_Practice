#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


int main()
{

int n;
	cin>>n;

	vector<ll>v(n);

	map<ll,ll>mp;

	for(int i=0;i<n-1;i++)
	{
	 cin>>v[i];
	 mp[v[i]]++;
	}

	
	for(int i=1;i<=n;i++)
	{
		if(mp[i]==0)
		{
			cout<<i<<endl;
			break;
		}
	}




}
