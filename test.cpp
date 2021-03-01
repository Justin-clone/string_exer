#include <iostream>
#include <string>
using namespace std;

//prototype //telling to the computer that i have func which takes types and return types
string mergeTwoWord(string, string);
string makeCharsUniq(string);

int main(){
	string words, cleaned;
	string input1, input2;
	string mixer;
	string mergedString;
	cout<<"Input two numbers"<<endl;
	cout<<"First string: ";
	getline(cin,input1);
	cout<<"\n";
	cout<<"Second string: ";
	getline(cin,input2);
	mergedString = mergeTwoWord(input1, input2);
	
	cout<<"The mixed strings make: "<<mergedString;
	
	return 0;
}

string mergeTwoWord(string first,string second){
	string mixed;
	mixed = first + " " + second;
	return mixed;
}

