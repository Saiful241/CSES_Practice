#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'


int main()
{

   ios_base::sync_with_stdio(false);
  cin.tie(NULL);

int n;
cin>>n;

int ct=1;

int arr[n][n];

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		map<int,int>mp;

		for(int k=0;k<j;k++)
		{
			mp[arr[i][k]]++;
		}

		for(int k=0;k<i;k++)
		{
			mp[arr[k][j]]++;
		}

		int ct=0;

		while(mp[ct]>0) ct++;

		arr[i][j]=ct;

		cout<<ct<<" ";

	}
	cout<<endl;
}

}