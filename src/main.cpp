#include <iostream>

#include "InputHandler.hpp"

using namespace std;

int main() {
  InputHandler handler = InputHandler();
  handler.pressButton("X");
  handler.pressButton("Y");

  //do some logics here

  handler.pressButton("X");
  handler.pressButton("Y");

  return 0;
}
