/*
 * keyReader.cpp
 *
 *  Created on: Feb 7, 2014
 *      Author: benmandude
 */
#include "keyReader.h"
keyReader::keyReader(){
	valid=false;

}

void keyReader::readString(char c){
	valid=false;
	key="";
	do{
		cout << "Please enter key " << c <<":"<<endl;
		getline(cin, key);
		validateString();
	}
	while(!valid);
}

void keyReader::validateString(){
	//must be at least 10 chars
	if(key.length()<10){
		key="";
		return;
	}

	//remove non alphabetic characters
	for(int i=0; i<key.length(); i++){
		if(!isalpha(key[i])){
		key.erase(i, 1);
		i--;
		}
	}
	
	//remove duplicates
	for(int i=0; i<key.length(); i++){
		for(int j=i+1; j<key.length(); j++){
			if(key.at(j)==key.at(i)){
				key.erase(j,1);
				j--;
			}
		}
	}
	//make sure string is at least 10 characters
	if(key.size()<10){
		key="";
		return;
	}
	//cut key to 10 characters
	key.resize(10);
		
	valid=true;

}

string keyReader::getString(){
	return key;
}


