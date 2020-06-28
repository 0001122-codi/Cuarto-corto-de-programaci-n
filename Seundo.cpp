#include<iostream>
using namespace std;

int main(){
 int estatura[25];
 int suma=0;
 float promedio;
 cout <<"Programa para calcular las estatura promedio de 25 estudiantes\n";
 cout <<"Por favor ingrese el dato en cetimetros \n";
 
 for(int i=0; i<25;i++){
  do{
   cout<<"Ingrese la estatura "<<i+1<<endl;
   cin>>estatura[i];
   
  }while(estatura[i]<0 || estatura[i]>1000);
  
  suma=suma+estatura[i];
 }
 promedio=1.0*suma/25;
 cout<<"El promedio de estatura es es: "<<promedio <<" cm"<< endl;
 
  
 return 0;
}