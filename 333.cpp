#include <string>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[0] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9') {
			s[i] = ' ';
		}
		if (s[i]=='1'|| s[i] == '3' || s[i] == '5'|| s[i] == '7'|| s[i] == '9') {
			s[i] = '0';
		
		}
	}
	cout << s;



}

