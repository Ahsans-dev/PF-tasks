//#include <iostream>
//using namespace std;
//
//int main() {
//    double income, annualTax = 0, rebate = 0, monthlyTax = 0;
//    char employmentType, isTeacher;
//    int error = 0;
//    // Taking Input of user details
//    cout << "Enter your annual income (PKR): ";
//    cin >> income;
//    cout << "Enter 'Y' for salaried or 'N' for non-salaried\nAre you salaried or non-salaried?: ";
//    cin >> employmentType;
//    cout << "Are you a teacher in a non-profit organization ('Y' for yes or 'N' for not)?: ";
//    cin >> isTeacher;
//    // Error in income input
//    if (income <= 0) {
//        cout << "Invalid income entered. Please enter a positive number." << endl;
//        error = 1;
//    }
//    if (error == 0) {
//        // Tax calculation for salaried peoples
//        if (employmentType == 'y' || employmentType == 'Y') {
//            if (income <= 600000) {
//                annualTax = 0;
//            }
//            else if (income <= 1200000) {
//                annualTax = (income - 600000) * 0.025;
//            }
//            else if (income <= 2400000) {
//                annualTax = 15000 + (income - 1200000) * 0.125;
//            }
//            else if (income <= 3600000) {
//                annualTax = 165000 + (income - 2400000) * 0.20;
//            }
//            else if (income <= 6000000) {
//                annualTax = 405000 + (income - 3600000) * 0.25;
//            }
//            else {
//                annualTax = 1005000 + (income - 6000000) * 0.325;
//            }
//        }
//        // Tax calculation for non-salaried people
//        else if (employmentType == 'N' || employmentType == 'n') {
//            if (income <= 600000) {
//                annualTax = 0;
//            }
//            else if (income <= 1200000) {
//                annualTax = (income - 600000) * 0.05;
//            }
//            else if (income <= 2400000) {
//                annualTax = 30000 + (income - 1200000) * 0.125;
//            }
//            else if (income <= 3600000) {
//                annualTax = 180000 + (income - 2400000) * 0.175;
//            }
//            else if (income <= 6000000) {
//                annualTax = 390000 + (income - 3600000) * 0.225;
//            }
//            else {
//                annualTax = 975000 + (income - 6000000) * 0.30;
//            }
//        }
//        else {
//            cout << "Invalid employment type entered." << endl;
//            error = 1;
//        }
//    }
//    if (error == 0) {
//        // 25% rebate for teachers in non-profit organizations
//        if (isTeacher == 'Y' || isTeacher == 'y') {
//            rebate = annualTax * 0.25;
//            annualTax = annualTax - rebate;
//        }
//        // Monthly tax calculation
//        monthlyTax = annualTax / 12;
//    }
//    // Output
//    if (error == 0) {
//        if (income <= 600000) {
//            cout << "No tax is deducted as your income is below PKR 600,000." << endl;
//        }
//        else {
//            cout << "Annual Income Tax: " << annualTax << " PKR" << endl;
//            cout << "Monthly Tax Deduction: " << monthlyTax << " PKR" << endl;
//        }
//    }
//    system("pause");
//    return 0;
//}
