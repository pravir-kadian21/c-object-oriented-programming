#include <iostream>
using namespace std;

class Car{
public:
    int price;
    int model_no;
    char name[20];

    Car(){//this is default constructor
        cout << "making a car" << endl;
    }
};

int main() {
    Car C;//default constructor gets automatically as we declare the object
}
