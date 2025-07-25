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

  	int n,a,b;
  	cin>>n>>a>>b;

  	vector<int>first(n+1);
  	vector<int>second(n+1);

  	// for(int i=1;i<=n;i++) first[i]=i;

  	// for(int i=1;i<=n;i++) second[i]=i;

  	int draw=n-(a+b);

  vector<int>ans1;
  vector<int>ans2;
  	
  	for(int i=1;i<=draw;i++)
  	{
  		ans1.push_back(i);
  		ans2.push_back(i);
  	}

  	int jabe1=draw+b+1;

  	for(int i=jabe1;i<=n;i++) 
  	{
  		ans1.push_back(i);
  	}

  	for(int i=draw+1;i<jabe1;i++)
  	{
  		ans1.push_back(i);
  	}

  	int jabe2=draw+a+1;	

  	for(int i=draw+1;i<jabe2;i++)
  	{
  		ans2.push_back(i);
  	}

  	for(int i=jabe2;i<=n;i++)
  	{
  		ans2.push_back(i);
  	}

  	int ct1=0,ct2=0;

  	for(int i=0;i<n;i++)
  	{
  		if(ans1[i]>ans2[i]) ct1++;
  		else if(ans2[i]>ans1[i]) ct2++;
  	}

  	if(ct1==a && ct2==b) 
  	{
  		cout<<"YES"<<endl;
  		for(auto&p:ans1) cout<<p<<" ";
  			cout<<endl;

  		for(auto&p:ans2) cout<<p<<" ";
  			cout<<endl;
  	}

  	else cout<<"NO"<<endl;



   

  }

}