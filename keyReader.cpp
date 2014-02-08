/*
 * keyReader.cpp
 *
 *  Created on: Feb 7, 2014
 *      Author: benmandude
 */
#include "keyReader.h"
keyReader::keyReader(){
	valid=false;
	key="";
}

void keyReader::readString(char c){
	do{
		cout << "Please enter key " << c <<":"<<endl;
		cin >> key;
		validateString();
	}
	while(!valid);
}

void keyReader::validateString(){
	
	if(key.length()<10){
		key="";
		return;
	}

	for(char c : key){
		if(!isalpha(c)){
			key="";
			return;
		}
	}
	
	for(char c : key){
		
	}
	valid=true;

}

string keyReader::getString(){
	return key;
}


