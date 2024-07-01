//ceasar cypher
#include <iostream>
using namespace std;

string output;
char a;

string encryption(string s,int key){

	for(int i=0; i<s.length(); i++){
		 a = s[i] + key;
		 if((a<'z') || (a<'Z')){
			 output = output + a;
		 }
		 else
		 {
			 a -= 26;
		 }
	}
	return output;
}

string decryption(string s,int key){
	for(int i=0; i<s.length(); i++){
		 a = s[i] - key;
		 if((a<'z') || (a<'Z')){
			 output = output + a;
		 }
		 else
		 {
			 a += 26;
		 }
	}
	return output;
}
int main(){

	string input;
	int user_input, key;

	cout <<"1) encryption\n2) decryption\ninput: ";cin>>user_input;

	cout<<"Enter text: "; cin>>input;
	cout<<"Enter key: "; cin>>key;

	switch(user_input){
	case 1: cout<<"Encrypted text: "<<encryption(input,key); break;
	case 2: cout<<"Decrypted text: "<<decryption(input,key); break;
	default: cout<<"Invalid input!";
	}
	return 0;
}
