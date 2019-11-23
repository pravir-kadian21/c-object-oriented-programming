#include <iostream>
using namespace std;

class Car{
public:
    int model_no;
    int price;
    char name[20];

    void start(){
        cout << "starting the car " << name << endl;
    }
};
int main() {
    Car C;
    C.price=500;
    C.model_no=1002;
    C.name[0]='B';
    C.name[1]='M';
    C.name[2]='W';
    C.name[3]='\0';
    C.start();
    cout << C.name << endl;
}
