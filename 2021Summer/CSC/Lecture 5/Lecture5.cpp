#include<iostream>
#include<iomanip>

using namespace std;

int	main()

{
//////	//*************************************************************
//////	// 3 input integers, find the largest and smaller one.
//////	// ***** x > 8 && x < 90 ******* the right way
//////
//////	int num1, num2, num3;
//////		cout << "Please enter 3 numbers " << endl;
//////	cin >> num1 >> num2 >> num3;
//////
//////	if ((num1 >= num2 && num1 >= num3) && (num2 >= num3))
//////		cout << num1 << " Largest " << num3 << " Smallest";
//////
//////	else if ((num2 >= num3 && num2 >= num1) && (num3 >= num1))
//////		cout << num2 << " Largest " << num1 << " Smallest";
//////
//////	else if ((num3 >= num1 && num3 >= num2) && (num1 >= num2))
//////		cout << num3 << " Largest " << num2 << " Smallest";
//////
//////	//********************************** NESTED IF **************************
//////
//////	int num1, num2, num3;
//////	
//////	cout << "Please enter 3 numbers " << endl;
//////	
//////	cin >> num1 >> num2 >> num3;
//////
//////	if (num1 >= num2 && num1 >= num3)
//////	{
//////		if (num2 >= num3)
//////			cout << num1 << " Largest " << num3 << " Smallest";
//////
//////		else // if (num2 <= num3)
//////			cout << num1 << " Largest " << num3 << " Smallest";
//////	}
//////
//////
//////	else if (num2 >= num3 && num2 >= num1)
//////	{
//////		if (num3 >= num1)
//////			cout << num2 << " Largest " << num1 << " Smallest";
//////
//////		else // if (num3 <= num1)
//////			cout << num2 << " Largest " << num1 << " Smallest";
//////	}
//////
//////	else if (num3 >= num1 && num3 >= num2)
//////	{
//////		if (num1 >= num2)
//////			cout << num3 << " Largest " << num2 << " Smallest";
//////
//////		else
//////			cout << num3 << " Largest " << num2 << " Smallest";
//////	}
//////
//////	// ********* Q4 ****************************
//////	 turn user input from positive to negative
//////
//////	int posneg;
//////
//////	cout << "Please enter a positive or negative number " << endl;
//////
//////	cin >> posneg;
//////
//////	cout << -(posneg);
//////
//////	//************************Q5*********************************
//////	//Find if a character input is in between Tand Y or t and y.
//////	//if yes, turn an upper case to lower case or lower case to upper case.
//////	
//////	char cases;
//////
//////	cout << " Please enter a letter" << endl;
//////
//////	cin >> cases;
//////
//////	if ('t' <= cases && cases <= 'y')
//////	{
//////		cases = toupper(cases);
//////		cout << cases;
//////	}
//////	else if ('T' <= cases && cases <= 'Y')
//////	{
//////		cases = tolower(cases);
//////		cout << cases;
//////
//////	}
//////	else
//////		cout << " Input is not in between t and y " << endl;
//////
//////	//**************************************
//////	// accumulative sum
//////	//****************************************
//////
//////	int x,sum = 0;
//////
//////	cin >> x;
//////	sum +=  x;
//////
//////	cout << "the sum is :  " << sum << endl;
//////
//////	cin >> x;
//////	sum += x;
//////
//////	cout << "the sum is :  " << sum << endl;
//////
//////	cin >> x;
//////	sum += x;
//////
//////	cout << "the sum is :  " << sum << endl;
//////
//////
//////	//**************************************
//////// swapping
////////****************************************
//////
//////int x = 5, y = 10;
//////int temp;
//////cout << " x = " << x << "\ny = " << y << endl;
//////
//////temp = x;
//////x = y;
//////
//////y = temp;
//////
//////cout << " x = " << x << "\ny = " << y << endl;
//////
////////**************************************************************************
////////                 NESTED IF
////////************************************************************************
//////
//////int x, y;
//////
//////cout << "set coordinates " << endl;
//////
//////cin >> x >> y;
//////
//////if (x > 0)
//////{
//////	if (y > 0)
//////		cout "BLAH BLAH BLAH"; 
//////}
//////
////////*********************************************************
//////       //SWITCH / CASE STATEMENTS
//////  //integral ---- int,char,bool
////////************************************************************
//////
//////int x;
//////
//////cout << "Enter 1 or 2 or 3 or 4: ";
//////cin >> x;
//////
//////switch (x)
//////{
//////
//////case 2:
//////	cout << "Choice is 2" << endl;
//////	break;
//////
//////case 3:
//////	cout << "Choice is 3" << endl;
//////	break;
//////
//////case 4:
//////	cout << "Choice other than 1, 2 and 3" << endl;
//////	break;
//////
//////case 1:
//////	cout << "Choice is 1" << endl;
//////	break;
//////
//////default: cout << "Invalid input. " << endl;
//////
//////}
//////
////////**********************************************************************************
//////        //PRACTICE
////////user enter a letter grade, A -> 90 -100, B is 80 - 89
////////***********************************************************************************
//////
//////
//////char grade;
//////
//////cout << "Enter your grade  : " << endl;
//////cin >> grade;
//////grade = toupper(grade);
//////
//////switch (grade)
//////{
//////
//////case 'A':
//////	cout << "Your grade is 90 - 100" << endl;
//////	break;
//////
//////case 'B':
//////	cout << "Your grade is 80 - 89" << endl;
//////	break;
//////
//////case 'C':
//////	cout << "Your grade is 70 - 79" << endl;
//////	break;
//////
//////case 'D':
//////	cout << "Your grade is 60 - 69" << endl;
//////	break;
//////
//////case 'F':
//////	cout << "Your grade is under 60 " << endl;
//////	break;
//////
//////default: cout << " Invalid Selection " << endl;
//////
//////}
//////
//////int grade;
//////
//////cout << "Enter your grade  : " << endl;
//////cin >> grade;
//////
//////
//////switch (grade / 10) // performing calculations within the switch
//////{
//////
//////case 10:
//////
//////case 9:
//////	cout << "Your grade is A" << endl;
//////	break;
//////
//////case 8:
//////	cout << "Your grade is B" << endl;
//////	break;
//////
//////case 7:
//////	cout << "Your grade is C" << endl;
//////	break;
//////
//////case 6:
//////	cout << "Your grade is 60 - 69" << endl;
//////	break;
//////
//////case 5:
//////case 4:
//////case 3:
//////case 2:
//////case 1:
//////case 0: cout << "F.... YOU FAIL" << endl;
//////	break;
//////default: cout << " Invalaid entry " << endl;
//////
//////}
char vowel;

cout << " check to see if your letter is a vowel ";

cin >> vowel;


	return 0;
}