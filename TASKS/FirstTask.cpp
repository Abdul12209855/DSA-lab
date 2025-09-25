#include <iostream>
using namespace std;

int main(){
	
	int EsprsseQuantity;
	int cappuccinoQuantity;
	int latteQuantity;
	
	cout<<"Enter the Esprsse quantity = ";
	cin>>EsprsseQuantity;
	
	cout<<"Enter the Cappuccino quantity = ";
	cin>>cappuccinoQuantity;
	
	cout<<"Enter the latte quantity = ";
	cin>>latteQuantity;
	cout<<"----------------------------------------"<<endl;
	
	int *p = &EsprsseQuantity;
	int *q = &cappuccinoQuantity;
	int *r = &latteQuantity;
	
	cout<<"Esprsse("<<*p<<"x 120)="<<*p*120<<endl;
	
	cout<<"cappuccino("<<*q<<"x 100)="<<*q*100<<endl;
		
	cout<<"latte("<<*r<<"x 150)="<<*r*150<<endl;
	
	cout<<"---------------------------------------"<<endl;
	
	cout<<"TOTAL BILL = ";
			
			
		cout<<((*p)*120)+((*q)*100)+((*r)*150)<<endl;
		
		cout<<"-----THANK YOU --------"<<endl;
				
	
	return 0;
}
