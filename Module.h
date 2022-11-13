// Module.h
// Author: Andri Trottmann
// Date: 24.10.22



#ifndef MODULE_H_
#define MODULE_H_


class Module
{
  public:
    Module();
    ~Module();
    void print(void);
    
    void setVar(int x);
    int getVar(void);
    
  private:
    int myVar = 0;
};


// Wrapper for the functions to use in python
extern "C" {
  Module* Module_new(){ return new Module(); }
  void Module_del(Module* object){ delete object; }
  void Module_print(Module* object){ object->print(); }
  void Module_setVar(Module* object, int x){ object->setVar(x); }
  int Module_getVar(Module* object){ return object->getVar(); }
}


#endif

