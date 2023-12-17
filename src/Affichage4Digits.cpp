#include <Affichage4Digits.h>

Affichage4Digits::Affichage4Digits(Affichage4DigitsProxy* p_proxy){
    m_proxy = p_proxy;
    m_listEntier[10] = new uint8_t[10]
    {
        0b00111111, // 0
        0b00000110, // 1
        0b01011011, // 2
        0b01001111, // 3
        0b01100110, // 4
        0b01101101, // 5
        0b01111101, // 6
        0b00000111, // 7
        0b01111111, // 8
        0b01101111  // 9
    };
};
void Affichage4Digits::afficher(uint8_t p_d1, uint8_t p_d2, uint8_t p_d3, uint8_t p_d4){
    m_proxy->afficher(p_d1, p_d2, p_d3, p_d4);
};

void Affichage4Digits::afficherEntier(uint8_t p_entier){
    uint8_t d1 = p_entier / 1000;
    uint8_t d2 = (p_entier % 1000) / 100;
    uint8_t d3 = (p_entier % 100) / 10;
    uint8_t d4 = p_entier % 10;
    afficher(d1, d2, d3, d4);
};

uint8_t Affichage4Digits::valeurSegment(uint8_t p_entier) {
    return *m_listEntier[p_entier % 10];
}

void Affichage4Digits::afficherBinaire(uint8_t p_entier){
    uint8_t d1 = valeurSegment(p_entier >> 12);
    uint8_t d2 = valeurSegment((p_entier >> 8) & 0xF);
    uint8_t d3 = valeurSegment((p_entier >> 4) & 0xF);
    uint8_t d4 = valeurSegment(p_entier & 0xF);
    afficher(d1, d2, d3, d4);
};

