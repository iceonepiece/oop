#include <iostream>

#include "Command.hpp"
#include "InputHandler.hpp"

using namespace std;

int main() {
  InputHandler handler = InputHandler();
  handler.pressButton("X");
  handler.pressButton("Y");

  return 0;
}
