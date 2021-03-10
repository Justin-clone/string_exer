#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str;
	int count = 0;

	cout << "Please enter the string to search: \n";
	getline(cin, str1);
	cout << "Enter the substring to find: \n";
	getline(cin, str);

	int nPos = str.find(str1, 0);

	while (nPos != string::npos)
	{
		count++;
		nPos = str.find(str1, nPos + 1);
	}

	cout << count << endl;
}
