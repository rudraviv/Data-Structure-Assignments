/*
 * BinarySearch.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: sunbeam
 */

#include "BinarySearch.h"
#include <iostream>
using namespace std;
BinarySearch::BinarySearch() {
	// TODO Auto-generated constructor stub

}
void BinarySearch::Accept(int size)
{
	cout<<"Enter Array Elements(must be sorted): ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
}
void BinarySearch::Bin_Search(int size,int x)
{
	int flag=1,low=1,mid=0,high=size;
	do
	{
		if(low>size)
		{
			flag=0;
		}
		else
		{
			mid=low +(low-high)/2;
			if(a[mid]<x)
			{
				low=mid+1;
			}
			else if(a[mid]>x)
			{
				high=mid-1;
			}
			else if(a[mid]==x)
			{
				cout<<"Number "<<x<<" Found at "<<mid<<" Location";
				flag=0;
			}
		}

	}while(flag);
}
BinarySearch::~BinarySearch() {
	// TODO Auto-generated destructor stub
}

