#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string brand;
    string model;
    int ramSize;
    int storageSize;
    double screenSize;

public:
    Laptop(string b, string m, int ram, int storage, double screen)
        : brand(b), model(m), ramSize(ram), storageSize(storage), screenSize(screen) {}

    void displayInfo() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ramSize << " GB" << endl;
        cout << "Storage: " << storageSize << " GB" << endl;
        cout << "Screen Size: " << screenSize << " inches" << endl;
    }
};

int main() {
    Laptop myLaptop("Asus", "XPS 13", 16, 512, 13.3);
    myLaptop.displayInfo();

    return 0;
}
