#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm> 
#include <cmath>
#define PI 3.14159265
using namespace std;

int main() {
	int n;
	double angulop;
	// (x , y)
	double f, s;
	cout << "ingrese numero de puntos:\n";
	cin >> n;
	if (n <= 0 || n >= 1001 ) {
		cout << "error, ingresar numero superior a 0 e inferior a 1000";
		return 0;
	}
	cout << "ingrese puntos:\n";	
	//vector <angulo polar , (puntox,puntoy) >
	vector< pair < double, pair < double, double > > > angpuntos;
	for (int i=0; i < n; i++){
		cin >> f >> s;
		if (f == 0 && s == 0){
			cout << "error, punto origen";
			exit(0);	
		}	
		else {
			angulop = atan2(s, f) * 180 / PI;
			if (angulop < 0.0) {
				angulop += 360.0;
				}
			angpuntos.push_back(make_pair(angulop, (make_pair(f, s))));
		}
	}
	sort (angpuntos.begin(), angpuntos.end());
	cout << "orden ascendente\n";
	for(vector< pair < double, pair < double, double > > >::iterator it = angpuntos.begin(); it != angpuntos.end(); it++){
        cout << it->second.first << " " << it->second.second << endl;
	}
	return 0;
}



