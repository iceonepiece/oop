#pragma once

class Subject;

class Observer {
public:
  virtual void onNotify(Subject* subject, char* content) = 0;
  char* name;
};

class Subscriber : public Observer {
public:
  Subscriber(char* name) {
    this->name = name;
  }

  virtual void onNotify(Subject* subject, char* content) {
    std::cout << name << " : " << content << std::endl;
  }

};
