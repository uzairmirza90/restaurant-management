#include <iostream>
using namespace std;
int main()
{
	// Create Menu for restaurant
	cout<<"[----------Restaurant Menu----------]\n";
	cout<<endl;
	cout<<"a) Pizza (Rs 999)\nb) Burger (Rs 250)\nc) Sandwich (Rs 150)\nd) Paratha Roll (Rs 200)\n";
	
	
	// Initialize the quantities for items
	int quan_of_piz;
	int quan_of_bur;
	int quan_of_san;
	int quan_of_par;
	
	cout<<"\n\n";
	
	
	// Customer entering the quantity of items
	cout<<"[----------Enter quantity----------]\n\n";
	
	cout<<"Pizza = ";
	cin>>quan_of_piz;
	cout<<"Burger = ";
	cin>>quan_of_bur;
	cout<<"Sandwich = ";
	cin>>quan_of_san;
	cout<<"Paratha Roll = ";
	cin>>quan_of_par;
	
	
	// Initializing price of items
	int price_of_piz = quan_of_piz * 999;
	int price_of_bur = quan_of_bur * 250;
	int price_of_san = quan_of_san * 150;
	int price_of_par = quan_of_par * 200;
	
	
	// To calculate total price
	float totalPrice = price_of_piz + price_of_bur + price_of_san + price_of_par;
	cout<<"\n\n";
	cout<<"[----------Total price----------]\n\n";
	cout<<"Price of "<<quan_of_piz<<" pizza = "<<quan_of_piz * 999<<"\n";
	cout<<"Price of "<<quan_of_bur<<" burger = "<<quan_of_bur * 250<<"\n";
	cout<<"Price of "<<quan_of_san<<" sandwich = "<<quan_of_san * 150<<"\n";
	cout<<"Price of "<<quan_of_par<<" paratha roll = "<<quan_of_par * 200<<"\n";
	cout<<"Total Price = "<<totalPrice;
	
	cout<<"\n\n\n";
	
	
	// Adding GST
	double gst_tax = totalPrice * 19/100;
	double totalBill = totalPrice + gst_tax;
	
	cout<<"[----------Total Bill after adding GST----------]\n\n";
	cout<<"Total GST = "<<gst_tax<<endl;
	cout<<"Bill after adding GST = "<<totalBill;
	
	cout<<"\n\n\n";
	
	
	// Offer 5% discount if bill is above 1000
	double discnt;
	if(totalBill > 1000)
	{
		discnt = totalBill * 5/100;
		totalBill = totalBill - discnt;
	}
	else
	{
		cout<<"\nBill is less than 1000 so there is no discount available.\n\n\n";	
	}
	cout<<"[----------Total Bill----------]\n\n";
	cout<<"Total Discount = "<<discnt<<endl;
	cout<<"Final Bill = "<<totalBill<<endl<<endl;
	
	cout<<"\n";
	
	
	// Show payment in proper format
	cout<<"[----------PAYMENT RECEIPT----------]\n\n";
	cout<<"Total Price = Rs "<<totalPrice<<endl;
	cout<<"Total GST Tax = Rs "<<gst_tax<<endl;
	cout<<"Total Discount = Rs "<<discnt<<endl;
	cout<<"Total Bill After Calculation = Rs "<<totalBill;
	cout<<"\n\n";
}
