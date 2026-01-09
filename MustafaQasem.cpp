#include <iostream>
using namespace std;


// Full Name: مصطفى قاسم وسمي
// Group: B2


int main() {
    int consumption;
    int pricePerUnit;
    int totalBill;

    cout << "Enter electricity consumption (in kilowatts): ";
    cin >> consumption;

    if (consumption <= 100) {
        pricePerUnit = 250;
    }
    else if (consumption <= 300) {
        pricePerUnit = 300;
    }
    else {
        pricePerUnit = 350;
    }

    totalBill = consumption * pricePerUnit;

    if (totalBill > 100000) {
        cout << "\nHigh consumption – Please reduce usage\n";
    }
    else {
        cout << "\nNormal consumption\n";
    }

    cout << "\nElectricity consumption: " << consumption << " units";
    cout << "\nPrice per unit: " << pricePerUnit << " IQD";
    cout << "\nTotal bill amount: " << totalBill << " IQD";

    return 0;
}
