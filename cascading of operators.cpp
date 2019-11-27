#include<iostream>
using namespace std;

class Complex{
public:
	int real;
	int img;
	
	void setreal(int r){
		real=r;
	}
	void setimg(int i){
		img = i;
	}
	void print(){
		if(img>=0){
			cout << real << " + " << img << "i" << endl;
		}
		else{
			cout << real << " + " << -img << "i" << endl;
		}
	}
};

istream& operator>>(istream& is,Complex &c){
	int r1,i1;
	is>>r1>>i1;//or cin>>........;
	c.setreal(r1);
	c.setimg(i1);
	return is;
}
ostream& operator<<(ostream &os,Complex &c){
	c.print();
	return os;
}

int main(){
	Complex d1,d2;
	cin>>d1>>d2;
	cout << d1 << endl << d2 << endl;
}
