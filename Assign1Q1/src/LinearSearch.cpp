/*
 * LinearSearch.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: sunbeam
 */

#include "LinearSearch.h"
#include <iostream>
using namespace std;
Linear_Search::Linear_Search() {

}
void Linear_Search::AcceptArray(int size)
{
	cout<<"Enter Array Element: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}

}
void Linear_Search::searchNum(int num,int size)
{
	int flag=1;
	for(int i=0;i<size;i++)
		{
			if(arr[i]==num)
			{
				cout<<"\n"<<num<<" Found at "<<endl;
				return;
			}
			else
			{
				flag=0;
			}
		}
	if(flag==0)
	{
		cout<<"\nNot Found";
	}

}
void Linear_Search::Rec_searchNum(int num,int i,int size)
{
	if(arr[i]==num)
	{
		cout<<num<<"Found(using recursion) at "<<i<<" location";
	}
	else if(size==i)
	{
		cout<<"\nNot Found(Using Recursion)";
		return;
	}
	else
	{
		return Rec_searchNum(num,++i,size);
	}
}
Linear_Search::~Linear_Search() {

	// TODO Auto-generated destructor stub
}

