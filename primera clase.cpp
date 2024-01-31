#include <iostream>

//Declaración de las funciones
int sumar(int a,int b);
void imprimirresultado(int resultado);

int main(){
    //Ejemplo de uso de las funciones
    int num1, num2;
    std::cout << "ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "ingrese el segundo numero: ";
    std::cin >> num2;

    //Llamada a la funcion de sumar
    int resultado = sumar(num1,num2);

    //llamada a la funcion de impresion
    imprimirresultado(resultado);

    return 0;
}

int sumar (int a, int b){
    return a + b;
}

//definicion de la funcion de impresion
void imprimirresultado(int resultado){
    std::cout << "el resultado de la suma es: " << resultado << std::endl;
}