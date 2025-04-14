#include <iostream>

void asterisco();
void espaco();
void pulalinha();

int main() {
  

    //padrão 1
    for (int i = 1; i<6; i++){
        for(int j = 0; j<i; j++) asterisco();
    pulalinha();
    }    
    pulalinha();

    
    //padrão 2
    for (int i = 5; i>=0; i--){
        for( int k = 0; k<(5-i); k++) espaco();
        for(int j = 0; j<i; j++) asterisco();
       pulalinha();
    }    

 

    //padrão 3
    int asterisco_padrao3[] = {1, 3, 5, 3, 1};
    int espaco_padrao3[] = {2, 1, 0, 1, 2};

    for (int i = 0; i < 5; i++) {
        for (int k = 0; k<espaco_padrao3[i]; k++){
            espaco();
        }
        for (int k = 0; k<asterisco_padrao3[i]; k++){
            asterisco();
        }
        pulalinha();
    }
    pulalinha();

    //padrão 4
    int asterisco_padrao4[] = {1, 3, 5, 7};
    int espaco_padrao4[] = {3, 2, 1, 0};

    for (int i = 0; i < 4; i++) {
        for (int k = 0; k<espaco_padrao4[i]; k++){
            espaco();
        }
        for (int k = 0; k<asterisco_padrao4[i]; k++){
            asterisco();
        }
        pulalinha();
    }

    

    return 0;
}






void asterisco(){
    std::cout << "*";
}
void espaco(){
    std::cout << " ";
}
void pulalinha(){
    std::cout << std::endl;
}