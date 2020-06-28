#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n,i,j,aux;
    float promedio,suma=0,mayor=0,menor=100;
   
    int aprobados=0,reprobados=0;
    
    cout<<"Programa para saber si el alumno aprobo"<<endl;
    cout<<"Numero de calificaciones : "<<endl;
    cin>>n;
    float* tabla;
    tabla=new float[n];
    for(i=0;i<n;i++)
    {
    cout<<"Calificacion : "<<i+1<<endl;
      cin>>tabla[i]; 
      suma+=tabla[i];
      }
      promedio=suma/n;
      for(i=0;i<n;i++)
      {
                      if(tabla[i]>mayor)
      {
      mayor=tabla[i]; 
      } 
      if(tabla[i]<menor)
      {
                        menor=tabla[i]; }
                      
                     
                      
      if(tabla[i]>=6)
      {
         aprobados=aprobados+1;            
                     }
      if(tabla[i]<6)
      {
          reprobados=reprobados+1;          
                    
                    }
                    }
                    
          for(i=0;i<n;i++)   //i=2
          {                       //j=3
             for(j=i+1;j<n;j++)
             {
             if(tabla[i]<tabla[j])
             {
               aux=tabla[i];
               tabla[i]=tabla[j]; 
               tabla[j]=aux;                 
                                 }                  
                               
                               }             
                          
      
      
                          }
                          cout<<"Calificaciones de mayor a menor: "<<endl; 
                        for(i=0;i<n;i++)
                        {
                          cout<<tabla[i]<<endl;              
                                        }      
                   
                    
      
      
      cout<<"Promedio del alumno : "<<promedio<<endl;
      cout<<"Su mayor calificacion : "<<mayor<<endl;
      cout<<"Su menor calificacion : "<<menor<<endl;
      cout<<"Calificaciones aprobadas : "<<aprobados<<endl;
      cout<<"Calificaciones reprobados: "<<reprobados<<endl;

      if(promedio <= 5.9)
      {
        cout <<"El alumno reprobó la materia"<< endl;
      }
      if (promedio >= 6)
      {
        cout <<"El alumno aprobo la materia"<< endl;
      }
      
                    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}