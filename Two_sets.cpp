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

  ll total=(n*(n+1))/2;
  

  if(total%2==0)
  {
    total/=2;
   cout<<"YES"<<endl;

   ll sum=0;
   int ct=0;

   for(int i=n;i>=1;i--)
   {
        // cout<<sum+i<<" "<<total<<endl;
      if((sum+i)>=total) break;
      sum+=i;
      ct++;
   }
    

   // cout<<sum<<endl;

   if(sum!=total) ct++;

   cout<<ct<<endl;

   map<int,int>mp;

   for(int i=n;i>(n-ct+1);i--) 
   {
      cout<<i<<" ";
      mp[i]++;
   }


   if(sum!=total) 
   {
      cout<<(total-sum)<<endl;
      mp[(total-sum)]++;
   }


   cout<<n-ct<<endl;

   for(int i=1;i<=n;i++) if(mp[i]==0) cout<<i<<" ";

      cout<<endl;



   }

    else cout<<"NO"<<endl;


  }

