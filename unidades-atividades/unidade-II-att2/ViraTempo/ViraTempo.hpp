#include <iostream> 
#include <string>
#pragma once

class ViraTempo{
private:
    int tempo;
    int incremento = 1;
public:
    ViraTempo(int t);
    void virarTempo();
    void avancarTempo();
    void mostrarTempo();
};
