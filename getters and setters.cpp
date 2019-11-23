#include <iostream>
using namespace std;

class Car{
    int price;
public:
    int model_no;
    char name[20];

    void setprice(int p){
        if(p>1000){
            price=p;
        }
        else{
            price=1000;
        }
    }

    int getprice(){
        return price;
    }
};

int main() {
    Car C;
    Car D;
    C.setprice(-1000);
    D.setprice(2000);
    cout << "the price of car C is " << C.getprice() << endl;
    cout << "the price of car D is " << D.getprice() << endl;
}
