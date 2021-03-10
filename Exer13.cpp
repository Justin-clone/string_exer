#include <iostream> 
using namespace std; 
  
int main() 
{ 
    string str;
    int beg, las, c;
    cout<<"Enter input: ";
    cin>>str;
    cout<<"Enter position of substring: ";
    cin>>beg;
    cout<<"Enter length of substring: ";
    cin>>las;
    string r = str.substr(beg, las); 
  
    cout << "String is: " << r; 
  
    return 0; 
}
