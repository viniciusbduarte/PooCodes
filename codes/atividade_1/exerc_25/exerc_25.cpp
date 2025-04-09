#include <iostream>

int main(){

int paradas{1};
double km{0}, litros{0};


while(1){

    std::cout << "Parada " << paradas << std::endl;

    std::cout << "Digite a quilometragem rodada desde o último abastecimento (-1 para encerrar):";
    std::cin >> km ;

    if (km == -1) exit(1);

    std::cout << "Digite a quantidade de litros abastecidos:";
    std::cin >> litros;

    paradas++;

    double consumo = km / litros;

    double totaldelitros = totaldelitros + litros;
    double totalkm = totalkm +km;
    
    std::cout << "Consumo atual: " << consumo << " Km/Litros" << std::endl;
    std::cout << "Total de litros: " << totaldelitros << " L" << std::endl;
    std::cout << "Total de rodado: " << totalkm << " Km" << std::endl;
}

    return 0;
}


