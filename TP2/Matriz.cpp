#include <iostream>
#include "Matriz.h"

bool Matrices::EsReflexiva(Matriz& Matriz){
    for(int i = 0; i < TAMANO; i++){
        for(int j = 0; j < TAMANO; j++){
            if(i == j && Matriz[i][j] != 1){                
                return false;
            }
        }
    }

    return true;
}

bool Matrices::EsIrreflexiva( Matriz& Matriz){
    for(int i = 0; i < TAMANO; i++){
        for(int j = 0; j < TAMANO; j++){
            if(i == j && Matriz[i][j] != 0){                
                return false;
            }
        }
    }

    return true;
}

bool Matrices::EsSimetrica(Matriz& Original){
    Matriz Temporal;
    Transponer(Original, Temporal);    
    return SonIguales(Original, Temporal) ? true : false;
}

bool Matrices::EsAsimetrica(Matriz& Matriz){
    return EsAntisimetrica(Matriz) && EsIrreflexiva(Matriz);
}

bool Matrices::EsAntisimetrica(Matriz& Original){
    for(int i = 0; i < TAMANO; i++){
        for(int j = 0; j < TAMANO; j++){
            if(i != j && Original[i][j] == Original[i][j] && Original[i][j] == 1){
                return false;
            }
        }
    }
    
    return true;
}

bool Matrices::EsTransitiva(Matriz& Original){
    Matriz Producto;
    Multiplicar(Original, Original, Producto);
    Normalizar(Producto);

    for(int i = 0; i < TAMANO; i++){
        for(int j = 0; j < TAMANO; j++){
            if(Producto[i][j] == 1 && Original[i][j] != 1){
                return false;
            }
        }
    }
    
    return true;
}

void Matrices::Transponer(Matriz& Original, Matriz& Resultado){
    for(int i = 0; i < TAMANO; i++){
        for(int j = 0; j < TAMANO; j++){
            Resultado[j][i] = Original[i][j];
        }
    }
}

bool Matrices::SonIguales(Matriz& Matriz1, Matriz& Matriz2){
    for(int i = 0; i < TAMANO; i++){
        for(int j = 0; j < TAMANO; j++){
            if(Matriz1[i][j] != Matriz2[i][j]){
                return false;
            }
        }
    }
    return true;
}

void Matrices::Multiplicar(Matriz& Matriz1, Matriz& Matriz2, Matriz& Resultado){
    for(int i = 0; i < TAMANO; i++){
        for(int j = 0; j < TAMANO; j++){
            
            Resultado[i][j] = 0;

            for(int k = 0; k < TAMANO; k++){
                Resultado[i][j] += Matriz1[i][k] * Matriz2[k][j];
            }
        }
    }
}


void Matrices::Mostrar(Matriz& Matriz){
    for(int i = 0; i < TAMANO; i++){
        for(int j = 0; j < TAMANO; j++){
            std::cout << Matriz[i][j] << " ";
        }
        std::cout << '\n';
    }
}

void Matrices::Normalizar(Matriz& Matriz){
    for (int i = 0; i < TAMANO; i++){
        for(int j = 0; j < TAMANO; j++){
            if(Matriz[i][j] > 1){
                Matriz[i][j] = 1;
            }
        }
    }
}