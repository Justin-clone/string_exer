//write a recursive function that find product of 1 to n (n is give by the user)
#include <iostream>
using namespace std;
int getProd(int);

int main(){
	int input, total;
	
	cout<<"Input a number: ";
	cin>>input;
	total = getProd(input);
	cout<<"The product of the recursion is: " <<total;
	return 0;
}
//1->5 = 1*2*3*4*5
int getProd(int input){
	if(input>0){
		return input*getProd(input-1);
	}else{
		return 1;
	}
}
