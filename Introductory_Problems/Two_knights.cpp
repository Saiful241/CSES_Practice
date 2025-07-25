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

  ll k=1;

  while(t--)
  {
  ll n=k*k;



  ll total_ways=(n*(n-1))/2;

 // cout<<total_ways<<endl;

  ll bad_jabe=4*(k-2)*(k-1);

  cout<<total_ways-bad_jabe<<endl;
  k++;

}

}