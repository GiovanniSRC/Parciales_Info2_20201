#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float d, Ho, Hd, alfao, alfad;
    float Xo, Yo, Xd, Yd, Vo, Vd;
    float g=9.8, disc;
    int opc;

    cout<<"Sistema de simulación."<<endl;
    cout<<"1. Generar disparos (al menos tres) ofensivos que comprometan la integridad del cañón defensivo."<<endl;
    cout<<"2. Generar disparos (al menos tres) defensivos que comprometan la integridad del cañón ofensivo."<<endl;
    cout<<"3. Dado un disparo ofensivo, generar (al menos tres) disparos defensivos que impida que el cañón defensivo sea destruido sin importar si el cañón ofensivo pueda ser destruido."<<endl;
    cout<<"4. Dado un disparo ofensivo, generar (al emnos tres) disparo defensivos que impidan que los cañones defensivo y ofensivo puedan ser destruidos"<<endl;
    cout<<"Ingrese lo que desea simular: ";
    cin>>opc;
    cout<<endl;

    if(opc==1){
        int num_intentos=0;

        while (num_intentos<3) {

            srand(time(NULL));

            /*Se genera una distancia aleatoria que estará entre 1000 metros y 10000 metros
             * que equivale a una distancia entre 1km y 10km*/
            d=1000+rand()%(10000+1-1000); //Distancia a la que se encuentran los cañones

            alfao=5+rand()%(90+1-5); //Angulo aleatorio para el lanzamiento del disparo ofensivo entre 5° y 90°
            Ho=1+rand()%(10+1-1);//Altura para el cañon ofensivo entre 1 metro y 10 metros
            Hd=1+rand()%(10+1-1);//Altura para el cañon defensivo 1 metro y 10 metros
            Vo=1+rand()%(100+1-1); //velocidad del disparo por parte del cañon ofensivo

            disc=(pow(Vo,2)-(4*(g/2)*(Hd-Ho)));

            if(disc>0){
                float t1,t2;

                /*Calculo del tiempo de vuelo*/
                t1=(-Vo*sin(alfao)+sqrt(disc))/2*(g/2);
                t2=(-Vo*sin(alfao)-sqrt(disc))/2*(g/2);

                if(t1>t2){
                    if(t1<2.5){
                        cout<<"Condiciones que hicieron el ataque efectivo"<<endl;
                        cout<<"Altura canion ofensivo= "<<Ho<<endl;
                        cout<<"Altura canion defensivo= "<<Hd<<endl;
                        cout<<"Velocidad del lanzamiento del canion ofensivo= "<<Vo<<endl;
                        cout<<"Tiempo en que fue impactado el canion defensivo= "<<t1<<endl;
                        cout<<endl;
                        num_intentos+=1;
                    }

                    else{
                        continue;
                    }

                }

                else if(t2>t1){
                    if(t2<2.5){
                        cout<<"Condiciones que hicieron el ataque efectivo"<<endl;
                        cout<<"Altura canion ofensivo= "<<Ho<<endl;
                        cout<<"Altura canion defensivo= "<<Hd<<endl;
                        cout<<"Velocidad del lanzamiento del canion ofensivo= "<<Vo<<endl;
                        cout<<"Tiempo en que fue impactado el canion defensivo= "<<t2<<endl;
                        cout<<endl;
                        num_intentos+=1;
                    }

                    else{
                        continue;
                    }
                }

                else if(t1<0&&t2<0){
                    continue;
                }

            }

        }








    }

    return 0;
}
