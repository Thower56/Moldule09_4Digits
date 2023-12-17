#pragma once
#include <Affichage4DigitsProxy.h>

class Affichage4Digits {
public:
    Affichage4Digits(Affichage4DigitsProxy* p_proxy);
    void afficher(uint8_t p_d1, uint8_t p_d2, uint8_t p_d3, uint8_t p_d4);
    void afficherEntier(uint8_t p_entier);
    void afficherBinaire(uint8_t p_entier);
    uint8_t valeurSegment(uint8_t p_entier);
private:
    Affichage4DigitsProxy* m_proxy;
    uint8_t* m_listEntier[];
};