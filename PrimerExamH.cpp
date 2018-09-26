
#include <conio.h>
using namespace std;
//realizar un programa en C++ que pida un arreglo de numeros enteros, al pedir un arreglo de numeros enteros e imprima dos recorridos con el apuntador
//y subelo a git en un repositorio llamado primer examen

int main(int argc, char** argv) {
    int opcion;
    int Arreglo[10]={};
    int *puntero=Arreglo;
    for(int i=0; i<10; i++)
        {
            cout << "introduce el dato " << i+1 << " del arreglo: ";
            cin >> Arreglo[i];
            cout << endl;
        }
    do{
    cout << endl << "eligue una opcion" << endl;
    cout << "1.-imprimir los datos del primero al ultimo" << endl;
    cout << "2.-imrpimir los datos del ultimo al primero" << endl;
    cout << "3.-salir" << endl << "opcion: "; 
    cin >> opcion;
    if (opcion!=3){
    	cout << endl <<  "arreglo: " << endl;
	}
    if(opcion==1){
        for(int i=0; i<10; i++)
        {
            cout << *puntero << endl;
            *puntero++;
        }
    }
    if(opcion==2){
    	for(int i=0; i<11; i++)
        {
        	if(i==0){
        		*puntero--;
			}
        	if(i!=0){
        		cout << *puntero << endl;
            	*puntero--;
			}
        }
    }
    if(opcion<1 || opcion>3)
    {
        cout << "opcion invalida, intente de nuevo" << endl;
    }
    }while(opcion!=3);
    return 0;
}