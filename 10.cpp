// Varun Pendem 23070123149
#include <iostream>
using namespace std;
void swap(int *x, int *y){
    int swap  ;
    swap = *x;
    *x = *y;
    *y = swap;
}

int main() {
int a =100 ,b = 500;

  swap(&a,&b);
  cout<<endl<<a;
  cout<<endl<<b;

    return 0;
}
