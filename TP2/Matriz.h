#pragma once

namespace Matrices{

    constexpr int TAMANO = 5;
    using Matriz = int [TAMANO][TAMANO];

    /*
        La matriz de una relación es reflexiva si todos los elementos de la 
        diagonal principal son iguales a 1.

        Devuelve verdadero si la matriz es reflexiva.
    */
    bool EsReflexiva(Matriz& Matriz);
    
    /*
        La matriz de una relación es irreflexiva si todos los elementos de la
        diagonal principal son iguales a 0.

        Devuelve verdadero si la matriz es irreflexiva.
    */
    bool EsIrreflexiva(Matriz& Matriz);
    
    /* 
        La matriz de una relación es simétrica si es simétrica, valga la redundancia, 
        respecto de la diagonal principal. Otra manera de verlo es que la matriz 
        debe ser igual a su transpuesta

        Devuelve verdadero si la matriz es simétrica.
    */
    bool EsSimetrica(Matriz& Original);

    /* 
        La matriz de una relación es asimétrica si todos los elementos 
        de la diagonal principal son iguales a 0 y los elementos repecto 
        de la diagonal principal son opuestos o ambos iguales a cero, 
        es decir, es antisimétrica e irreflexiva.

        Devuelve verdadero si la matriz es asimétrica.
    */
    bool EsAsimetrica(Matriz& Matriz);
    
    /* 
        La matriz de una relación es antisimétrica si los elementos
        respecto de la diagonal principal son opuestos o ambos iguales a
        cero, no pueden ser ambos uno.

        Devuelve verdadero si la matriz es antisimétrica.
    */
    bool EsAntisimetrica(Matriz& Original);

    /*
        La matriz de una relación es transitiva si los elementos distintos
        de cero de la matriz (Mr * Mr) coinciden con los elementos de la 
        matriz original, es decir, la matriz original debera tener 1 donde
        la matriz (Mr * Mr) también tenga 1.

        Devuelve verdadero si la matriz es transitiva.
    */
    bool EsTransitiva(Matriz& Original);

    /*
        Devuelve falso si las matrices recibidas son diferentes, sino verdadero
    */
    bool SonIguales(Matriz& Matriz1, Matriz& Matriz2);

    /*
        Transpone una matriz y guarda el resultado en el parámetro recibido
    */
    void Transponer(Matriz& Original, Matriz& Resultado);
    
    /*
        Transforma la matriz para que solo tenga ceros y unos
    */
    void Normalizar(Matriz& Matriz);
    
    /*
        Muestra la matriz
    */
    void Mostrar(Matriz& Matriz);

    /*
        Realiza el producto matricial entre Matriz1 y Matriz 2 
        y guarda la matriz resultante en Resultado
    */
    void Multiplicar(Matriz& Matriz1, Matriz& Matriz2, Matriz& Resultado);
}

