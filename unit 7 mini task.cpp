#include <iostream>
using namespace std;

int main() {
    float price1, price2;
    int qty1, qty2;
    string item1, item2;

    const float TAX_RATE = 0.18;   

    cout << "GENERAL STORE BILLING SYSTEM" << endl;
    cout << "FIRST ITEM:\n";
    cout << "Item name: ";
    cin >> item1;
    cout << "Price: ?";
    cin >> price1;
    cout << "Quantity: ";
    cin >> qty1;

    cout << "SECOND ITEM:\n";
    cout << "Item name: ";
    cin >> item2;
    cout << "Price: ?";
    cin >> price2;
    cout << "Quantity: ";
    cin >> qty2;

    float item1Total = price1 * qty1;
    float item2Total = price2 * qty2;
    float subTotal = item1Total + item2Total;
    
    float taxAmount = subTotal * TAX_RATE;
    float finalTotal = subTotal + taxAmount;

    cout << "--- BILL SUMMARY ---" << endl;
    cout << item1 << ": ?" << price1 << " x " << qty1 << " = ?" << item1Total << endl;
    cout << item2 << ": ?" << price2 << " x " << qty2 << " = ?" << item2Total << endl;
    cout << "---------------------" << endl;
    cout << "Sub Total : ?" << subTotal << endl;
    cout << "Tax : ?" << taxAmount << endl;
    cout << "TOTAL TO PAY: ?" << finalTotal << endl;

    return 0;
}
