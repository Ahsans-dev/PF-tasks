//#include <iostream>
//using namespace std;
//
//int main() {
//    int c_num, f_digit;
//    double usage, peak_usage, bill;
//    // Suppose this is flat rate
//    const double flatRate = 12.5;
//    cout << "Enter your customer number: ";
//    cin >> c_num;
//    cout << "Enter your monthly usage (in kWh): ";
//    cin >> usage;
//    f_digit = c_num / 10000;
//    bill = usage * flatRate;
//    switch (f_digit) {
//    case 2:
//    case 3:
//    case 5:
//    case 7:
//        if (usage < 300) {
//            bill = bill * 0.9;
//            cout << "10% discount applied." << endl;
//        }
//        else {
//            cout << "Flat rate applied (no discount)." << endl;
//        }
//        break;
//    case 1:
//    case 9:
//        cout << "Enter your peak-hour usage (in kWh): ";
//        cin >> peak_usage;
//        if (peak_usage > 0.5 * usage) {
//            bill *= 1.15;
//            cout << "15% surcharge applied." << endl;
//        }
//        else {
//            cout << "No surcharge applied." << endl;
//        }
//        break;
//    case 0:
//    case 4:
//    case 6:
//    case 8:
//        cout << "No discounts or surcharges. Flat rate applied." << endl;
//        break;
//    default:
//        cout << "Invalid customer number." << endl;
//    }
//    // Output
//    cout << "Final bill: " << bill << " PKR" << endl;
//    system("pause");
//    return 0;
//}
