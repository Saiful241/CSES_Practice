#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'


int main()
{

   ios_base::sync_with_stdio(false);
  cin.tie(NULL);

 int n;
 cin>>n;

 vector<int>v(n);

 for(int i=0;i<n;i++) cin>>v[i];


 	ll ans=0;

 for(int i=1;i<n;i++)
 {
 	if(v[i]<v[i-1]) 
 		{
 			//cout<<v[i]<<" "<<v[i-1]<<endl;
 			ans+=(v[i-1]-v[i]);
 			v[i]=v[i-1];
 		}
 }

 cout<<ans<<endl;

}