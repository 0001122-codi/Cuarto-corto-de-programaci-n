#include <string>
#include <iostream>

using namespace std;

void buscar_y_reemplazar(string& frase, string buscar, string rempl)
{
    int pos = frase.find(buscar);
    if (pos!=-1)
    {
        frase.replace(pos, buscar.size(), rempl);
    }
}


int main()
{
   string oracion;

   cout <<"Programa para codificar palabras por medio de la clave MURCIELAGO\n";
   cout <<"Ingrese una oracion"<< endl;

   getline(cin, oracion);

   buscar_y_reemplazar(oracion,"m","0");
   buscar_y_reemplazar(oracion,"u","1");
   buscar_y_reemplazar(oracion,"r","2");
   buscar_y_reemplazar(oracion,"c","3");
   buscar_y_reemplazar(oracion,"i","4");
   buscar_y_reemplazar(oracion,"e","5");
   buscar_y_reemplazar(oracion,"l","6");
   buscar_y_reemplazar(oracion,"a","7");
   buscar_y_reemplazar(oracion,"g","8");
   buscar_y_reemplazar(oracion,"o","9");

   cout << oracion <<endl;

   
}