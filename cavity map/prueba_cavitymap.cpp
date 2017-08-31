#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "ingrese dimension del mapa:\n";
	cin >> n;
	if (n <= 0 || n >= 101 ) {
		cout << "error, ingresar numero superior a 0 e inferior a 100";
		return 0;
	}
	cout << "la dimension del mapa sera: " << n << " x " << n << "\n";	
	cout << "ingrese digitos de mapa\n";
	//creacion del cavity map
	char grid[n][n];
	for (int grid_i = 0; grid_i < n; grid_i++){
		for (int grid_j = 0; grid_j < n; grid_j++ ) {
			cin >> grid[grid_i][grid_j];
		}
	}	
	//logica 
	for(int i = 0; i < n; i++){
		for (int j = 0; j < (n-1); j++ ) {
			if ((grid[i][j] > grid[i][j + 1]) && (grid[i][j - 1] < grid[i][j])
			     && (grid[i][j] > grid[i+1][j]) && (grid[i-1][j] < grid[i][j]) && (j != 0)){
				grid[i][j] = 'X';		
			}
		}
	}
	//output map
	cout << "output map\n";
	for (int grid_i = 0; grid_i < n; grid_i++){
		for (int grid_j = 0; grid_j < n; grid_j++ ){
			cout << grid[grid_i][grid_j] << " ";
		}
		cout << endl;
	}
	return 0;
}


