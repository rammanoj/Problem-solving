#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int length = str.length(), count = -1,p=0;
	for (int i = 0; i < length/2; ++i)
	{
		if( str[i] == str[length-i-1])
		{
			p = p + 1;
			continue;
		}
		else 
		{
			if(count == -1)
			{
				count = i;
				str[i] = str[length-i-1];
			}
			else
			{
				cout << "NO\n";
				return 0;
			}
		}
	}
	if(p == length/2 && length%2 == 0)
	{
		cout << "NO\n";
	}
	else
	{
		cout << "YES\n";	
	}
	return 0;
}


/*

	link to problem -- https://codeforces.com/problemset/problem/798/A
*/