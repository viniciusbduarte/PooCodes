#include <iostream> 


double nota1{0};
double nota2{0};
double nota3{0};

int main(){
    std::string nome_aluno;
    std::cout << "Digite o nome do aluno: " ;
    std::getline(std::cin, nome_aluno);
    std::cout << "Digite as 3 notas do aluno " << nome_aluno << std::endl;

    std::cin >> nota1 >> nota2 >> nota3;

    double media = ((nota1*3) + (nota2*2) + (nota3*5))/10;

    std::cout << "A média ponderada do aluno " << nome_aluno << " é " << media << std::endl;

    return 0;
}