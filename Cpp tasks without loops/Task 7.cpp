#include <iostream>
using namespace std;

int main() {
    char c1, c2, c3, c4, c5;
    cout << "Enter your encrypted message: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    // Scheme 1
    if (c1 >= 'A' && c1 <= 'Z') {
        // step 1
        c1 = c1 - 3;
        c2 = c2 - 3;
        c3 = c3 - 3;
        c4 = c4 - 3;
        c5 = c5 - 3;
        // step 2
        cout << "Decrypted message (Scheme 1): ";
        cout << c5 << c4 << c3 << c2 << c1 << endl;
    }
    // Scheme 2
    else if (c1 >= 'a' && c1 <= 'z') {
        // Step 1
        // For c1
        if (c1 == 'a') 
            c1 = 'e';
        else if (c1 == 'e')
            c1 = 'i';
        else if (c1 == 'i') 
            c1 = 'o';
        else if (c1 == 'o') 
            c1 = 'u';
        else if (c1 == 'u') 
            c1 = 'a';
        // For c2
        if (c2 == 'a')
            c2 = 'e';
        else if (c2 == 'e') 
            c2 = 'i';
        else if (c2 == 'i') 
            c2 = 'o';
        else if (c2 == 'o') 
            c2 = 'u';
        else if (c2 == 'u')
            c2 = 'a';
        // For c3
        if (c3 == 'a') 
            c3 = 'e';
        else if (c3 == 'e')
            c3 = 'i';
        else if (c3 == 'i') 
            c3 = 'o';
        else if (c3 == 'o') 
            c3 = 'u';
        else if (c3 == 'u') 
            c3 = 'a';
        // For c4
        if (c4 == 'a') 
            c4 = 'e';
        else if (c4 == 'e') 
            c4 = 'i';
        else if (c4 == 'i') 
            c4 = 'o';
        else if (c4 == 'o') 
            c4 = 'u';
        else if (c4 == 'u')
            c4 = 'a';
        // For c5
        if (c5 == 'a') 
            c5 = 'e';
        else if (c5 == 'e') 
            c5 = 'i';
        else if (c5 == 'i') 
            c5 = 'o';
        else if (c5 == 'o') 
            c5 = 'u';
        else if (c5 == 'u') 
            c5 = 'a';
        // Step 2
        if (c1 >= 'a' && c1 <= 'z') {
            c1 = c1 - 32;
        }
        else if (c1 >= 'A' && c1 <= 'Z') {
            c1 = c1 + 32;
        }
        if (c2 >= 'a' && c2 <= 'z') {
            c2 = c2 - 32;
        }
        else if (c2 >= 'A' && c2 <= 'Z') {
            c2 = c2 + 32;
        }
        if (c3 >= 'a' && c3 <= 'z') {
            c3 = c3 - 32;
        }
        else if (c3 >= 'A' && c3 <= 'Z') {
            c3 = c3 + 32;
        }
        if (c4 >= 'a' && c4 <= 'z') {
            c4 = c4 - 32;
        }
        else if (c4 >= 'A' && c4 <= 'Z') {
            c4 = c4 + 32;
        }
        if (c5 >= 'a' && c5 <= 'z') {
            c5 = c5 - 32;
        }
        else if (c5 >= 'A' && c5 <= 'Z') {
            c5 = c5 + 32;
        }
        cout << "Decrypted message (Scheme 2): ";
        cout << c1 << c2 << c3 << c4 << c5 << endl;
    }
    else {
        cout << "Invalid input! The first character must be an alphabet." << endl;
    }
    system("pause");
    return 0;
}
