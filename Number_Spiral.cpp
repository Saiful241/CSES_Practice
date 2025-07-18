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
  	ll x,y;
  	cin>>x>>y;

  	if(x>y)
  	{
  		if(x&1)
  		{
  			ll  l=(x-1)*(x-1);
  			l++;

  			cout<<l+(y-1)<<endl;

  		}

  		else
  		{
  			ll l=x*x;
  			
  			cout<<l-(y-1)<<endl;
  		}
  	}

  	else

  	{
  		if(y&1)
  		{
  			ll l=y*y;
  			

  			cout<<l-(x-1)<<endl;
  		}

  		else
  		{
  			ll  l=(y-1)*(y-1);
  			l++;

  			cout<<l+(x-1)<<endl;


  		}
  	}
   

  }

}