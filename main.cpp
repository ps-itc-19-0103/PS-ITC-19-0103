#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    double quantity_sold;  //use to store items sold

string customer;  //use to store user name
int id;  //use to store the things purchase by the user

float vat = 12%;
int printer = 500;
int phone = 400;
int table = 300;
string item_bought;

double vat_amount;

cout<<""<<endl;



cout<<"Welcome" << customer << " to INF SUPERMARKET " <<endl;
cin>> customer;
cout<<"Customer Name"<<endl;
cout<<"please enter your unique id" <<endl;
cin>> id;
cout<<"items that are being sold in INF SUPERMARKET."<<endl;
cout<<"1- printers"<<endl;
cout<<"2- phones"<<endl;
cout<<"3- tables"<<endl;
cout<<"There is 12% of VAT on any item you purchase"<<endl;
cout<<"please what do you want to purchase" << customer << "in INF SUPERMARKET. Please,type the item name not the number attached to it"<<endl;
cout<<"please enter the reference number of the items purchase"<<endl;


cout<<"Receipt"<<endl;
cout<<"Name of buyer"<<customer<<endl;
cout<<"ID number"<<id<<endl;
cout<<"Items bought"<<phone,printer,table<<endl;
cout<<"Vat amount"<<vat_amount<<endl;
cout<<"Quantity-bought"<<quantity_sold<<endl;





	return 0;
}


