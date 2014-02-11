/*
 * encr.h
 *
 *  Created on: Feb 7, 2014
 *      Author: Ben Baginski
 */
#ifndef ENCR_H_
#define ENCR_H_
#include <iostream>
using namespace std;

class encr{

public:
	encr(ofstream &file);
	string encrypt(string text);
	

private:
	int columnOrder[10];
		

};
#endif
