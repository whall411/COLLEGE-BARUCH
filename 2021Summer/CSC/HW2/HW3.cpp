#include<iostream>

using namespace std;

int main()
{
	//////////*********************************************************************
	//////////				HW3.1
	//////////*********************************************************************

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
			cout << char2 << char1 << char3;
		else
			(char1 <= char3);
			cout << char2 << char3 << char1;
	}

	else  if (char3 >= char1 && char3 >= char2)
	{
		if (char1 >= char2)
			cout << char3 << char1 << char2;
		else
			(char1 <= char2);
			cout << char3 << char2 << char1;
	}

	//Please enter 3 characters and I will sort them
	//	z
	//	a
	//	f
	//	zfa
	//	C : \Users\whall\Documents\GitHub\COLLEGE - BARUCH\2021Summer\CSC\HW2\Debug\HW3.exe(process 21792) exited with code 0.
	//	To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
	//	Press any key to close this window . . .

	//////////*********************************************************************
	//////////				HW3.2
	//////////*********************************************************************
	
	// COLONIAL
	int colprice;

	cout << "Enter the price of the colonial house ...." << endl;

	cin >> colprice;

	cout << endl;

	int colfeet;

	cout << "Enter the sq feet of the colonial house ...." << endl;

	cin >> colfeet;

	int colcalc = colprice / colfeet;


	cout << "this house is $" << colcalc << "  per sq foot" << endl; 

	cout << endl;


	// RANCH
	int ranprice;

	cout << "Enter the price of the ranch ...." << endl;

	cin >> ranprice;

	cout << endl;

	int ranfeet;

	cout << "Enter the sq feet of the ranch ...." << endl;

	cin >> ranfeet;

	int rancalc = ranprice / ranfeet;


	cout << "this house is $" << rancalc << "  per sq foot" << endl;

	cout << endl;



	// SPLIT-LEVEL

	int slprice;

	cout << "Enter the price of the split-level house ...." << endl;

	cin >> slprice;

	cout << endl;

	int slfeet;

	cout << "Enter the sq feet of the split-level house ...." << endl;

	cin >> slfeet;

	int slcalc = slprice / slfeet;

	cout << "this house is $" << slcalc << "  per sq foot" << endl;

	cout << endl;

	if (colcalc <= rancalc && colcalc <= slcalc)
		cout << " Your best option is the colonial at $" << colcalc << endl;
	else if (rancalc <= colcalc && rancalc <= slcalc)
		cout << " Your best option is the ranch at $" << rancalc << endl;
	else if (slcalc <= colcalc && slcalc <= rancalc)
		cout << " Your best option is the split-level at $" << rancalc << endl;
	
	
	
	//Enter the price of the colonial house ....
	//	1000000

	//	Enter the sq feet of the colonial house ....
	//	5040
	//	this house is $198  per sq foot

	//	Enter the price of the ranch ....
	//	1200000

	//	Enter the sq feet of the ranch ....
	//	6000
	//	this house is $200  per sq foot

	//	Enter the price of the split - level house ....
	//	300000

	//	Enter the sq feet of the split - level house ....
	//	4000
	//	this house is $75  per sq foot

	//	Your best option is the split - level at $200

	//	C : \Users\whall\Documents\GitHub\COLLEGE - BARUCH\2021Summer\CSC\HW2\Debug\HW3.exe(process 11204) exited with code 0.
	//	To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
	//	Press any key to close this window . . .


	return 0;

}