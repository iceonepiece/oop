#pragma once
#include "Command.hpp"

using namespace std;

class InputHandler {
public:
  InputHandler() {
    this->buttonX = new NullCommand();
    this->buttonY = new NullCommand();
  }

  void setCommand(const char* KEY, Command* command) {
    if (KEY == "X") buttonX = command;
    else if (KEY == "Y") buttonY = command;
  }

  void pressButton(const char* KEY) {
    cout << KEY << " is pressed. Do ";

    if (KEY == "X") buttonX->execute();
    else if (KEY == "Y") buttonY->execute();
    else cout << "nothing";

    cout << endl;
  }

private:
  Command* buttonX;
  Command* buttonY;
};
