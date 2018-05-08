#include <iostream>
using namespace std;

bool escapevalue = true;
unsigned long long int password = 0;

bool accept()
{
	cout << "Do you want to test again (y or n)?\n";
	char answer = 0;
	cin >> answer;
	switch (answer) {
		case 'y':
		return true;		
		case 'n':		
		return false;		
		default:
		cout << "I'll take that for a no.\n";
		return false;
	}
}

int main() {
	cout << "testing the operations of the game\n"; 
	
	int wea2 = 0;
	
	while(escapevalue){
		cout << "what operation u want to test? (1,2,3,4,5)?\n";
		cout << "1, the equal 9 situation\n";
		cout << "2, the increment +=\n";
		cout << "3, the for saying the position to change\n";
		cout << "4, the whole increment operation\n";
		cout << "5, the whole decrement operation\n";
		cin >> wea2;
		
		switch(wea2){
			case 1:{
				int multiplier;
				//int password = 0;
				cout << "next operation: ( ( password % ( multiplier * 10 ) ) / multiplier == 9 )\n";
				cout << "insert the number for multiplier\n";		
				cin >> multiplier;
				//((password % ( multiplier * 10 ) ) / multiplier == 9 ) evaluated left to right
				int x = (password % (multiplier*10)) / multiplier ; 
				cout << "value of x: " << x << "\n"; 
			}
				break;
				
			case 2:{
				int multiplier;
				int xpassword;
				cout << "next operation: password += multiplier \n";
				cout << "insert the number for multiplier\n";		
				cin >> multiplier;
				//password += multiplier;
				xpassword += multiplier ; 
				cout << "value of xpassword: " << xpassword << "\n"; 
				 
			}
				break;
				
			case 3:{
				unsigned multiplier = 1;
				int currentDigit = 0;
				cout << "next operation: for( unsigned x = 9 - ( currentDigit ); x--; ) multiplier *= 10; \n";
				cout << "insert the number for current digit\n";		
				cin >> currentDigit;
				//for( unsigned x = 9 - ( currentDigit ); x--; ) multiplier *= 10;
				for( unsigned x = 9 - ( currentDigit ); x--; ){
					cout << "value of x: " << x << "\n";
					multiplier *= 10;
					cout << "value of multiplier: " << multiplier << "\n";
				 }
				 
			}
				break;
				
			case 4:{				
				int currentDigit = 0;
				while(escapevalue){	
					cout << "we are going to increment\n";
					cout << "insert the number for current digit\n";		
					cin >> currentDigit;
					
					if(currentDigit<=9){
						unsigned long long int multiplier = 1;
							for( unsigned int x = 9 - ( currentDigit ); x--; ){
								cout << "value of x: " << x << "\n";
								multiplier *= 10;
								cout << "value of multiplier: " << multiplier << "\n";
							}
							if ( ( password % ( multiplier * 10 ) ) / multiplier == 9 ){
								cout << "value of previous multiplier when equals to 9: " << multiplier << "\n";
								cout << "value of previous password when equals to 9: " << password << "\n";
								long long int y = ( password % ( multiplier * 10 ) ) ;
								cout << "value of the operation password % ( multiplier * 10 ) = " << y << "\n";
								long long int xy = ( password % ( multiplier * 10 ) ) / multiplier ;
								cout << "value of the operation password % ( multiplier * 10 )/ multiplier = " << xy << "\n";
								password -= multiplier * 9;
								cout << "value of password when equals to 9: " << password << "\n";
							}
							else{
								password += multiplier;
								cout << "value of password: " << password << "\n";	
							}						
						}
					cout << "exiting while\n";		
					escapevalue = accept();
				}
			 
			}
				break;
				
			case 5:{				
				int currentDigit = 0;
				while(escapevalue){			
					cout << "we are going to decrement\n";	
					cout << "insert the number for current digit\n";		
					cin >> currentDigit;
					
					if(currentDigit<=9){
						unsigned long long int multiplier = 1;
							for( unsigned int x = 9 - ( currentDigit ); x--; ){
								cout << "value of x: " << x << "\n";
								multiplier *= 10;
								cout << "value of multiplier: " << multiplier << "\n";
							}
							if ( ( password % ( multiplier * 10 ) ) / multiplier <= 0 ){
								cout << "value of previous multiplier when equals to 9: " << multiplier << "\n";
								cout << "value of previous password when equals to 9: " << password << "\n";
								long long int y = ( password % ( multiplier * 10 ) ) ;
								cout << "value of the operation password % ( multiplier * 10 ) = " << y << "\n";
								long long int xy = ( password % ( multiplier * 10 ) ) / multiplier ;
								cout << "value of the operation password % ( multiplier * 10 )/ multiplier = " << xy << "\n";
								password += multiplier * 9;
								cout << "value of password when equals to 9: " << password << "\n";
							}
							else{
								password -= multiplier;
								cout << "value of password: " << password << "\n";	
							}						
						}
					cout << "exiting while\n";		
					escapevalue = accept();
				}
			 
			}
				break;
		}
		cout << "exiting switch\n";	
		escapevalue = accept();
	}
	
	return 0;
}

