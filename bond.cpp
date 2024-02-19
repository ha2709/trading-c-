#ifndef AndysPointers_Bond_h
#define AndysPointers_Bond_h

class Bond {
public:
    Bond(); // Constructor

    void setPrincipal(double p); // Setter for principal

private:
    double principal; // Principal amount of the bond
    double rate; // Interest rate of the bond
    double yearsToMaturity; // Number of years until bond matures
    char paymentType; // Payment type, 'A' for annuity, etc.
};

#endif /* AndysPointers_Bond_h */

// Implementation of Bond class methods
Bond::Bond() {
    // Initialize default values if necessary
    principal = 0.0;
    rate = 0.0;
    yearsToMaturity = 0;
    paymentType = 'A'; // Assuming 'A' is the default payment type
}

void Bond::setPrincipal(double p) {
    principal = p;
}

// Add more methods to manipulate and access the data members
// as required for your pricing model, such as setters and getters
// for the rate, yearsToMaturity, paymentType, and methods to calculate
// the price of the bond, yield, etc.
