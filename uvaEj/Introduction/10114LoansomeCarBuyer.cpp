/**
* @file 10114LoansomeCarBuyer.cpp
* @brief 
* @author Juan Pablo Gaviria
* @version 1
* @date 2015-09-08
*/

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <sstream>

using namespace std;

int
main(){
	float inicial, valor;
	int meses, deval;
	cin >> meses >> inicial >> valor >> deval;
	while(meses > 0){	
		vector <float> devaluos(5000);
		for(int i=0; i<deval; i++){
			int mes;
			string tmp;
			float devaluo;
			cin >> mes >> tmp;
			string entrada = "0"+tmp;
			istringstream flujo(entrada);
			flujo >> devaluo;
			devaluos[mes] = devaluo;
		}
		int i=1;
		float valorP = valor;
		float valorA = valor+inicial;
		float anterior = devaluos[0];
		float cuotas = valor / meses;
    valorA = valorA - (valorA*anterior);
		while(valorA < valorP){
			if(i < devaluos.size() && devaluos[i] != 0.0){
				anterior = devaluos[i];
			}
			valorP = valorP - cuotas;
			valorA = valorA- (valorA*anterior);
			i++;
		}
    i--;
		if(i == 1){
			cout <<i << " month" << endl;
		}else{
			cout << i << " months" << endl;
		}
		cin >> meses >> inicial >> valor >> deval;
	}
	return 0;
}
