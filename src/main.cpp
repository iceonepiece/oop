#include <iostream>

#include "Subject.hpp"
#include "Observer.hpp"

using namespace std;

int main() {
  cout << "Hello World" << endl;

  Publisher* publisher = new Publisher();

  Observer* john = new Subscriber("john");
  Observer* mary = new Subscriber("mary");

  publisher->addObserver(john);
  publisher->addObserver(mary);

  publisher->uploadVideo("animal farm");
  publisher->uploadVideo("song from hell");

  publisher->removeObserver(john);

  publisher->uploadVideo("John won't receive this");

  return 0;
}
