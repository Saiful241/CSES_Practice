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

ll sum=0;

for(int i=0;i<n;i++) 
{
	cin>>v[i];
	sum+=v[i];

}

ll mn=INT_MAX;

ll dorkar=sum/2;


for(int mask=1;mask<(1<<n);mask++)
{

	ll jabe=0;
	for(int i=0;i<n;i++)
	{
		if(mask&(1<<i))
		{
			jabe+=v[i];

		}	

		if(jabe>=dorkar) break;
	}

	

	mn=min(abs((sum-jabe)-jabe),mn);

	//cout<<jabe<<" "<<mn<<endl;
}

cout<<mn<<endl;




}

