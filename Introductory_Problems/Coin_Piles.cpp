#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'


int main()
{

   ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--)
  {

  	ll a,b;
  	cin>>a>>b;

   ll mx=max(a,b);
   ll mn=min(a,b);

  	if((a+b)%3==0 &&  mx<=2*mn)  cout<<"YES"<<endl;

   else cout<<"NO"<<endl;
   

  }

}