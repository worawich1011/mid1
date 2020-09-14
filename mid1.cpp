#include <iostream>
using namespace std;
int main()
{

	char str[50];
	int len1;

	cout<<"Input string\t: ";
	cin>>str;
	len1=strlen(str);

	cout<<"Reverse String\t: ";
	for (int i=len1-1;i>=0;i--){
		cout<<(char)toupper(str[i]);
	}

	cout<<endl;

return 0;
}