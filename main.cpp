/*
 * main.cpp
 *
 *  Created on: Feb 7, 2014
 *      Author: Ben Baginski
 */
#include "keyReader.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

/*
*This file will be altered
*for both encr and decr
*the prompts will have to be changed
*/

int main(){
	string key1, key2;
	keyReader reader;
	
	cout<<"Keys must consist of 10 unique alphabetic characters."<<endl;
	
	//get key1
	reader.readString('1');
	key1=reader.getString();
	cout<<"Key 1: "<<key1<<endl;
	
	//get key2
	reader.readString('2');
	key2=reader.getString();
	cout<<"Key 2: "<<key2<<endl;
	
	//get text file name
	string filename;
	cout<<"Please enter the name of the file you wish to encrypt:"<<endl;
	cin>>filename;
	ifstream file(filename.c_str());
		
}


