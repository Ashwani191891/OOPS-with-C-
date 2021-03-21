#include<iostream>
#include<math.h>
using namespace std;

double m;
int n;

// declare the function power() , which raise a number m to power n

inline double power(double m,int n=2)
{
	double result;
	result = pow(m,n);
	return result;   
}

// take inputs and call the function to get result

int main()
{
	int choice;
	double output;
	
	cout<<"Enter the number of which you want to raise power : ";
	cin>>m;
	cout<<"If you want to calculate square of entered number press 1 ,else press 2 : ";
	cin>>choice;

	if(choice==1)
	{
		output = power(m);
		cout<<"Square of " << m << " is : " << output;
	}	
	else
	{
		cout<<"Enter the power to be raised : ";
		cin>>n;
		output = power(m,n);
		cout<<m<<" raised to the power " << n << " is equal to : "<<output;
	}
}
