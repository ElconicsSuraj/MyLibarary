// MyLibrary.h

#ifndef MyLibrary_h
#define MyLibrary_h

#include "Arduino.h"

class MyLibrary {
  public:
    MyLibrary();
    void setPinMode(int pin, int mode);
};

#endif
