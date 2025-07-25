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

 ll sum=0;

	for(int i=1;i<n;i++)
	{
		ll x;
		cin>>x;
		sum+=x;
	}

	ll total=(n*(n+1))/2;

	cout<<total-sum<<endl;


    
}



