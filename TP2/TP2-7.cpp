/*
    7. * Crear un programa que dada una matriz boolena, determine si la misma cumple con las propiedades de ser:
        a) Reflexiva, irreflexiva, ninguna de las dos.
        b) Simetrica, asimétrica, ninguna de las dos.
        c) Antisimétrica.
        d) Transitiva.
*/

#include <iostream>
#include "Matriz.h"

int main(){

    Matrices::Matriz Matriz = {
        {1, 1, 0, 1, 1},
        {0, 1, 0, 0, 1},
        {0, 0, 1, 1, 1},
        {1, 0, 0, 1, 1},
        {0, 1, 1, 1, 1}
    };

    Matrices::Mostrar(Matriz);

    // Revisa si es Reflexiva, Irreflexiva o ninguna
    if(Matrices::EsReflexiva(Matriz)){
        std::cout << "Es Reflexiva\n";
    }
    else if(Matrices::EsIrreflexiva(Matriz)){
        std::cout << "Es Irreflexiva\n";
    }
    else{
        std::cout << "No es Reflexiva ni Irreflexiva\n";
    }

    // Revisa si es Simétrica, Asimétrica o ninguna
    if(Matrices::EsSimetrica(Matriz)){
        std::cout << "Es Simetrica\n";
    }
    else if(Matrices::EsAsimetrica(Matriz)){
        std::cout << "Es Asimetrica\n";
    }
    else{
        std::cout << "No es Simetrica ni Asimetrica\n";
    }

    // Revisa si es Antisimétrica
    if(Matrices::EsAntisimetrica(Matriz)){
        std::cout << "Es Antisimetrica\n";
    }
    else{
        std::cout << "No es Antisimetrica\n";
    }

    // Revisa si es Transitiva
    if(Matrices::EsTransitiva(Matriz)){
        std::cout << "Es Transitiva\n";
    }
    else{
        std::cout << "No es Transitiva\n";
    }
    getchar();
    return 0;
}