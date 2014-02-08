/*
 * keyReader.h
 *
 *  Created on: Feb 7, 2014
 *      Author: benmandude
 */
#include <iostream>
using namespace std;


#ifndef KEYREADER_H_
#define KEYREADER_H_
class keyReader{

public:
	keyReader();
	void readString(char c);
	void validateString();
	string getString();

private:
	string key;
	bool valid;


};
#endif /* KEYREADER_H_ */
