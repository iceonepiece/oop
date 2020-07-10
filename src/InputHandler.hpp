#pragma once

using namespace std;

void fire() {
  cout << ">> fire";
}

void jump() {
  cout << ">> jump";
}

class InputHandler {
public:
  void pressButton(const char* KEY) {
    cout << KEY << " is pressed. Do "; 

    if (KEY == "X") fire();
    else if (KEY == "Y") jump();
    else cout << "Nothing";

    cout << endl;
  }
};
