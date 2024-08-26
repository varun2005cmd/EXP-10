# EXP-10

## Call by Value vs Call by Reference Experiment

## Aim:
The aim of this experiment is to understand and compare the two mechanisms of passing arguments in functions: Call by Value and Call by Reference, using a simple C++ program. The program swaps two integers using Call by Reference.

## Theory:

### Call by Value:
In Call by Value, a copy of the actual parameter is passed to the function.
Changes made to the parameter inside the function do not affect the original value.

Call by Value is typically used when the integrity of the original data must be maintained. This is the default mechanism in many languages because it isolates the function's internal operations from the rest of the program.

### Call by Reference:
In Call by Reference, the actual parameter is passed to the function via its reference (address).
Changes made to the parameter inside the function directly affect the original value.

Call by Reference is beneficial when the function needs to modify the actual data or when performance matters (especially with large data structures). It is commonly used in cases like swapping values, modifying collections, or working with pointers.

### Example Code Explanation:
In the provided C++ code, two integers (a and b) are passed to a function using Call by Reference to swap their values. By passing the memory address of the variables, the changes inside the function will affect the actual variables.

## Code: 

```
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
```

## Output: 

