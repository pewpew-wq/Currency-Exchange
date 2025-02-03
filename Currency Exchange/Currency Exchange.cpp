#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const double USD_TO_EUR = 0.95;
const double USD_TO_JPY = 140.0;
const double USD_TO_GBP = 0.82;
const double EUR_TO_USD = 1.05;
const double EUR_TO_JPY = 145.0;
const double EUR_TO_GBP = 0.86;
const double GBP_TO_EUR = 1.16;
const double GBP_TO_USD = 1.22;
const double GBP_TO_JPY = 158.54;
const double JPY_TO_USD = 0.0077;
const double JPY_TO_EUR = 0.0077;
const double JPY_TO_GBP = 0.0063;

double convertCurrency(float amount, string from, string to) {
    

    if (from == "USD" || from == "usd" && to == "EUR" || to == "eur") {
        double rate = USD_TO_EUR;
        return amount * rate;
    }
    else if (from == "USD" || from == "usd" && to == "gbp" || to == "GBP") {
        double rate = USD_TO_GBP;
        return amount * rate;
    }
    else if (from == "USD" || from == "usd" && to == "jpy" || to == "JPY") {
        double rate = USD_TO_JPY;
        return amount * rate;
    }
    else if (from == "EUR" || from == "eur" && to == "usd" || to == "USD") {
        double rate = EUR_TO_USD;
        return amount * rate;
    }
    else if (from == "EUR" || from == "eur" && to == "gbp" || to == "GBP") {
        double rate = EUR_TO_GBP;
        return amount * rate;
    }
    else if (from == "EUR" || from == "eur" && to == "jpy" || to == "JPY") {
        double rate = EUR_TO_JPY;
        return amount * rate;
    }
    else if (from == "GBP" || from == "gbp" && to == "usd" || to == "USD") {
        double rate = GBP_TO_USD;
        return amount * rate;
    }
    else if (from == "GBP" || from == "gbp" && to == "eur" || to == "EUR") {
        double rate = GBP_TO_EUR;
        return amount * rate;
    }
    else if (from == "GBP" || from == "gbp" && to == "jpy" || to == "JPY") {
        double rate = GBP_TO_JPY;
        return amount * rate;
    }
    else if (from == "JPY" || from == "jpy" && to == "eur" || to == "EUR") {
        double rate = JPY_TO_EUR;
        return amount * rate;
    }
    else if (from == "JPY" || from == "jpy" && to == "usd" || to == "USD") {
        double rate = JPY_TO_USD;
        return amount * rate;
    }
    else if (from == "JPY" || from == "jpy" && to == "gbp" || to == "GBP") {
        double rate = JPY_TO_GBP;
        return amount * rate;
    }
    else {
        cout << "invalid currency pair" << endl;
        return 0; 
    }

}

int main() {
    float amount;
    string from;
    string to;

    cout << "The amount you're converting: ";
    cin >> amount;
    if (cin.fail() || amount < 0) {
        cout << "invalid amount entered, no negatives." << endl;
        return 1;
    }

    cout << "Currency to convert from (USD, EUR, GBP, JPY): ";
    cin >> from;

    cout << "Currency to convert to (USD, EUR, GBP, JPY): ";
    cin >> to;

    double convertedAmount = convertCurrency(amount, from, to);

    if (from == "USD" || from == "usd" && to == "eur" || to == "EUR") {
        
        const_cast<float&>(amount) = amount * 0.9;
        double promoConvertedAmount = amount;
        cout << amount << " " << from << " converted with promotion is " << promoConvertedAmount << " " << to << endl;
    }
    else {
        cout << fixed << setprecision(2);
        cout << amount << " " << from << " converted is " << convertedAmount << " " << to << endl;
    }

    return 0;
}