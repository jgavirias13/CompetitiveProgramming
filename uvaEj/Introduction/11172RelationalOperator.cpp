/**
* @file 11172RelationalOperator.cpp
* @brief 
* @author Juan Pablo Gaviria
* @version 1
* @date 2015-09-08
*/

#include <iostream>

using namespace std;

int
main(){

  int n;
  cin >> n;
  for(int i = 0; i< n; i++){
    int a;
    int b;
    cin >> a >> b;
    if(a > b){
      cout << ">" << endl;
    }else if(a < b){
      cout << "<" << endl;
    }else{
      cout << "=" << endl;
    }
  }

  return 0;
}
