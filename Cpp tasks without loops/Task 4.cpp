//#include <iostream>
//using namespace std;
//int main() {
//	int age, conditions, errors = 0, insurance;
//	char smoker;
//	// for age
//	cout << "Enter your age: ";
//	cin >> age;
//	if (age < 0) {
//		cout << "Invalid, Age is cannot be negative." << endl;
//		errors = 1;
//	}
//	else if (age < 18) {
//		insurance = 2000;
//	}
//	else if (age <= 30) {
//		insurance = 3500;
//	}
//	else if (age <= 50) {
//		insurance = 5000;
//	}
//	else {
//		insurance = 8000;
//	}
//	// for conditions
//	if (errors == 0) {
//		cout << "Enter your pre-existing conditions: ";
//		cin >> conditions;
//		if (conditions < 0) {
//			cout << "Invalid, Number of conditions cannot be negative." << endl;
//			errors = 1;
//		}
//		else if (conditions == 1) {
//			insurance = insurance * 1.25;
//		}
//		else {
//			insurance = insurance * 1.5;
//		}
//	}
//	// for smoker
//	if (errors == 0) {
//		cout << "Are you a smoker?: (Y for yes and N for no) " << endl;
//		cin >> smoker;
//		if (smoker == 'Y' || smoker == 'y') {
//			insurance = insurance * 1.2;
//		}
//		else if (smoker != 'N' || smoker != 'n') {
//			cout << "Invalid, input cannot be other than 'Y' or 'N'" << endl;
//			errors = 1;
//		}
//	}
//	// Output
//	if (errors == 0) {
//		cout<<"Your total health insurance premium is: " << insurance << " PKR per month." << endl;
//	}
//	system("pause");
//	return 0;
//}