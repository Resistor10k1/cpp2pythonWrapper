// Module.cpp
// Author: Andri Trottmann
// Date: 24.10.22


#include <iostream>
#include "Module.h"


Module::Module()
{
  std::cout << "Module::Module()" << " : " << myVar << std::endl;
}

Module::~Module()
{
  std::cout << "Module::~Module()" << std::endl;
}

void Module::print(void)
{
  std::cout << "Hello form Module!" << std::endl;
}

void Module::setVar(int x)
{
  std::cout << "Module::setVar(int x)" << std::endl;
  myVar = x;
}

int Module::getVar(void)
{
  std::cout << "Module::getVar(void)" << std::endl;
  return myVar;
}

