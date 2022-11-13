# PyModule.py
# Author: Andri Trottmann
# Date: 13.11.22


import ctypes as ct

# load the library
lib = ct.cdll.LoadLibrary('./libModule.so')

class PyModule(object):
    # constructor
    def __init__(self):
        self.obj = lib.Module_new()
    
    # destructor
    def __del__(self):
        lib.Module_del(self.obj)
    
    def printMsg(self):
        lib.Module_print(self.obj)

    def setVariable(self, number):
        lib.Module_setVar(self.obj, number)

    def getVariable(self):
        return lib.Module_getVar(self.obj)
    

