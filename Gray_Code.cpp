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

vector<string>ans;

ans.push_back("0");
ans.push_back("1");


int i=1;

while(ans.size()<((1<<n)-1))
{
	int n=ans.size();
	for(int i=n-1;i>=0;i--)
	{
		string s="1"+ans[i];

		ans.push_back(s);
		

	}

	for(int i=0;i<n;i++) ans[i]="0"+ans[i];
}

for(auto&p:ans) cout<<p<<endl;




}