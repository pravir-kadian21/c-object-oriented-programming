#include <iostream>
#include<cstring>
using namespace std;

class Car{
public:
    int price;
    int model_no;
    char *name;

    Car(int p,int mn,char *n){
        price=p;
        model_no=mn;
        int l=strlen(n);
        name = new char[l+1];
        strcpy(name,n);
    }
    Car(){
        name=NULL;
    }
    void setname(char *n){
        if(name == NULL){
            name = new char[strlen(n)+1];
            strcpy(name,n);
        }
    }
    void print(){
        cout << price << endl;
        cout << model_no << endl;
        cout << name << endl;
    }

    Car(Car &X){
        price=X.price;
        model_no=X.model_no;
        int l=strlen(X.name);
        name = new char[l+1];
        strcpy(name,X.name);
    }
};

int main() {
    Car C;
    C.setname("nano");
    C.price=1500;
    C.model_no=1001;
    Car D(C);//self made copy constructor is called
    D.name[0]='G';
    C.print();
    cout << endl;
    D.print();
}
