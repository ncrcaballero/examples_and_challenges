#include <iostream>
#include <cmath>
#include <stdlib.h> 
using namespace std;

int main() {
	int l;
	int r;
	cout << "numero rango minimo del array:\n";
	cin >> l;
	cout << "numero rango maximo del array:\n";
	cin >> r;
	if (l <= 0 || r > (pow(10,5)) || l > r) {
		cout << "error\n";
		return 0;
	}		
	int arr[r];
	for (int i = l; i <= r; i++){
		arr[i]= i;
		if ((arr[i] % 2) == 0){			
		}
		else{
			cout << arr[i] << " ";
		}	
	}
	return 0;
}
