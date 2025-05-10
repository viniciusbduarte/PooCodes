#include <iostream> 
#include <string>
#include "ViraTempo.hpp"

using namespace std;


ViraTempo::ViraTempo(int t): tempo(t){}



void ViraTempo::virarTempo(){
    incremento = incremento * (-1);
}


void ViraTempo::avancarTempo(){
    tempo = tempo + incremento;

}



void ViraTempo::mostrarTempo(){
    cout << "Tempo: " << tempo << endl;
}