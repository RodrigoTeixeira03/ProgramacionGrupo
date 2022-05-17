// Autores: Nazareno Carolina, Porozo Jose, Teixeira Rodrigo
// Fecha de creacion: 2022-05-12
// Fecha de ultima actualizacion: 2022-05-17

#include<iostream>
#include<stdlib.h>
using namespace std;
#include"NazarenoCarolina.h"
#include"PorozoJose.h"
#include"TeixeiraRodrigo.h"











int main()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************FUNDAMENTOS DE PROGRAMACION GRUPO 6**************"<<endl<<endl;
			cout<<"1.- Trabajos de Nazareno Carolina \n";
			cout<<"2.- Trabajos de Porozo Jose.\n";
			cout<<"3.- Trabajos de Teixeira Rodrigo. \n"; 
			cout<<"4.- Trabajos de. \n";
			cout<<"5.- Trabajos de.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					//TRABAJO DEL INTEGRANTE 1.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE NAZARENO CAROLINA "<<endl;
					NazarenoCarolinamenu();			
					break;
				case 2:
					//TRABAJO DEL INTEGRANTE 2.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE  POROZO JOSE ";
					PorozoJosemenu();
					break;
				case 3:
					//TRABAJO DEL INTEGRANTE 3.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE TEIXEIRA RODRIGO ";
					TeixeiraRodrigomenu();
					break;
				case 4:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DEL INTEGRANTE 4 ";
					break;
				case 5:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DEL INTEGRANTE 5 ";
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   cout<<flag;
	}while(op!=0);
	
         cout<<endl<<"// Autores: Nazareno Carolina, Porozo Jose, Teixeira Rodrigo\n";
	 cout<<"=====================================================================\n";
         cout<<"// Fecha de creación: 2022-05-12\n";
	 cout<<"//======================================\n";
         cout<<"// Fecha de ultima actualizacion: 2022-05-17\n";
	 cout<<"//===============================================\n";

	return(0);

}
