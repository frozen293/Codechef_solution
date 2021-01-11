#include<bits/stdc++.h>
#define vi vector<int> 
#define endl '\n'


using namespace std;
typedef long long int ll;
int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int result;
		 while(n>2)
		{
			result +=floor((n-2)/2);
			n=n-2;
		}
		cout<<result<<'\n';
	}
	return 0;
}
