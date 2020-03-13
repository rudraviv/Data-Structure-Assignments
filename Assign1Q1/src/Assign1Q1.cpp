#include "LinearSearch.h"
#include<iostream>
using namespace std;
int main()
{
	int num,size;
	Linear_Search s;
	cout<<"Enter Array Size";
	cin>>size;
	s.AcceptArray(size);
	cout<<"Enter number to search";
	cin>>num;
	s.searchNum(num,size);
	int i=0;
	s.Rec_searchNum(num,i,size);
}
