#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'

const int M=1e9+7;

ll power(ll a,ll b)
{
	ll ans=1;

	while(b)
	{
		if(b&1) ans=(ans*a)%M;

		a=(a*a)%M;
		b>>=1;
	}

	return ans;
}



int main()
{

   ios_base::sync_with_stdio(false);
  cin.tie(NULL);

 
  	ll n;
  	cin>>n;

  	ll d=power(2,n);

  	cout<<d<<endl;
   

  

}