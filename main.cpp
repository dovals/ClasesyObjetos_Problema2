#include <iostream>
#include <string.h>
#define MAX 20

using namespace std;

class Materia
{
    private:

        int Clave = 2022;
        char Nombre[MAX] = "Base";
        char ProfesorTit[MAX] = "Fernando";
        char LibroTexto[MAX] = "BSD1";
        char nuevprof[MAX] = " ";

    public:

        void MenuMat()
        {
            system("cls");
            int opcMat,auxc;
            cout << "\n1.-Cambiar la clave de la materia Programacion\n2.-Cambiar el nombre del maestro que imparte la materia BasesDatos\n3.-Imprimir todos los datos de la materia BasesDatos"<< endl;
            cin>>opcMat;
            switch(opcMat)
                {
                    case 1:
                        system("cls");
                        cout<<"Ingrese la nueva clave"<<endl;
                        cin>>auxc;
                        CambiaClave(auxc);
                    break;

                    case 2:
                        system("cls");
                        cout<<"Nombre Actual "<<ProfesorTit<<"\n"<<endl;
                        cout<<"Ingresa el nombre del nuevo maestro de base de datos"<<endl;
                        cin>>nuevprof;
                        CambiaProfe(nuevprof);
                    break;

                    case 3:
                        system("cls");
                        Imprime();
                    break;

                    default:
                        cout<<"opcion incorrecta"<<endl;
                    break;
                }
        }

        void Imprime()
        {
            system("cls");
            cout<<Nombre<<" "<<ProfesorTit<<" "<<LibroTexto<<endl;
            system("pause");
        }

        void CambiaClave(int auxc)
        {
            system("cls");
            cout<<"Clave Materia Programacion "<<Clave<<endl;
            Clave = auxc;
            cout<<"Clave Nueva Programacion "<<Clave<<endl;
            system("pause");
        }

        void CambiaProfe(char nuevprof[])
        {
             strcpy(ProfesorTit, nuevprof);
             system("pause");
        }

};


int main()
{
    Materia Programacion;
    Materia BasesDatos;

    do
    {
        BasesDatos.MenuMat();
    }while(true);
    return 0;
}
