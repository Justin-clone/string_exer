#include <iostream> 
using namespace std; 
  
int main() 
{ 
    string str, res;
    int j, u;
    cout<<"Input string: ";
    cin>>str;
    
    if(str[u]<97){
    	str[u]+32;
	} else if(str[u]>96){
		str[u]-32;
	}
    cout<<str[u];
    
    return 0; 
}
