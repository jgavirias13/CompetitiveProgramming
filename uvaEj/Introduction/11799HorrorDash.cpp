/**
* @file 11799HorrorDash.cpp
* @brief 
* @author Juan Pablo Gaviria
* @version 1
* @date 2015-09-08
*/

#include <iostream>

using namespace std;

int
main(){
  int t;
  cin >> t;
  int cases=0;
  while(t--){
    int n;
    cin >> n;
    int min=0;
    while(n--){
      int lec;
      cin >> lec;
      if(lec>min) min=lec;
    }
    cout << "Case " << ++cases << ": " << min << endl;
  }
}
