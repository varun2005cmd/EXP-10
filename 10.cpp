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

  cout<<endl<<"Before swapping the value of a is: "<<endl<<a;
  cout<<endl<<"Before swapping the value of b is: "<<endl<<b;


  swap(&a,&b);

  cout<<endl<<"After swapping the value of a is: "<<endl<<a;
  cout<<endl<<"After swapping the value of b is: "<<endl<<b;

    return 0;
}
