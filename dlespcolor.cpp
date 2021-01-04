#include <dlespcolor.h>

pinRGB::pinRGB(int pinR, int pinG, int pinB) {

    ledcSetup(0, 5000, 8);
    ledcAttachPin(pinR, 0);

    ledcSetup(1, 5000, 8);
    ledcAttachPin(pinG, 1);

    ledcSetup(2, 5000, 8);
    ledcAttachPin(pinB, 2);
}
void pinRGB::setRGB(int R, int G, int B){
    ledcWrite(0, R);
    ledcWrite(1, G);
    ledcWrite(2, B);
}
void pinRGB::setColor(int codeColor){
        ledcWrite(0, R);
        ledcWrite(1, G);
        ledcWrite(2, B);
    
    if(codeColor == 1){
        ledcWrite(0, 0);
        ledcWrite(1, 0);
        ledcWrite(2, 0);

    }
	if(codeColor == 2){
        ledcWrite(1, 255);
    }
	if(codeColor == 3) {
		ledcWrite(1, 255);
		ledcWrite(2, 255);
	}
    if(codeColor == 4){
        ledWrite(0, 255);
    }
	if(codeColor == 5) {
		ledcWrite(0, 134);
		ledcWrite(1, 50);
		ledcWrite(2, 152);
	}
    if(codeColor = 6) {
        ledcWrite(0, 255);
        ledcWrite(1, 255);
    }
}
void pinRGB::setClean(){
    ledcWrite(0, 0);
    ledcWrite(1, 0);
    ledcWrite(2, 0);
}
void pinRGB::test(){
	digitalWrite(_pinR, HIGH);
	delay(1000);
	digitalWrite(_pinR, LOW);
	digitalWrite(_pinG, HIGH);
	delay(1000);
	digitalWrite(_pinG, LOW);
	digitalWrite(_pinB, HIGH);
	delay(1000);
	digitalWrite(_pinB, LOW);
}
void pinRGB::setStatus(bool r, bool g, bool b){
    if(r == true) {
        digitalWrite(_pinR, HIGH);
    } else if(r == false) {
        digitalWrite(_pinR, LOW);
    }

    if(g == true) {
        digitalWrite(_pinG, HIGH);
    } else if(g == false) {
        digitalWrite(_pinG, LOW);
    }

    if(b == true) {
        digitalWrite(_pinB, HIGH);
    } else if(b == false) {
        digitalWrite(_pinB, LOW);
    }
}
