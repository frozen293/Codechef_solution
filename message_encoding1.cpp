#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		for(int i=0;i<n-1;i+=2)
	{
		char x=s[i+1];
		s[i+1]=s[i];
		s[i]=x;
		
		
	}
	for(int i=0;i<s.size();i++)
	{
		char c=s[i];
		int k=c-97;
		int l=25-k;
		int j=97+l;
		char t=(char) j;
		
		cout<<t;

	}
	cout<<endl;
	}
	
	return 0;
}
