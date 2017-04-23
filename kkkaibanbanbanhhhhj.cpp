#include<iostream>
#include<cstdlib>
#include<ctime>
#define N 11
#define M 1000
#include"language.h"
using namespace std;
int main()
{
	void language(int c,int xuan);
	int randomNumber(int x);
	int scan();
	int randomOperation(int x);
	int generateExpression();
	int caulculateResult(int x,int y,int z);
	void print(int x,int y,int z);
	int langu;
	int x,y,count=0,n,i;
	int oper=randomNumber(3);
	cout<<"请选择语言类型:"<<endl<<"1.中文"<<endl<<"2.英语"<<endl<<"3.德语"<<endl<<"4.法语"<<endl<<"5.日语"<<endl;
	langu=scan();
	language(langu,0);
	n=scan();
	for(i=0;i<n;i++)
	{
		x=generateExpression();
		randomOperation(oper);
		y=generateExpression();
		cout<<"=";
		if(scan()==caulculateResult(x,y,oper)) count++;
		else
		{
			language(langu,1);
			cout<<caulculateResult(x,y,oper)<<endl;
		} 
	}
	print(langu,count,n);
	return 0;
}
void language(int c,int xuan)
{
	if(c==1) Chinese(xuan);
	if(c==2) English(xuan);
	if(c==3) German(xuan);
	if(c==4) French(xuan);
	if(c==5) Japanese(xuan);
}
int randomNumber(int x)
{
	srand((unsigned int)time(NULL));
	return rand()%x;
}
int scan()
{
	int x;
	cin>>x;
	return x;
}
int randomOperation(int x)
{
	int randomNumber(int x);
	switch(x)
	{
		case 0:
			{
				cout<<"+";
				break;
			}
		case 1:
			{
				cout<<"-";
				break;
			}
		case 2:
			{
				cout<<"*";
				break;
			}
		case 3:
			{
				cout<<"/";
				break;
			}
	}
}
int generateExpression()
{
	int result,a,b,operate;
	a=randomNumber(N);
	b=randomNumber(N);
	operate=randomNumber(3);
	switch(operate)
	{
		case 0:
			{
				cout<<"("<<a<<"+"<<b<<")";
				result=a+b;
				break;
			}
		case 1:
			{
				cout<<"("<<a<<"-"<<b<<")";
				result=a-b;
				break;
			}
		case 2:
			{
				cout<<"("<<a<<"*"<<b<<")";
				result=a*b;
				break;
			}
		case 3:
			{
				cout<<"("<<a<<"/"<<b<<")";
				result=a/b;
				break;
			}	
	}
	return result;
}
int caulculateResult(int x,int y,int z)
{
	int randomNumber(int x);
	int result;
	switch(z)
	{
		case 0:
			{
				result=x+y;
				break;
			}
		case 1:
			{
				result=x-y;
				break;
			}
		case 2:
			{
				result=x*y;
				break;
			}
		case 3:
			{
				result=x/y;
				break;
			}
	}
	return result;
}
void print(int x,int y,int z)
{
	language(x,2);
	cout<<y;
	language(x,3);
	cout<<z-y;
}
