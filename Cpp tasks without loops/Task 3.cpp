//#include <iostream>
//using namespace std;
//int main() {
//	int units, error = 0;
//	float bill, amount, tax;
//	cout << "Enter your units: ";
//	cin >> units;
//	// bill calculation without tax
//	if (units < 0) {
//		error = 1;
//		cout << "Invalid input. Unit should be a positive number";
//	}
//	else if (units <= 100) {
//		bill = units * 5;
//	}
//	else if (units <= 300) {
//		bill = (100 * 5) + ((units - 100) * 7);
//	}
//	else if (units <= 400) {
//		bill = (100 * 5) + (200 * 7) + ((units - 300) * 24.40);
//	}
//	else if (units <= 500) {
//		bill = (100 * 5) + (200 * 7) + (100 * 24.40) + ((units - 400) * 24.91);
//	}
//	else if (units <= 600) {
//		bill = (100 * 5) + (200 * 7) + (100 * 24.40) + (100 * 24.91) + ((units - 500) * 26.15);
//	}
//	else if (units <= 700) {
//		bill = (100 * 5) + (200 * 7) + (100 * 24.40) + (100 * 24.91) + (100 * 26.15) + ((units - 600) * 27.59);
//	}
//	else {
//		error = 1;
//		cout << "Limit Exceed.";
//	}
//	if (error == 0) {
//		// Tax calculation
//		tax = bill / 10;
//		// Bill with tax
//		amount = tax + bill;
//		// Output
//		cout << "Total Bill (before tax): " << bill << endl;
//		cout << "Total Tax: " << tax << endl;
//		cout << "Total Bill (after tax): " << amount << endl;
//	}
//	system("pause");
//	return 0;
//}