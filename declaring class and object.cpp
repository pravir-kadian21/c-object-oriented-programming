#include <iostream>
using namespace std;

class Car{
public:
    int price;
    int model_no;
    char name[20];
};
int main() {
    Car C;// C is object
    cout << sizeof(C) << endl; // C takes 28 bytes in the memory 4+4+20;
    cout << sizeof(Car) << endl;//Car being a class does not take memory it just tells that if we have a object
    //of class Car it will take up 28 bytes
}
