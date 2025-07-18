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

  int n=s.size();

  
  int mx=1;

  int ct=1;

for(int i=0;i<n-1;i++)
{
	if(s[i]==s[i+1]) ct++;
	else ct=1;
	mx=max(ct,mx);
}


cout<<mx<<endl;

}