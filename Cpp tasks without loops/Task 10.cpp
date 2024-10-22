//#include <iostream>
//using namespace std;
//
//int main() {
//    int weather;
//    float temperature, windSpeed;
//    bool tripAllowed = true;
//    cout << "Enter the weather ( enter 1 for sunny, 2 for rainy, 3 for snowy, 4 for foggy): ";
//    cin >> weather;
//    cout << "Enter the temperature (in Celsius): ";
//    cin >> temperature;
//    cout << "Enter the wind speed (in km/h): ";
//    cin >> windSpeed;
//    // checking weather
//    if (weather != 1) {
//        tripAllowed = false;
//    }
//    // checking temperature
//    if (temperature < 10 || temperature > 40) {
//        tripAllowed = false;
//    }
//    // checking wind
//    if (windSpeed > 50) {
//        tripAllowed = false;
//    }
//    if (tripAllowed) {
//        cout << "You are allowed to go on trip." << endl;
//    }
//    else {
//        cout << "The trip is not allowed due to unsafe conditions." << endl;
//    }
//    system("pause");
//    return 0;
//}
