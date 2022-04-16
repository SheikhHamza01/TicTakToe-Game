// AT THE TIME OF COMPILATION , PLEASE OPEN THE FULL SCREEN(COMPILER) MODE , BECAUSE WE HAVE MADE THE ADJUSTMENTS
// ACCORDING TO FULL SCREEN MODE. THANK YOU!


#include<iostream>
int n;
int num;
int flag = 0;
using namespace std;
int main()
{
	char name[300];
	char secondName[300];
	char alphabet;

	cout << "\t\t\t\t\t\t\t\t" << "       " << "|TIC-TAC-TOE|" << endl << endl;

	char arr[3][3] = { {'*','*','*'} ,{'*','*','*'},{'*','*','*'} };

	for (int i = 0; i < 3; i++)
	{
		cout << "\t\t\t\t\t\t\t\t\t";
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << "    ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "\t\t\t\t\t\t\tPlayer 1 : " << " " << "Enter Your Name KING :" << " ";
	cin.getline(name, 300);
	cout << endl;
	cout << "\t\t\t\t\t\t\tPlayer 2 : " << " " << "Enter Your Name KING :" << " ";
	cin.getline(secondName, 300);
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t So , It's" << " " << name << " " << "VS" << " " << secondName;
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t" << " " << name << "!" << " " << "You have assigned the CHARACTER X. " << endl << endl;
	cout << "\t\t\t\t\t\t\t" << " " << secondName << "!" << " " << "You have assigned the CHARACTER O." << endl << endl;
	cout << "************************************************************************************************************************************************************************" << endl;
	for (int i = 0; i < 9; i++)
	{
		if (i % 2 == 0)

		{

		label:
			cout << endl;
			cout << "\t\t\t\t\t" << name << "!" << "(P1)" << " " << "Please Enter the Desired Row Number And the Desired Coloumn Number: " << endl << endl;
			cout << "\t\t\t\t\t\t\t\t\t" << "    ", cin >> n;
			cout << "\t\t\t\t\t\t\t\t\t" << "    ", cin >> num;
			while (n < 1 || n>3 || num < 1 || num>3)
			{
				cout << "\t\t\t\t\t\t\t\tInvalid LOCATION please enter again." << endl;
				cout << "\t\t\t\t\t\t\t\t\t     ", cin >> n;
				cout << "\t\t\t\t\t\t\t\t\t     ", cin >> num;

			}
			cout << endl;

			if (arr[n - 1][num - 1] == '*')
			{
				alphabet = 'X';
				arr[n - 1][num - 1] = alphabet;

				for (int i = 0; i < 3; i++)
				{
					cout << "\t\t\t\t\t\t\t\t\t";
					for (int j = 0; j < 3; j++)
					{

						cout << arr[i][j] << "    ";



					}
					cout << endl;
				}
			}
			else {
				cout << "\t\t\t\t\t\tINVALID INPUT , THIS LOCATION HAS BEEN USED EARLIER" << endl;
				goto label;
			}
			cout << endl;

		}
		else
		{

		label1:
			cout << endl;
			cout << "\t\t\t\t\t" << secondName << "!" << "(P2)" << " " << "Please Enter the Desired Row Number And the Desired Coloumn Number: " << endl << endl;
			cout << "\t\t\t\t\t\t\t\t\t " << "    ", cin >> n;
			cout << "\t\t\t\t\t\t\t\t\t" << "     ", cin >> num;
			while (n < 1 || n>3 || num < 1 || num>3)
			{
				cout << "\t\t\t\t\t\t\t\tInvalid LOCATION please enter again." << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "     ", cin >> n;
				cout << "\t\t\t\t\t\t\t\t\t" << "     ", cin >> num;

			}
			cout << endl;
			alphabet = 'O';
			if (arr[n - 1][num - 1] == '*')
			{
				arr[n - 1][num - 1] = alphabet;

				for (int i = 0; i < 3; i++)
				{
					cout << "\t\t\t\t\t\t\t\t\t";
					for (int j = 0; j < 3; j++)
					{


						cout << arr[i][j] << "    ";


					}
					cout << endl;
				}
			}
			else {
				cout << "\t\t\t\t\t\tINVALID INPUT , THIS LOCATION HAS BEEN USED EARLIER";
				goto label1;
			}
		}
			cout << endl;

			if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X'
				|| arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X'
				|| arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X'
				|| arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X'
				|| arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X'
				|| arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X'
				|| arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X' //DIAGONALS
				|| arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')   // for diagonals
			{
				cout << "\t\t\t\t\t\t\t\t CONGRATULATIONS!" << " " << name << " " << "wins." << endl << endl;
				cout << "\t\t\t\t\t\t\t" << "   " << secondName << " ! " << "Better luck Next Time champ.";
				cout << endl << endl;
				flag = 1;
				break;
			}
			else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O'
				|| arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O'
				|| arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O'
				|| arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O'
				|| arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O'
				|| arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O'
				|| arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O' //DIAGONALS
				|| arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')   // for diagonals
			{
				cout << "\t\t\t\t\t\t\t\t CONGRATULATIONS!" << " " << secondName << " " << "wins." << endl << endl;
				cout << "\t\t\t\t\t\t\t" << "   " << name << " ! " << "Better luck Next Time champ.";
				cout << endl << endl;
				flag = 1;
				break;
			}
	}
	if (flag == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\t Match tied " << endl << endl;
	}
	//*****************************************************************************************************************************




	system("pause");
}