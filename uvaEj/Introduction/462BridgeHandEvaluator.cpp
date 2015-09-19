/**
* @file 462BridgeHandEvaluator.cpp
* @brief 
* @author Juan Pablo Gaviria
* @version 1
* @date 2015-09-17
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

int
main(){
  string in, carta;
  int ace, king, queen, jack, spades, hearts, diamonds, clubs, suma;
  while(getline(cin,in)){
    bool stopped[4]={0,0,0,0};
    king=0; ace=0; queen=0; jack=0; spades=0; hearts=0; diamonds=0; clubs=0; 
    int pintas[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    stringstream flujo(in);
    for(int i=0; i<13; i++){  //Se saca del flujo las cartas que hay en la mano
      bool est=false;
      int pos=-1;             //Se almacena la cantidad de veces que se repite una k,a,q o j
      int pin=-1;             //Se almacena la pinta y la cantidad de veces de esa pinta
      flujo >> carta;
      if(carta[0]=='K'){ ++king; pos=0;}
      else if(carta[0]=='Q'){ ++queen; pos=1;}
      else if(carta[0]=='A'){ ++ace; est=true;}
      else if(carta[0]=='J'){ ++jack; pos=2;}
      if(carta[1]=='S'){ ++spades; pin=0; if(est) stopped[0]=true;}
      else if(carta[1]=='H'){ ++hearts; pin=3; if(est) stopped[1]=true;}
      else if(carta[1]=='D'){ ++diamonds; pin=6; if(est) stopped[2]=true;}
      else if(carta[1]=='C'){ ++clubs; pin=9; if(est) stopped[3]=true;}
      if(pos!=-1) ++pintas[pos+pin];
    }                         //Se restan y suman los puntos segun las condiciones
    suma=ace*4+king*3+queen*2+jack;
    int suma2=0;
    if(spades==0) suma2+=2;
    else if(spades==1){ for(int i=0; i<3; i++) suma-=pintas[i]; suma2+=2;}
    else if(spades==2){ for(int i=1; i<3; i++) suma-=pintas[i]; ++suma2;}
    else if(spades==3) for(int i=2; i<3; i++) suma-=pintas[i];
    if(hearts==0) suma2+=2;
    else if(hearts==1){ for(int i=3; i<6; i++) suma-=pintas[i]; suma2+=2;}
    else if(hearts==2){ for(int i=4; i<6; i++) suma-=pintas[i]; ++suma2;}
    else if(hearts==3) for(int i=5; i<6; i++) suma-=pintas[i];
    if(diamonds==0) suma2+=2;
    else if(diamonds==1){ for(int i=6; i<9; i++) suma-=pintas[i]; suma2+=2;}
    else if(diamonds==2){ for(int i=7; i<9; i++) suma-=pintas[i]; ++suma2;}
    else if(diamonds==3) for(int i=8; i<9; i++) suma-=pintas[i];
    if(clubs==0) suma2+=2;
    else if(clubs==1){ for(int i=9; i<12; i++) suma-=pintas[i]; suma2+=2;}
    else if(clubs==2){ for(int i=10; i<12; i++) suma-=pintas[i]; ++suma2;}
    else if(clubs==3) for(int i=11; i<12; i++) suma-=pintas[i];
    if(pintas[0] && spades>1) stopped[0]=true;
    else if(pintas[1] && spades >2) stopped[0]=true;
    if(pintas[3] && hearts >1) stopped[1]=true;
    else if(pintas[4] && hearts >2) stopped[1]=true;
    if(pintas[6] && diamonds >1) stopped[2]=true;
    else if(pintas[7] && diamonds >2) stopped[2]=true;
    if(pintas[9] && clubs >1) stopped[3]=true;
    else if(pintas[10] && clubs >2) stopped[3]=true;
    bool stop = true;
    for(int i=0; i<4 && stop; i++)if(!stopped[i]){ stop=false;}
    if(suma>=16 && stop) cout << "BID NO-TRUMP"<<endl;
    else{
    suma+=suma2;
    if(suma<14) cout<<"PASS"<<endl;
    else{
      int arr[4]={spades,hearts,diamonds,clubs};
      int max=0;
      for(int i=1; i<4; i++) if(arr[i]>arr[max]) max=i;
      char imp;
      switch(max){
        case 0: imp='S'; break;
        case 1: imp='H'; break;
        case 2: imp='D'; break;
        case 3: imp='C'; break;
      }
      cout<<"BID "<< imp << endl;
    }
  }
  }
}
