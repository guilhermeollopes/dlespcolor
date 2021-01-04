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
        ledcWrite(0, 0);
        ledcWrite(1, 0);
        ledcWrite(2, 0);
    
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
        ledcWrite(0, 255);
    }
	if(codeColor == 5) {
		ledcWrite(0, 134);
		ledcWrite(1, 50);
		ledcWrite(2, 152);
	}
    if(codeColor == 6) {
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
	digitalWrite(0, HIGH);
	delay(1000);
	digitalWrite(0, LOW);
	digitalWrite(1, HIGH);
	delay(1000);
	digitalWrite(1, LOW);
	digitalWrite(2, HIGH);
	delay(1000);
	digitalWrite(2, LOW);
}
void pinRGB::setStatus(bool r, bool g, bool b){
    if(r == true) {
        digitalWrite(0, HIGH);
    } else if(r == false) {
        digitalWrite(0, LOW);
    }

    if(g == true) {
        digitalWrite(1, HIGH);
    } else if(g == false) {
        digitalWrite(1, LOW);
    }

    if(b == true) {
        digitalWrite(2, HIGH);
    } else if(b == false) {
        digitalWrite(2, LOW);
    }
}
