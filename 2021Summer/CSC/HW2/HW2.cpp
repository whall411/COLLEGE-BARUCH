#include<iostream>

using namespace std;

int main()
{
	//*********************************************************************
					//HW3.1
	//*********************************************************************

	char char1, char2, char3;

	cout << "Please enter 3 characters and I will sort them " << endl;

	cin >> char1 >> char2 >> char3;

	if (char1 >= char2 && char1 >= char3)
	{
		if (char2 >= char3)
			cout << char1 << char2 << char3;
		else
			(char2 <= char3);
			cout << char1 << char3 << char2;


	}

	else  if (char2 >= char1 && char2 >= char3)
	{
		if (char1 >= char3)
			cout << char1 << char2 << char3;
		else
			(char1 <= char3);
			cout << char1 << char3 << char2;

	return 0;
}