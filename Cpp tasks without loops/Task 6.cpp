//#include <iostream>
//using namespace std;
//
//int main() {
//    // Suppose these details
//    int correctUsername = 123456, correctPassword = 7890, correctOTP = 654321;
//    // For inputs from user
//    int username, password, OTP;
//    bool failedAttempts = false;
//
//    cout << "Enter your username: ";
//    cin >> username;
//    // for checking username
//    if (username != correctUsername) {
//        cout << "Error: Incorrect username." << endl;
//        failedAttempts = true;
//    }
//    // Taking password if username is correct
//    if (!failedAttempts) {
//        cout << "Enter your password: ";
//        cin >> password;
//        // for checking password
//        if (password != correctPassword) {
//            cout << "Error: Incorrect password." << endl;
//            failedAttempts = true;
//        }
//    }
//    // Taking OTP if username and password is correct
//    if (!failedAttempts) {
//        cout << "Enter the 6-digit OTP: ";
//        cin >> OTP;
//        // for checking OTP
//        if (OTP != correctOTP) {
//            cout << "Error: Incorrect OTP." << endl;
//            failedAttempts = true;
//        }
//    }
//    // Final Output
//    if (!failedAttempts) {
//        cout << "Access Granted. Welcome!" << endl;
//    }
//    else {
//        cout << "Login Failed due to the errors." << endl;
//    }
//    system("pause");
//    return 0;
//}
