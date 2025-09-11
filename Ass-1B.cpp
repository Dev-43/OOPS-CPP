#include <iostream>
#include <string>

using namespace std;

class Payment {
public:
    // Overloaded function for Credit Card Payment
    void makePayment(string cardNumber, string expiryDate, string cvv) {
        cout << "\n[Credit Card Payment]" << endl;
        cout << "Processing payment with Credit Card..." << endl;
        cout << "Card Number: " << cardNumber << endl;
        cout << "Expiry Date: " << expiryDate << endl;
        cout << "CVV: " << cvv << endl;
        cout << "Payment Successful!" << endl;
    }

    // Overloaded function for Debit Card Payment
    void makePayment(string cardNumber, string expiryDate, string cvv, string pin) {
        cout << "\n[Debit Card Payment]" << endl;
        cout << "Processing payment with Debit Card..." << endl;
        cout << "Card Number: " << cardNumber << endl;
        cout << "Expiry Date: " << expiryDate << endl;
        cout << "CVV: " << cvv << endl;
        cout << "PIN: ****" << endl; // PIN is masked for security
        cout << "Payment Successful via Debit Card!" << endl;
    }

    // Overloaded function for UPI Payment
    void makePayment(string upiID) {
        cout << "\n[UPI Payment]" << endl;
        cout << "Processing payment via UPI..." << endl;
        cout << "UPI ID: " << upiID << endl;
        cout << "Payment Successful via UPI." << endl;
    }

    // Overloaded function for Wallet Payment
    void makePayment(string walletName, double amount) {
        cout << "\n[Wallet Payment]" << endl;
        cout << "Processing payment from Wallet..." << endl;
        cout << "Wallet: " << walletName << endl;
        cout << "Amount: Rs. " << amount << endl;
        cout << "Payment Successful via Wallet." << endl;
    }
};

int main() {
    cout << "===== Welcome to Online Shopee Payment Gateway =====" << endl;
    Payment p;

    // Call different overloaded functions to simulate various payment types
    
    // 1. Credit card payment
    p.makePayment("1234-5678-9876-5432", "12/26", "698");

    // 2. Debit card payment
    p.makePayment("9876-5432-1234-5678", "11/27", "456", "4321");

    // 3. UPI payment
    p.makePayment("customer@okbank");

    // 4. Wallet payment
    p.makePayment("MyWallet", 75.50);

    return 0;
}

