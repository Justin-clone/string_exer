#include <iostream>
using namespace std;
int sumDigits(int, int);

int main(){
	int n = 1, sum = 0;
	while (n > 0){
          cout << "Enter a non-negative integer : ";
          cin >> n;
          sumDigits (n, sum);
          cout << "The sum of all digits "<< n<< " is: "<< sum<< "\n"; 
    }  
	return 0;
}

int sumDigits(int n, int sum){
    if (n%100 <= 0) {
        return sumDigits (n, sum);
    }
    else{
        sum = sum + n%10; 
        return sumDigits(n, sum);
    }
}


