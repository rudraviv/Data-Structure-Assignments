//============================================================================
// Name        : Assign1Q2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BinarySearch.h"
using namespace std;

int main() {
	int size;
	BinarySearch b;
	cout<<"Enter size of Array: ";
	cin>>size;
	b.Accept(size);
	int num;
	cout<<"\nEnter Number to Search: ";
	cin>>num;
	b.Bin_Search(size,num);
	return 0;
}
