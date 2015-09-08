/**
* @file 573TheSnail.cpp
* @brief 
* @author Juan Pablo Gaviria
* @version 1
* @date 2015-09-08
*/

#include <iostream>

using namespace std;

int
main(){
  double h, u, d, f;
  cin >> h;
  while(h !=0){
    cin >> u >> d >> f;
    double recorrido=u;
    int days=1;
    f = (f/100)*u;
    while(recorrido>=0 && recorrido<=h){
      recorrido-=d;
      if(recorrido<0) break;
      ++days;
      if(u<=f)u=0;
      else u-=f;
      recorrido+=u;
    }
    if(recorrido>h) cout << "success on day " << days << endl;
    else cout << "failure on day " << days << endl;
    cin >> h;
  }
}
