#include <iostream>

using namespace std;

int
main(){
  int n;
  cin >> n;
  while(n != 0){
    int centrox;
    int centroy;
    int x;
    int y;
    cin >> centrox >> centroy;
    for(int i =0; i< n; i++){
      cin >> x >> y;
      if(centrox > x and centroy > y){
        cout << "SO" << endl;
      }else if(centrox < x and centroy > y){
        cout << "SE" << endl;
      }else if(centrox > x and centroy < y){
        cout << "NO" << endl;
      }else if(centrox < x and centroy < y){
        cout << "NE" << endl;
      }else{
        cout << "divisa" << endl;
      }
    }
    cin >> n;
  }
}