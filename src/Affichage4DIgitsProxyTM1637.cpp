#include <Affichage4DigitsTM1637.h>

Affichage4DigitsTM1637::Affichage4DigitsProxyTM1637(){
    m_tn1637 = TM1637Display(2, 3);
};
void Affichage4DigitsTM1637::afficher(uint8_t p_d1, uint8_t p_d2, uint8_t p_d3, uint8_t p_d4){
    uint8_t tab[4] = {p_d1, p_d2, p_d3, p_d4};
    m_tn1637.setSegments(tab);
};