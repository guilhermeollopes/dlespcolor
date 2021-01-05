#ifndef _DLESP_COLOR
#define _DLESP_COLOR

#include <Arduino.h>

class pinRGB{
    private:

    public:
        pinRGB(int pinR, int pinG, int pinB);
        void isAnodeCom();
        void setRGB(int R, int G, int B);
        void setColor(int codeColor);
        void setClean();
		void setStatus(bool r, bool g, bool b);
        void test();
        
};

#endif