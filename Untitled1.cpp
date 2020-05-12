#include<iostream>
#include<cstring>
using namespace std;
void prime(int n)
{
	bool arr[n+1];
	memset(arr,true,sizeof(arr));
	for(int p=2;p*p<=n;p++)
	{
		if(arr[p]==true)
		{
			for(int i=p*p;i<=n;i=i+p)
			{
				arr[i]=false;
			}
		}
	}
	for(int j=2;j<=n;j++)
	{
		if(arr[j]==true)
		{
			cout<<j<<endl;
		}
	}
}
int main()
{
	int n; cin>>n;
	prime(n);
	return 0;
}
