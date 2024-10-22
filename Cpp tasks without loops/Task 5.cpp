//#include <iostream>
//using namespace std;
//int main() {
//	int income, score, ratio, status;
//	cout << "Enter your annual income: ";
//	cin >> income;
//	if (income < 1500000) {
//		cout << "You are not eligible for loan. (Reason: Income is too low)" << endl;
//	}
//	else {
//		cout << "Enter your Credit score: ";
//		cin >> score;
//		if (score <= 700) {
//			cout << "You are not eligible for loan. (Reason: Credit score is too low)" << endl;
//		}
//		else {
//			cout << "Enter your Debt-to-income ratio (in %): ";
//			cin >> ratio;
//			if (ratio > 35) {
//				cout << "You are not eligible for loan. (Reason:  High debt-to-income ratio)" << endl;
//			}
//			else {
//				cout << "Enter your employment status (in years): ";
//				cin >> status;
//				if (status < 2) {
//					cout << "You are not eligible for loan. (Reason: Insufficient employment duration)" << endl;
//				}
//				else {
//					cout << "You are eligible for loan." << endl;
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}