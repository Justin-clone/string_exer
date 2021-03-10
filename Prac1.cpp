//write a recursive function that find sum of 1 to n (n is give by the user)
#include <iostream>
using namespace std;
int getSum(int);

int main(){
	int input, total;
	
	cout<<"Input a number: ";
	cin>>input;//5
	total = getSum(5);
	cout<<"The sum of the recursion is: " <<total;
	return 0;
}

int getSum(int input){
	if(input>1){
		return input + getSum(input-1);
	}else{
		return 1;
	}
	
}
