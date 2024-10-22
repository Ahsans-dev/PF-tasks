//#include <iostream>
//using namespace std;
//int main() {
//	int num, rem, value;
//	cout << "Enter your number: ";
//	cin >> num;
//	value = num;
//	// Step 1
//	rem = num % 10;
//	num = num / 10;
//	if (rem % 2 == 0) {
//		num = num + 1;
//		if (num > 99999) {
//			num = num - 3;
//		}
//	}
//	else {
//		num = num - 1;
//	}
//	// Step 2
//	rem = num % 10;
//	num = num / 10;
//	if (rem % 2 == 0) {
//		num = num + 1;
//		if (num > 9999) {
//			num = num - 3;
//		}
//	}
//	else {
//		num = num - 1;
//	}
//	// Step 3
//	rem = num % 10;
//	num = num / 10;
//	if (rem % 2 == 0) {
//		num = num + 1;
//		if (num > 999) {
//			num = num - 3;
//		}
//	}
//	else {
//		num = num - 1;
//	}
//	// Step 4
//	rem = num % 10;
//	num = num / 10;
//	if (rem % 2 == 0) {
//		num = num + 1;
//		if (num > 99) {
//			num = num - 3;
//		}
//	}
//	else {
//		num = num - 1;
//	}
//	// Step 5
//	rem = num % 10;
//	num = num / 10;
//	if (rem % 2 == 0) {
//		num = num + 1;
//		if (num > 9) {
//			num = num - 3;
//		}
//	}
//	else {
//		num = num - 1;
//	}
//	cout << "Final digit is " << num << endl;
//	system("pause");
//	return 0;
//}