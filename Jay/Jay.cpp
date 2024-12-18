#include <iostream>
#include <string>

using namespace std;

class Jays_car {
private:
    string model_name;
    double price;
    double preference;

public:
    Jays_car(string model_name, double price, double preference) {
        this->model_name = model_name;
        this->price = price;
        this->preference = preference;
    }

    void Sams_duty() {
        if (preference > 5) {
            cout << "You must buy " << model_name << " for your head student Jay.\n";
            cout << "And its price is " << price << " X 100 million Won. Work hard!^^\n";
        } else {
            cout << "You do not need to buy " << model_name << " for your head student Jay.\n";
            cout << "You can spend " << price << " X 100 million Won for your own!^^\n";
        }

        cout << endl;
    }
};

int main() {
    Jays_car Ferrari("296 GTB", 4.21000000, 8);
    Jays_car Mercedes("AMG ONE", 34.24625750, 10);
    Jays_car Tesla("Model S Plaid", 1.28848581, -9999); // Kinda shit.

    Ferrari.Sams_duty();
    Mercedes.Sams_duty();
    Tesla.Sams_duty();

    return 0;
}
