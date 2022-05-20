// Autores: Nazareno Carolina, Porozo Jose, Teixeira Rodrigo, Coime John
// Fecha de creacion: 2022-05-12
// Fecha de ultima actualizacion: 2022-05-17

#include<iostream>
#include<stdlib.h>
using namespace std;
#include"NazarenoCarolina.h"
#include"PorozoJose.h"
#include"TeixeiraRodrigo.h"
#include"CoimeJohn.h"


int main()
{
   
	int op,flag;

	do{
			system("clear");
			cout<<"**************LOS 4 INCREIBLES**************"<<endl<<endl;
			cout<<"1.- Trabajos de Nazareno Carolina \n";
			cout<<"2.- Trabajos de Porozo Jose.\n";
			cout<<"3.- Trabajos de Teixeira Rodrigo. \n"; 
			cout<<"4.- Trabajos de Coime John. \n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE NAZARENO CAROLINA "<<endl;
					NazarenoCarolinamenu();			
					break;
				case 2:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE  POROZO JOSE ";
					PorozoJosemenu();
					break;
				case 3:
					
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE TEIXEIRA RODRIGO ";
					TeixeiraRodrigomenu();
					break;
				case 4:
				
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE Coime John ";
					CoimeJohnmenu();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   
	}while(op!=0);
	
         cout<<endl<<"// Autores: Nazareno Carolina, Porozo Jose, Teixeira Rodrigo, Coime John   \n";
	 cout<<"=================================================================================\n";
         cout<<"//                     Fecha de creación: 2022-05-12                             \n";
	 cout<<"//===============================================================================\n";
         cout<<"//                 Fecha de ultima actualizacion: 2022-05-19                     \n";
	 cout<<"//===============================================================================\n";
         system("color 2");
	return(0);

}
