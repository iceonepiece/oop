#include <iostream>

#include "InputHandler.hpp"
#include "Command.hpp"

using namespace std;

int main() {
  InputHandler handler = InputHandler();
  handler.setCommand("X", new JumpCommand());
  handler.setCommand("Y", new FireCommand());

  handler.pressButton("X");
  handler.pressButton("Y");

  //do some logics here
  handler.setCommand("Y", new JumpCommand());
  handler.setCommand("X", new FireCommand());

  handler.pressButton("X");
  handler.pressButton("Y");

  return 0;
}
