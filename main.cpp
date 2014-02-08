/*
 * main.cpp
 *
 *  Created on: Feb 7, 2014
 *      Author: benmandude
 */
#include "keyReader.h"
using namespace std;

int main(){
	keyReader reader;
	cout<<"Keys must consist of 10 unique alphabetic characters."<<endl;
	reader.readString('1');
	cout << reader.getString()<<endl;
	
	reader.readString('2');
	cout << reader.getString()<<endl;
}


