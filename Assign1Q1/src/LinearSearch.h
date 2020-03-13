/*
 * LinearSearch.h
 *
 *  Created on: 12-Mar-2020
 *      Author: sunbeam
 */

#ifndef LINEARSEARCH_H_
#define LINEARSEARCH_H_

class Linear_Search
{
	int arr[];
	int size;
public:
	Linear_Search();
	void searchNum(int,int);
	void AcceptArray(int);
	void Rec_searchNum(int,int,int);
	~Linear_Search();
};

#endif /* LINEARSEARCH_H_ */
