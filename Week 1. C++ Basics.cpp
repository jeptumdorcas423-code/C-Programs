#include <iostream>
using namespace std;

int main () {
	
	string  Customer_name, Phone_model;
	int Quantity, Price, Total_sales;
	
	cout<<"Enter Name:"<<endl;
	cin>>Customer_name;
	cout<<"Enter Phone Model:"<<endl;
	cin>>Phone_model;
	cout<<"Enter Quantity Purchased:"<<endl;
	cin>>Quantity;
    cout<<"Enter Price:"<<endl;
	cin>>Price;
	
	Total_sales=Quantity*Price;
	cout<<"\n"<<endl;
	cout<<"=============="<<endl;
	cout<<"****RECEIPT****"<<endl;
	cout<<"==============="<<endl;
	cout<<"Customer Name:"<<Customer_name<<endl;
	cout<<"Phone Model:"<<Phone_model<<endl;
	cout<<"Quantity Bought:"<<Quantity<<endl;
	cout<<"Price per Phone:"<<Price<<endl;
	cout<<"TOTAL SALES"<<endl;
	cout<<""<<Total_sales<<endl;
}