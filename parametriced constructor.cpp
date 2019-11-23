#include <iostream>
#include<cstring>
using namespace std;

class Car{
public:
    int price;
    int model_no;
    char name[20];
    Car(int mn,int p,char *n){//we are making our own constructor --- known as parametriced constructor
        model_no=mn;
        price=p;
        strcpy(name,n);
    }
    void print(){
        cout << name << endl;
        cout << model_no << endl;
        cout << price << endl;
    }
};

int main() {
    Car C(1002,2000,"BMW");//way of calling the parametriced constructor
    C.print();
}
