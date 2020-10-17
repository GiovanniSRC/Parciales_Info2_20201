#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int d, Ho, Hd, alfao, alfad, opc;
    int Xo, Yo, Xd, Yd;

    cout<<"Sistema de simulación."<<endl;
    cout<<"1. Generar disparos (al menos tres) ofensivos que comprometan la integridad del cañón defensivo."<<endl;
    cout<<"2. Generar disparos (al menos tres) defensivos que comprometan la integridad del cañón ofensivo."<<endl;
    cout<<"3. Dado un disparo ofensivo, generar (al menos tres) disparos defensivos que impida que el cañón defensivo sea destruido sin importar si el cañón ofensivo pueda ser destruido."<<endl;
    cout<<"4. Dado un disparo ofensivo, generar (al emnos tres) disparo defensivos que impidan que los cañones defensivo y ofensivo puedan ser destruidos"<<endl;
    cout<<"Ingrese lo que desea simular: ";
    cin>>opc;

    if(opc==1){
        srand(time(NULL));

        /*Se genera una distancia aleatoria que estará entre 1000 metros y 10000 metros
         * que equivale a una distancia entre 1km y 10km*/
        d=1000+rand()%(10000+1-1000); //Distancia a la que se encuentran los cañones

        alfao=5+rand()%(90+1-5); //Angulo aleatorio para el lanzamiento del disparo ofensivo entre 5° y 90°
        Ho=1+rand()%(10+1-1);//


    }

    return 0;
}
