#include <iostream>
using namespace std;

int main(){
    int capacities = 5; //Capacidad inicial del arreglo
    int *number = new int[capacities]; //Cree la memoria para 5 enteros
    int entries = 0;

    while(true){
        cout << "Numbers: ";
        cin >> number[entries];
        //Lea la entrada y guárdela en el arreglo

        if(cin.fail()) break; //Si la entrada no es un número, salga del bucle
        entries++; //Incrementa el contador de entradas

        if(entries == capacities){
            capacities *= 2; //Doble la capacidad del arreglo
            int *temp = new int[capacities]; //Cree un nuevo arreglo con la capacidad doble
                        
            //Copie los elementos del arreglo original al nuevo arreglo
            for(int i = 0; i < entries; i++){
                temp[i] = number[i];
            }
            delete[] number; //Libere la memoria del puntero original antes que se termine el programa
            number = temp; //Asigne el nuevo arreglo al puntero original
        }

        if(entries > capacities){
            cout << "Warning, you have reached the limit of entries! \n"; //Advertencia si se alcanza el límite de entradas
        }
        //Si se alcanza el límite de entradas, salga del bucle   

        for(int i = 0; i < entries; i++){
            cout << number[i] << ", ";
        }
        //Imprime los números ingresados
    }
    return 0;
}