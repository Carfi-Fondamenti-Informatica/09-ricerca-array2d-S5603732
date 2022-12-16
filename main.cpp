#include <iostream>
#include "lib.h"

using namespace std;

int main(){
   char a[10][20];
    int i;
    for(i = 0; i < 10; i++){
        cin >> a[i];
    }
    char b[20];
    cin >> b;
    listanomi(a,b);
  return 0;
}
