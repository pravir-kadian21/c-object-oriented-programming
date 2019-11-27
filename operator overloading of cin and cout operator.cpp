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

void operator>>(istream& is,Complex &c){
	int r1,i1;
	is>>r1>>i1;//or cin>>........;
	c.setreal(r1);
	c.setimg(i1);
}
void operator<<(ostream &os,Complex &c){
	c.print();
}

int main(){
	Complex d;
	cin>>d;
	cout << d;
}
