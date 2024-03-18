#include <iostream>
using namespace std;
enum menuItems
{
	ENTER_DATA = 1,
	OUTPUT_DATA = 2,
	SORT_BY_MOBILE_NUM = 3,
	SORT_BY_TEL_NUM = 4,
	QUIT = 5
};
int main()
{
	const int n = 5;
	int userChoice, mobTel[n], tel[n], temp;
	bool isDataEntered = false;
	do {
		cout << "Your choice:\n";
		cout << "1 — enter data\n";
		cout << "2 — output data\n";
		cout << "3 — sort by mobile number\n";
		cout << "4 — sort by tel.number\n";
		cout << "5 — quit\n";
		cin >> userChoice;
		switch (userChoice) {
		case ENTER_DATA:
		{
			cout << "Please, enter data for each "
				"customer\n";
			isDataEntered = true;
			for (int i = 0; i < n; i++)
			{
				cout << "Input mobile number for ";
				cout << i + 1 << " customer:\n";
				cin >> mobTel[i];
				cout << "Input tel. number for ";
				cout << i + 1 << " customer:\n";
				cin >> tel[i];
			}
			break;
		}
		case OUTPUT_DATA:
		{
			if (isDataEntered)
			{
				cout << "Customer's data:\n";
			}
			else
			{
				cout << "There is no data!" << "\n";
				cout << "Please, enter data for each "
					"customer at first\n";
			}
			break;
		}
		case SORT_BY_MOBILE_NUM:
		{
			if (isDataEntered)
			{
				cout << "Sorting data by mobile "
					"number ....\n";
			}
			else
			{
				cout << "There is no data!" << "\n";
				cout << "Please, enter data for "
					"each customer at first\n";
			}
			break;
		}
		case SORT_BY_TEL_NUM:
		{
			if (isDataEntered)
			{
				cout << "Sorting data by tek. "
					"number ....\n";
			}
			else
			{
				cout << "There is no data!" << "\n";
				cout << "Please, enter data for "
					"each customer at first\n";
			}
			break;
		}
		case QUIT:
		{
			cout << "See you!";
			break;
		}
		default:
			cout << "Wrong menu item!";
		}
	} while (userChoice != 5);
	return 0;
}