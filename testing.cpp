#include <iostream>
using namespace std;
int num;

int main()
{
	cout << "Enter Number: ";
	cin >> num;
	system("cls");
	for (int i = 1; i <num;i++)
	{
		cout << endl;


		for (int k = num - 1; k >= i; k--)
			cout << " ";
		for (int j = 0; j < i; j++) {

			cout << "*";
			cout << " ";
		}
				
	}
	for (int i = 1; i < num  ; i++)
	{
		cout << endl;

		for (int j = 0; j < num -2 ; j++)
			cout << " ";
		cout << "| |";
		
	}
	return 0;
}