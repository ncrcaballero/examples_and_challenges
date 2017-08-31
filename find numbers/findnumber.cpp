#include <iostream>
#include <cmath>
#include <stdlib.h> 
using namespace std;

int main() {
	int n;
	int k;
	int flag;
	cout << "numero de elementos del array:\n";
	cin >> n;
	if (n <= 0 || n > (pow(10,5)) ) {
		cout << "error, ingresar numero superior a 0 e inferior a 10^5";
		return 0;
	}		
	cout << "ingrese digitos de mapa\n";
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		if (arr[i] >= (pow(10,9))){
			cout << "error\n";
			exit(0);
		}
	}

	cout << "ingrese numero para buscar\n";
	cin >> k;

	for (int i = 0; i < n; i++){
		if(arr[i] == k){
			flag=1;
			break;
			}
			else{
				flag=0;
			}
	}
	if(flag ==1){
		cout << "yes";
		}
		else if(flag ==0){
			cout << "no";	
			}
	
	return 0;
}
