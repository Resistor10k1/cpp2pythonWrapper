# cpp2pythonWrapper
Template code to wrap a C++ class into a Python class.

## Requirements
* g++ compiler installed
* Python version other than 3.10 (see **Execution on different platforms** for further information)
* Linux operating system

## Execution on different platforms
This template has been tested with the following Python versions on different platforms:
| Python version | Device                 | OS                          | C++ compiler                              |
| -------------- | ---------------------- | --------------------------- | ----------------------------------------- |
| 3.11.0rc1      | Desktop Computer       | Ubuntu 22.04.1 x86-64       | g++ (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0 |
| 3.9.2          | Raspberry PI 4 Model B | Debian GNU/Linux 11 aarch64 | g++ (Debian 10.2.1-6) 10.2.1 20210110     |
| 3.8.0          | Desktop Computer       | Ubuntu 18.04 x86-64         | g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0   |
| 3.6.9          | Desktop Computer       | Ubuntu 18.04 x86-64         | g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0   |

The execution of the code with Python version 3.10 results in a segmentation fault. The problem could not be resolved and since it works on many other platforms, it has not been further investigated.

## Usage
**1.** Clone this repository into your working folder
```
$ git clone https://github.com/Resistor10k1/cpp2pythonWrapper.git
$ cd cpp2pythonWrapper
```

**2.** Build the dynamic library
```
$ make
```

Expected output:
```
g++ -c -fPIC -Wall  Module.cpp -o Module.o
g++ -shared -Wl,-soname,libModule.so -o libModule.so Module.o
```

**3.** Start the unit test
```
$ python -m unittest_module
```

Expected output:
```
*** Start Unit-Test of the Module class ***
Module::Module() : 0
Hello form Module!
Module::getVar(void)
f.getVariable(): 0
f.setVariable(13) ...
Module::setVar(int x)
Module::getVar(void)
f.getVariable(): 13
*** Unit-Test ended ***
Module::~Module()
```
