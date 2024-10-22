//#include <iostream>
//using namespace std;
//int main() {
//	int value, choice, num, digits = 0, error = 0, result;
//	int d1, d2, d3, d4, d5;
//	cout << "Choices are following:\n\tPress 1 for binary\n\tPress 2 for octal" << endl;
//	cout << "Enter your choice: ";
//	cin >> choice;
//	switch (choice) {
//	case 1: {
//		cout << "Enter your binary number: ";
//		cin >> num;
//		value = num;
//		// digits counting
//		if (num < 100 || num > 11111) {
//			error = 1;
//			cout << "Invalid digits, Number should be of 3 or 4 or 5 digits" << endl;
//		}
//		else {
//			if (num < 1000) {
//				digits = 3;
//			}
//			else if (num < 10000) {
//				digits = 4;
//			}
//			else {
//				digits = 5;
//			}
//		}
//		// digits should be 0 or 1
//		// digit = 3
//		if (digits == 3 && error == 0) {
//			d1 = num % 10;
//			num = num / 10;
//			if (d1 != 0 && d1 != 1) {
//				error = 2;
//			}
//			d2 = num % 10;
//			num = num / 10;
//			if (d2 != 0 && d2 != 1) {
//				error = 2;
//			}
//			d3 = num % 10;
//			num = num / 10;
//			if (d3 != 0 && d3 != 1) {
//				error = 2;
//			}
//		}
//		// digit = 4
//		if (digits == 4 && error == 0) {
//			d1 = num % 10;
//			num = num / 10;
//			if (d1 != 0 && d1 != 1) {
//				error = 2;
//			}
//			d2 = num % 10;
//			num = num / 10;
//			if (d2 != 0 && d2 != 1) {
//				error = 2;
//			}
//			d3 = num % 10;
//			num = num / 10;
//			if (d3 != 0 && d3 != 1) {
//				error = 2;
//			}
//			d4 = num % 10;
//			num = num / 10;
//			if (d4 != 0 && d4 != 1) {
//				error = 2;
//			}
//		}
//		// digits = 5
//		if (digits == 5 && error == 0) {
//			d1 = num % 10;
//			num = num / 10;
//			if (d1 != 0 && d1 != 1) {
//				error = 2;
//			}
//			d2 = num % 10;
//			num = num / 10;
//			if (d2 != 0 && d2 != 1) {
//				error = 2;
//			}
//			d3 = num % 10;
//			num = num / 10;
//			if (d3 != 0 && d3 != 1) {
//				error = 2;
//			}
//			d4 = num % 10;
//			num = num / 10;
//			if (d4 != 0 && d4 != 1) {
//				error = 2;
//			}
//			d5 = num % 10;
//			num = num / 10;
//			if (d5 != 0 && d5 != 1) {
//				error = 2;
//			}
//		}
//		if (error == 2) {
//			cout << "Invalid input, The digits of number should be 0 or 1" << endl;
//		}
//		// conversion of binary into decimal
//		// digit = 3
//		if (digits == 3 && error == 0) {
//			result = (d1 * 1) + (d2 * 2) + (d3 * 4);
//		}
//		// digit = 4
//		if (digits == 4 && error == 0) {
//			result = (d1 * 1) + (d2 * 2) + (d3 * 4) + (d4 * 8);
//		}
//		// digit = 5
//		if (digits == 5 && error == 0) {
//			result = (d1 * 1) + (d2 * 2) + (d3 * 4) + (d4 * 8) + (d5 * 16);
//		}
//		// result
//		if (error == 0) {
//			cout << "The Decimal conversion of '" << value << "' is " << result << endl;
//		}
//		break;
//	}
//	case 2: {
//		cout << "Enter your octal number: ";
//		cin >> num;
//		value = num;
//		// digits counting
//		if (num < 100 || num > 77777) {
//			error = 1;
//			cout << "Invalid digits, Number should be of 3 or 4 or 5 digits" << endl;
//		}
//		else {
//			if (num < 1000) {
//				digits = 3;
//			}
//			else if (num < 10000) {
//				digits = 4;
//			}
//			else {
//				digits = 5;
//			}
//		}
//		// digits should be 0 or 1
//		// digit = 3
//		if (digits == 3 && error == 0) {
//			d1 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//			d2 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//			d3 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//		}
//		// digit = 4
//		if (digits == 4 && error == 0) {
//			d1 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//			d2 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//			d3 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//			d4 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//		}
//		// digits = 5
//		if (digits == 5 && error == 0) {
//			d1 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//			d2 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//			d3 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//			d4 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//			d5 = num % 10;
//			num = num / 10;
//			if (d1 < 0 || d1 > 7) {
//				error = 2;
//			}
//		}
//		if (error == 2) {
//			cout << "Invalid input, The digits of number should be 0 to 7" << endl;
//		}
//		// conversion of binary into decimal
//		// digit = 3
//		if (digits == 3 && error == 0) {
//			result = (d1 * 1) + (d2 * 8) + (d3 * 64);
//		}
//		// digit = 4
//		if (digits == 4 && error == 0) {
//			result = (d1 * 1) + (d2 * 8) + (d3 * 64) + (d4 * 512);
//		}
//		// digit = 5
//		if (digits == 5 && error == 0) {
//			result = (d1 * 1) + (d2 * 8) + (d3 * 64) + (d4 * 512) + (d5 * 4096);
//		}
//		// result
//		if (error == 0) {
//			cout << "The Decimal conversion of '" << value << "' is " << result << endl;
//		}
//		break;
//	}
//	default: {
//		cout << "Invalid choice" << endl;
//	}
//	}
//	system("pause");
//	return 0;
//}