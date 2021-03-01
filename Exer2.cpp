#include <iostream>
using namespace std;

int main(){
	string words;
	char arrU[50];
	int count = 0;
	cout<<"Input string: ";
	getline(cin, words);
	for(int i = 0; words[i]!='\0'; i++){
		count++;
	}
	cout<<"The length of the string is: "<<count;
	
}
