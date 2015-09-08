/**
* @file piDec.cpp
* @brief 
* @author Juan Pablo Gaviria
* @version 1
* @date 2015-08-25
*/

#include <iostream>
#include <cstdio>
#include <math.h>
#include <cstring>

using namespace std;

const double PI = 3.14159265358979323846; //pi
int
main(){
  int n;
  cin >> n;
  char c = (char) ((n/10)+48);
  char d = (char) ((n-(n/10)*10)+48);
  const char a[6] = {'%','.', c, d, 'f', '\n'};
  printf(a,PI);
  return 0;
}

