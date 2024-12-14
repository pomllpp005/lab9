#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double initial_loan,Rate,Pay;
    double  PrevBalance=0,Interest=0,Total=0,Payment=0,NewBalance=0;
	cout << "Enter initial loan: ";
	cin >>initial_loan;
	cout << "Enter interest rate per year (%): ";
	cin >>Rate;
	cout << "Enter amount you can pay per year: ";
	cin >>Pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	PrevBalance = initial_loan;
	Payment=Pay;
	int i=1;
	do{
	    
	Interest = PrevBalance *(Rate/100);  
	Total = PrevBalance + Interest;
	if(Total<Payment){Payment=Total;}
	else{Payment=Pay;}
	NewBalance = Total - Payment;
	
	
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	i+=1;
	PrevBalance = NewBalance;
	cout << "\n";	
	}
	while(NewBalance>0);
	return 0;
}