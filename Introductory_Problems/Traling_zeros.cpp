#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'


int main()
{

   ios_base::sync_with_stdio(false);
  cin.tie(NULL);

 ll n;

 cin>>n;

 ll ans=0;

 for(ll i=5;i<=n;i*=5)
 {
 	ans+=(n/i);

 }

 cout<<ans<<endl;

}