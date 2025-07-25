#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'


int main()
{

   ios_base::sync_with_stdio(false);
  cin.tie(NULL);

string s;
cin>>s;

sort(s.begin(),s.end());

set<string>st;

st.insert(s);

while(next_permutation(s.begin(),s.end()))
{
	st.insert(s);
}

cout<<st.size()<<endl;

for(auto&p:st)
{
	cout<<p<<endl;
}

}