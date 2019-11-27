#include <iostream>
using namespace std;

class Complex{
public:
    int real;
    int img;
    Complex(){
    	
	}

    Complex(int r,int i){
        real=r;
        img=i;
    }

    void setreal(int r){
        real=r;
    }
    void setimg(int i){
        img = i;
    }
    int getreal(){
        return real;
    }
    int getimg(){
        return img;
    }
    void add(Complex &X){
    	real+=X.real;
    	img+=X.img;
	}
	void operator+(Complex &X){//known as operator overloading now we can write C1+C2
		real+=X.real;
    	img+=X.img;
	}
	void operator!(){//we are overloading !
		img*=-1;
	}
	
	int operator[](string s){
		if(s=="real"){
			return real;
		}
		if(s=="img"){
			return img;
		}
	}
    void print(){
    	if(img>=0){
    		cout << real << " + " << img << "i" << endl;
		}
		else{
			cout << real << " - " << -img << "i" << endl;
		}
    }
};

int main() {
    Complex C1(4,3);
    C1.print();
    Complex C2;
    C2.setreal(5);
    C2.setimg(6);
    
    C2.print();
    
    C1.add(C2);
    
    C1.print();
    
    C2.print();
    
    C1+C2;//c1 becomes c1+c2
    
    C1.print();
    
    !C1;
    C1.print();
    cout << C1["real"] << endl;
    cout << C1["img"] << endl;
}

