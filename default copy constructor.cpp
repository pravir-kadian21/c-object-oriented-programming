#include <iostream>
#include<cstring>
using namespace std;

class Car{
public:
    int price;
    int model_no;
    char name[20];

    Car(int p,int mn,char *n){
        price=p;
        model_no=mn;
        strcpy(name,n);
    }

    void print(){
        cout << price << endl;
        cout << model_no << endl;
        cout << name << endl;
    }
};

int main() {
    Car C(5000,1201,"BMW");
    C.print();

    cout << endl;

    Car D(C);//this is default copy constructor
    D.print();

    cout << endl;

    D.price=9000;
    D.model_no=1234;

    Car E(D);
    E.print();
}
