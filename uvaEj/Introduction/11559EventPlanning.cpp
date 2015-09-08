#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

int
main(){
  string line;
  int participants;
  while(cin >> participants){
    istringstream flujo(line);
    int budget, hotels, weeks, costo;
    costo = 10000;
    cin >> budget >> hotels >> weeks;
    for(int i=0; i<hotels; i++){
      int precio;
      cin >> precio;
      for(int i=0; i<weeks; i++){
        int disponibles;
        cin >> disponibles;
        if(participants <= disponibles){
          if(precio < costo){
            costo = precio;
          }
        }
      }
    }
    costo = costo*participants;
    if(costo > budget){
      cout << "stay home" << endl;
    }else{
      cout << costo << endl;
    }
  }
}
