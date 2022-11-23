#include<iostream>
using namespace std;

float add_2(float n1,float n2)
{
	float s=n1+n2;
	return s;
}

float sub(float n1, float n2)
{
	float s=n1-n2;
	return s;
}

float div(float n1,float n2)
{
	float d=n1/n2;
	cout<<"Answer is: ";
	return d;
}

float mul(float n1, float n2)
{
	float m=n1*n2;
	return m;
}

float sq(float n1)
{
	float s=n1*n1;
	return s;
}

int main()
{
	int input;
	int first,second,third;
	cout<<"Which function you want to apply"<<endl;
	cout<<"1. Add                          "<<endl;
	cout<<"2. Subtract                     "<<endl;
	cout<<"3. Multiply                     "<<endl;
	cout<<"4. Divide                       "<<endl;
	cout<<"5. Square                       "<<endl;
	cout<<"________________________________"<<endl;
	cin>>input;
	system("cls");
	if(input==1)
	{
		cout<<"First number: ";
		cin>>first;
		cout<<"Second number: ";
		cin>>second;
		system("cls");
		cout<<"Answer is: ";
		cout<<add_2(first,second);
	}
	else if(input==2)
	{
		cout<<"First number: ";
		cin>>first;
		cout<<"Second number: ";
		cin>>second;
		cout<<sub(first,second);
	}
	else if(input==3)
	{
		cout<<"First number: ";
		cin>>first;
		cout<<"Second number: ";
		cin>>second;
		cout<<mul(first,second);
	}
	else if(input==4)
	{
		cout<<"First number: ";
		cin>>first;
		cout<<"Second number: ";
		cin>>second;
		cout<<div(first,second);
	}
	else if(input==5)
	{
		cout<<"Number: ";
		cin>>first;
		cout<<sq(first);
	}
	else
	{
		cout<<"Invalid operator..";
	}
	return 0;
}
