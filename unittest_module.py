# unittest_module.py
# Author: Andri Trottmann
# Date: 13.11.22

if __name__ == "__main__":
    print("*** Start Unit-Test of the Module class ***")

    f = PyModule()
    f.printMsg()

    nr = f.getVariable()
    print(f"f.getVariable(): {nr}")

    print("f.setVariable(13) ...")
    f.setVariable(13)

    nr = f.getVariable()
    print(f"f.getVariable(): {nr}")

    print("*** Unit-Test ended ***")