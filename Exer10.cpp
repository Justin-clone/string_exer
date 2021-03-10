#include <iostream> 
using namespace std; 

char getMaxChar(string);

int main() 
{ 
    string str;
    cout << "Enter a string = ";
    getline(cin, str); 
    cout<<getMaxChar(str);
    return 0; 
} 
 //this is some test stringss
char getMaxChar(string str) 
{ 
	char max;
	int maxOcc=0,count=0;
	for(int i=0; i<str.size(); i++){
		for(int j = i+1; j<str.size(); j++){
			if(str[i]==str[j]){
				count++;
			}
		}
		if(count>maxOcc){
			maxOcc = count;
			max = str[i];
		} 
		count = 0;
	}
	
   
    return max; 
} 
  

