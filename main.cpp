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
	reader.readString('1');
	cout << reader.getString()<<endl;
	
	reader.readString('2');
	cout << reader.getString()<<endl;
}


