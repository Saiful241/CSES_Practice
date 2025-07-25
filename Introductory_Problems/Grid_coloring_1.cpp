#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'


int main()
{

   ios_base::sync_with_stdio(false);
  cin.tie(NULL);

int n,m;
cin>>n>>m;


for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		char ch;
		cin>>ch;

		if((i+j)%2==0) 
		{
			if(ch=='A') cout<<'C';
			else cout<<'A';
		}

		else
		{
			if(ch=='B') cout<<'D';
			else cout<<'B';
		}
		
	}

	cout<<endl;
}




}




