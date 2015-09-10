/**
* @file 10141RequestForProposal.cpp
* @brief 
* @author Juan Pablo Gaviria
* @version 1
* @date 2015-09-09
*/

#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>

using namespace std;

int
main(){
  int n, p;
  int rfp=1;
  while(cin>>n>>p,n || p){
    string minName;
    int minCompliance=-1; double minPrecio=2000000000;
    string aux;
    for(int i=0; i<n; i++){cin.ignore(); getline(cin,aux);}
    for(int i=0; i<p; i++){
      string nombre;
      double precio;
      int r;
      getline(cin,nombre);
      scanf("%lf %d\n", &precio, &r);
      for(int j=0; j<r; j++) getline(cin,aux);
      if(r>minCompliance){
        minName=nombre;
        minPrecio=precio;
        minCompliance=r;
      }else if(r==minCompliance){
        if(precio < minPrecio){
          minName=nombre;
          minPrecio=precio;
          minCompliance=r;
        }
      }
    }
    if(rfp>1) cout << endl;
    cout << "RFP #" << rfp << endl << minName << endl;
    ++rfp;
  }
  return 0;
}
