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

    //padrão 2
    for (int i = 5; i>=0; i--){
        for( int k = 0; k<(5-i); k++) espaco();
        for(int j = 0; j<i; j++) asterisco();
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