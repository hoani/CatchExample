#include <iostream>
#include "adder.h"

using namespace std;
 
int main() {
  Adder adder = Adder();

  for(;;) {
    int newValue;
    cout << "The current Value is " << adder.GetValue();
    cout << "\n\r";
    cout << "Please enter a number:";
    cin >> newValue;
    adder.Add(newValue);
  }
  return 0;
}