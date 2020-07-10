#pragma once

using namespace std;

void fire() {
  cout << ">> fire" << endl;
}

void jump() {
  cout << ">> jump" << endl;
}

class InputHandler {
public:
  void pressButton(const char* KEY) {
    cout << "Press key: " << KEY << endl;

    if (KEY == "X") fire();
    else if (KEY == "Y") jump();
    else cout << "Nothing" << endl;

    cout << endl;
  }

private:
  Command* buttonX;
  Command* buttonY;
};
