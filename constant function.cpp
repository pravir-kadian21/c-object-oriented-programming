#include <iostream>
#include<cstring>
using namespace std;

class Car{
public:
    int price;
    int model_no;
    char *name;
    const int tyres;//no initialisation should be done here

    Car(int p,int mn,char *n):tyres(4){
        price=p;
        model_no=mn;
        int l=strlen(n);
        name = new char[l+1];
        strcpy(name,n);
    }
    Car():tyres(4){//initialisation is done like this(initialisation list) it is mendatory for constant data mem. 
        name=NULL;//but optional for other it could have been Car():tyres(4),name(NULL)
    }
    ~Car(){
        cout << "destroying the car " << name << endl;
        //code for destroying dynamic object 
        if(name!=NULL){
            delete name;
        }
    }
    void setname(char *n){
        if(name == NULL){
            name = new char[strlen(n)+1];
            strcpy(name,n);
        }
    }
    void print() const{//constant function
        cout << price << endl;
        cout << model_no << endl;
        cout << name << endl;
    }

    Car(Car &X):tyres(4){
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
    Car D(C);
    D.name[0]='G';
    C.print();
    cout << endl;
    D.print();
    cout << D.tyres << endl;

    Car *DC = new Car(2500,1001,"dynamic tesla car");
    delete DC;//used to delete dynamic object
}
