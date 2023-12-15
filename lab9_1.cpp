#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
double loan,rate,Payment,Interest,NewBalance;
int EndOfYear=1;
int main(){	
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>rate;
	cout << "Enter amount you can pay per year: ";
	cin>>Payment;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	NewBalance = loan ;
	int end = 1 ;
	while(end != 0){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << EndOfYear;//round
		cout << setw(13) << left << NewBalance;//PrevBalance
		Interest=NewBalance*(rate/100);
		cout << setw(13) << left << Interest;//Interest
		cout << setw(13) << left << NewBalance+Interest;//Total
		if(NewBalance+Interest<Payment){
			Payment=loan+Interest;
			end = 0 ;
		}
		cout << setw(13) << left << Payment;//Payment
		NewBalance=(loan+Interest)-Payment;
		
		cout << setw(13) << left << NewBalance<<"\n";//NewBalance
		EndOfYear++;
		loan  = NewBalance ;
	}
	return 0;
}
