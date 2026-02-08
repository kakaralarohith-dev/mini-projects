#include <iostream>  //header and library file
using namespace std; //namespace

int main() {
    string itemName, coustmername;//we used string for to type names and words
    float price,total;            //here we used float for decimel points
    int quantity;                 //here we used int for integers
    long long phonenumber;        //we used for stored large numbers

    cout << "Welcome to D mart Simple Billing system\n";//welcome message
    
    cout<<"enter coustmer name:";  //taking coustmer name as input
    cin>>coustmername;
    cout<<"enter phone number:";   //taking phone numberas input
    cin>>phonenumber;

    cout << "Enter item name: ";   //taking item name as input
    cin >> itemName;

    cout << "Enter price: ";      //taking enter price as input
    cin >> price;

    cout << "Enter quantity: ";   //taking enter quantity as input
    cin >> quantity;

    total = price * quantity;     //we calculate total bill using arthmetic opreater = and *
    
    //priniting bill details here we see final bill in output
    cout << "\n----- BILL -----\n";
    cout << "\n Damani Mart store sadguru Nagar,rajkot,gujarat 360005\n";
    cout << "coustmer name:"<< coustmername <<endl;
    cout << "phone number:"<< phonenumber <<endl;
    cout << "Item: " << itemName << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Amount: " << total << endl;
    cout << "Thank You!\n";
    cout << "visit again\n";//thank you message and respectful message

    return 0;
}
