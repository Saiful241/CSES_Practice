#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'


int main()
{

   ios_base::sync_with_stdio(false);
  cin.tie(NULL);

string s;
cin>>s;

map<char,int>mp;


for(auto&p:s)
{
	mp[p]++;
}

int ct=0;
int ct1=0;

for(auto&p:mp)
{
	if((p.second)&1) ct++;
}

if(ct>1)
{
	cout<<"NO SOLUTION";
	return 0;
}

string ans;

char jog_hobe;


for(auto&p:mp)
{
	if(p.second%2==0) 
	{
		for(int i=0;i<(p.second/2);i++)
		{
			ans.push_back(p.first);
		}	

		ct1++;

	}

	else jog_hobe=p.first;		
}

string add=ans;

if(ct1>0) reverse(add.begin(),add.end());


if(ct<=1)
{
	for(int i=0;i<mp[jog_hobe];i++) ans.push_back(jog_hobe);

}


if(ct1>0) ans=ans+add;

cout<<ans<<endl;



}