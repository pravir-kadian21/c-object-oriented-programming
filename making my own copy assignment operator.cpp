#include <iostream>
#include<cstring>
using namespace std;

class Car{
public:
    int price;
    int model_no;
    char *name;

    Car(){
        name=NULL;
    }

    Car operator = (Car &X){
        price=X.price;
        model_no=X.model_no;
        int l=strlen(X.name);
        name = new char[l+1];
        strcpy(name,X.name); 
    }

    void setname(char *n){
        if(name==NULL){
            int l=strlen(n);
            name = new char[l+1];
            strcpy(name,n);
        }
    }

    Car(int p,int mn,char *n){
        price=p;
        model_no=mn;
        int l=strlen(n);
        name = new char[l+1];
        strcpy(name,n);
    }
    void print(){
        cout << price << endl;
        cout << model_no << endl;
        cout << name << endl;
    }
};

int main() {
    Car C(1500,1001,"nano");
    Car D;
    D=C;//self made copy assignment operator is called

    C.print();
    cout << endl;
    D.print();
}
