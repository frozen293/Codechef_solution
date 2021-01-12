#include<bits/stdc++.h>
#define vi vector<int> 
#include <iomanip>
using namespace std;
int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
		double basic_salary;
		cin>>basic_salary;
		double Gross_salary;
		if(basic_salary<1500)
		{
			Gross_salary=(2*basic_salary);
			cout << setprecision(11);
			cout <<fixed<< setprecision(2)<<Gross_salary<<endl;
			
		}
		else
		{
			int HRA=500;
			float DA=(basic_salary*98)/100;
			Gross_salary=float(HRA+DA+basic_salary);
			cout <<fixed<< setprecision(2)<<Gross_salary<<endl;
		
		}
	
	}
	return 0;
}
