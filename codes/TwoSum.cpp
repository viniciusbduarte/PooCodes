#include <iostream>
const int alvo{3};

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    for(int i=0; i<5; i++)
        for(int j=0; i<5; i++)
            if( arr[i] + arr[j] == alvo) 
                std::cout << "Saída:" << std::endl ;


    return 0;
}