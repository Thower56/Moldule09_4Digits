#include <Program.h>
#include <Affichage4DigitsProxyTM1637.h>
#include <Affichage4Digits.h>


Affichage4Digits* affichage4Digits;
Program::Program(){
    affichage4Digits = new Affichage4Digits(new Affichage4DigitsProxyTM1637());
}

void Program::loop(){
}