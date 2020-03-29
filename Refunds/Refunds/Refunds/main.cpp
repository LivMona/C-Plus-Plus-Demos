#include <iostream>

using namespace std;

int main()
{
	int reasonNo = 0, cashOrder = 0;
	string nameCust, nameStore;

	do
	{
		// Select refund reason
		do
		{
			cout << "Select one of the following options:\n\t1. Refund - NA\n\t2. Refund - Store Requested\n\t3. Refund - Cust Asks\n\t9. Exit" << endl;
			cin >> reasonNo;

			if (reasonNo == 9)
			{
				break;
			}
		} while (reasonNo < 1 || reasonNo > 3);
		
		if (reasonNo == 9)
		{
			break;
		}
		// Get order details
		cout << "Enter Customers Name: ";
		cin >> nameCust;
		cout << "Enter Store Name: ";
		cin >> nameStore;
		cout << "Was this a cash order? \n1 = Yes\t2 = No" << endl;
		cin >> cashOrder;

		switch (reasonNo)
		{
			case 1:
				cout << "Hi " + nameCust + ",\n\nUnfortunately we cannot to contact " + nameStore + " so we're unable to complete your order.\n";
				break;
			case 2:
				cout << "Hi " + nameCust + ",\n\nUnfortunately " + nameStore + " cannot complete your order.\n";
				break;
			case 3:
				cout << "Hi " + nameCust + ",\n\nYour order at " + nameStore + " has been cancelled.\n";
			default:
				break;
		}

		if (cashOrder == 2)
		{
			cout << "\nA full refund will be in your account in 1-4 business days.\n\n";
		}


	} while (reasonNo != 9);




	return 0;
}