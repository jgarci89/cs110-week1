#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int num1;

	int num2;

	int result;

	int choice;


	do{					

		cout << "Enter your choice " << endl;
		cout << " 1. Addition " << endl;
		cout << " 2. Subtraction "  << endl;
		cout << " 3. Multiplication " << endl;
		cout << " 4. division " << endl;
		cout << " 5. Square " << endl;
		cout << " 6. Square Root " << endl;
		cout << " 7. Cube " << endl;
		cout << " 8. Cube Root " << endl;
		cout << " 9. Power " << endl;
		cout << " 10. Exit" << endl;
 		cin >> choice;

		switch (choice) 
		{
			case 1:  
			// do addition
				cout << "Enter first number " << endl;
				cin >> num1;

				cout << "Enter second number " << endl;
				cin >> num2;

				result = num1 + num2;
				cout << "Result is " << result;
				break;

			case 2:
			//do subtraction
			cout << "Enter First Number" << endl;
			cin >> num1;

			cout << "Enter Second Number" << endl;
			cin >> num2;

			result= num1-num2;
			cout << "Result is " << result;
			break;

			case 3:
			// do multiplication
			cout << "Enter First Number" << endl;
			cin >> num1;

			cout << "Enter Second Number" << endl;
			cin >> num2;

			result= num1*num2;
			cout << "Result is " << result;
			break;

			case 4:
			//do division
			cout << "Enter First Number" << endl;
			cin >> num1;

			cout << "Enter Second Number" << endl;
			cin >> num2;

			result= num1/num2;
			cout << "Result is " << result;
			if (num2==0)
				{
					cout << "invalid" << endl;
				}	
			else
			{
				result= num1/num2;
				cout << result;	
			}
			break;

			case 5:
			// do squared
			cout << "Enter First Number" << endl;
			cin >> num1;

			result= (num1, 2);
			cout << "Result is " << result;
			break;

			case 6:
			// do squareroot
			cout << "Enter First Number" << endl;
			cin >> num1;

			result= sqrt(num1);
			cout << "Result is " << result;
			break;

			case 7:
			// do cubed
			cout << "Enter First Number" << endl;
			cin >> num1;

			result= pow(num1, 3);
			cout << "Result is " << result;
			break;

			case 8:
			// do cubed root
			cout << "Enter First Number" << endl;
			cin >> num1;

			result= cbrt(num1);
			cout << "Result is " << result;
			break;

			case 9:
			// do power
			cout << "Enter First Number" << endl;
			cin >> num1;

			cout << "Enter Second Number" << endl;
			cin >> num2;

			result= pow(num1, num2);
			cout << "Result is" << result;
			break;

			case 10:
			// exit
			cout << "Bye" << endl;
			break;
			}
	} while (choice<1 || choice>9);

	return 0;

}

