#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int matrix[6][4]={{2,3,4,5},
                  {3,2,5,4},
                  {1,0,2,2},
                  {0,1,3,3},
                  {4,4,1,0},
                  {5,5,0,1}};
int
main(){
  int l;
  while(cin >> l,l!=0){
    int ant=0;
    string posi;
    while(--l){
      cin >> posi;
      int act;
      if(posi=="+y") act=0;
      else if(posi=="-y") act=1;
      else if(posi=="+z") act=2;
      else if(posi=="-z") act=3;
      if(posi!="No") ant=matrix[ant][act];
    }
    if(ant==0) posi="+x";
    else if(ant==1) posi="-x";
    else if(ant==2) posi="+y";
    else if(ant==3) posi="-y";
    else if(ant==4) posi="+z";
    else if(ant==5) posi="-z";
    cout << posi << endl;
  }
  return 0;
}
