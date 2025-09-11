#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string brand;

    void setBrand(string b) {
        brand = b;
    }
};

class Car : public Vehicle {
public:
    string model;
    double rentPerDay;

    void setCarDetails(string m, double rpd) {
        model = m;
        rentPerDay = rpd;
    }

    void showCarDetails() {
        cout << "Brand: " << brand << ", Model: " << model
             << ", Rent/Day: Rs. " << rentPerDay << endl;
    }
};

class Rental : public Car {
public:
    int days;

    void setRentalDays(int d) {
        days = d;
    }

    double calculateBill() {
        return rentPerDay * days;
    }
};

class Customer {
public:
    string name;
    long long phoneNumber;

    void setCustomer(string n, long long p) {
        name = n;
        phoneNumber = p;
    }
};

class Payment {
public:
    string paymentMode;

    void setPaymentMode(string mode) {
        paymentMode = mode;
    }
};

class Transaction : public Rental, public Customer, public Payment {
public:
    void displayTransaction() {
        cout << "\n------ Final Rental Transaction ------" << endl;
        cout << "Customer Name: " << name << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Car Details: ";
        showCarDetails();
        cout << "Rental Duration: " << days << " days" << endl;
        cout << "Payment Mode: " << paymentMode << endl;
        cout << "Total Bill Amount: Rs. " << calculateBill() << endl;
    }
};

class LuxuryCar : public Car {
public:
    void showFeatures() {
        cout << "Features: " << model << " (" << brand << ") includes a sunroof, leather seats, and an advanced infotainment system." << endl;
    }
};

class EconomyCar : public Car {
public:
    void showFeatures() {
        cout << "Features: " << model << " (" << brand << ") offers excellent mileage and low maintenance costs, ideal for city driving." << endl;
    }
};

int main() {
    cout << "===== C++ Car Rental System - Inheritance Demonstration =====" << endl;

    cout << "\n--- Demonstrating Single, Multilevel & Multiple Inheritance ---" << endl;
    
    Transaction t1;

    t1.setCustomer("Rahul Sharma", 9876543210);
    t1.setBrand("Mahindra");
    t1.setCarDetails("Scorpio-N", 4500);
    t1.setRentalDays(5);
    t1.setPaymentMode("UPI");

    t1.displayTransaction();

    cout << "\n\n--- Demonstrating Hierarchical Inheritance ---" << endl;
    
    LuxuryCar luxury;
    luxury.setBrand("Mercedes-Benz");
    luxury.setCarDetails("S-Class", 25000);
    cout << "\nLuxury Car Details:" << endl;
    luxury.showCarDetails();
    luxury.showFeatures();

    EconomyCar economy;
    economy.setBrand("Maruti Suzuki");
    economy.setCarDetails("Alto K10", 1800);
    cout << "\nEconomy Car Details:" << endl;
    economy.showCarDetails();
    economy.showFeatures();

    return 0;
}

