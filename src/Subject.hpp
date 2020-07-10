#pragma once

#include <vector>
#include <iostream>
#include "Observer.hpp"

class Subject {
public:
  virtual void addObserver(Observer* sub) = 0;
  virtual void removeObserver(Observer* sub) = 0;
  virtual void notify(char* content) = 0;

protected:
  std::vector<Observer*> observers;
};

class Publisher : public Subject {
public:
  void uploadVideo(char* name) {
    std::cout << "Upload video: " << name << std::endl;
    notify("Upload video");
  }

  virtual void addObserver(Observer* sub) {
    observers.push_back(sub);
  }

  virtual void removeObserver(Observer* sub) {
    int targetIndex = -1;

    for (int i = 0; i < observers.size(); i++) {
      if (observers[i]->name == sub->name) {
        targetIndex = i;
        break;
      }
    }

    if (targetIndex >= 0) {
      observers.erase(observers.begin() + targetIndex);
    }

  }

  void notify(char* content) {
    for (int i = 0; i < observers.size(); i++) {
      observers[i]->onNotify(this, content);
    }
  }


};
