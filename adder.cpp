#include "adder.h"

Adder::Adder() {
  _value = 0;
}

Adder::~Adder() {
}

void Adder::Add(int value) {
  _value += value;
}

int Adder::GetValue() {
  return _value;
}