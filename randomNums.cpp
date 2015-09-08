#include <iostream>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <set>

using namespace std;

int
main(){
  string a;
  set<int> conjunto;
  while(getline(cin, a)){
    stringstream flujo(a);
    int n;
    flujo >> n;
    if(conjunto.count(n)==0){
      cout << "-" << n << endl;
      conjunto.insert(n);
    }
  }
}
