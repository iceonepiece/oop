#pragma once

class Command {
public:
  virtual void execute() = 0;
};

class FireCommand : public Command {
public:
  virtual void execute() {
    std::cout << "fire";
  }
};

class JumpCommand : public Command {
public:
  virtual void execute() {
    std::cout << "jump";
  }
};

class NullCommand : public Command {
public:
  virtual void execute() {
    std::cout << "nothing";
  }
};
