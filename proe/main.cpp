#include <iostream>
#include "Persona.h"
using namespace std;
bool ismayor(persona a )
{
    if(a.edad>18){
        return true;}
    if(a.edad<18)
        return false;
}
 void busquedabinaria(persona ps[], int tam, int edad){
        int centro;
        int inf=0;
        char p='F';
        while (inf<=tam){
            centro=(inf+tam)/2;
            if(ps[centro].edad==edad){
                p='V';
                break;
            }
            if(ps[centro].edad>edad){
                tam=centro;
                centro=(inf+tam)/2;
            }
            if(ps[centro].edad<edad){
                inf=centro;
                centro=(inf+tam)/2;
            }
        }

        if(p =='V')
            cout<<"El numero ha sido encontrado en la posicion:"<<centro-1<<endl;

        else
            cout<<"El numero no ha sido encontrado";

        }
int main()
{
    int tam;
    cout<<"Define la cantidad"<<endl;
    cin>>tam;
    persona a;
    persona ps[tam];
    int var;
    string ver;
    int edad;

    for (int i=0;i<tam;i++){
        cin>>ps[i].nombre;
        cin>>ps[i].edad;
    }
    cout<<endl;
    for(int j=0;j<tam;j++){
        cout<<ps[j].nombre<<",";
        cout<<ps[j].edad<<endl;
    }
    /*cout<<"Ingresa nombre para buscar"<<endl;
    cin>>a.nombre;
    for (int i=0; i<5;i++){
        if(a.nombre==ps[i].nombre)
            return true;
    }*/

    for(int h=0;h<tam;h++){
        for(int k=0;k<tam;k++){
            if(ps[h].edad<ps[k].edad){
                var=ps[k].edad;
                ver=ps[k].nombre;
                ps[k].edad=ps[h].edad;
                ps[k].nombre=ps[h].nombre;
                ps[h].edad=var;
                ps[h].nombre=ver;
            }
        }
    }
    cout<<endl<<endl<<"Nueva cadena ordenada"<<endl;
    for(int q=0;q<tam;q++){
        cout<<ps[q].nombre<<",";
        cout<<ps[q].edad<<endl;
    }






    cout<<"Ingresa edad que quieres buscar"<<endl;
    cin>>edad;
    busquedabinaria(ps, tam, edad);

}










