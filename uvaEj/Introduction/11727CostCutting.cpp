#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

int
main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    int a, b, c;
    cin >> a >> b >> c;
    int array[] = {a, b, c};
    sort(array, array + 3);
    cout << "Case " << i+1 << ": " << array[1] << endl;
  }
}