#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'


int main()
{

   ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,m;
  cin>>n>>m;

  vector<string>v;

  for(int i=0;i<n;i++)
  {
  	string s;
  	cin>>s;

  	v.push_back(s);
  }

  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<m;j++){

  		map<char,int>mp;

  		if(i!=0) mp[v[i-1][j]]++;
  		if(j!=0) mp[v[i][j-1]]++;
      mp[v[i][j]]++;

  		for(char ch='A';ch<='D';ch++)
  		{
  			if(mp[ch]==0) 
  			{
  				v[i][j]=ch;
  				break;
  			}
  		}

  	}

  	cout<<v[i]<<endl;
  }
}