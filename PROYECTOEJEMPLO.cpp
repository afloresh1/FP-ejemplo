#include <iostream>
#include <ctime>
#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;
enum Inicio{
	ejecutar,
	salir,
	finalizar
};

//FUNCIONES----

void mostrarbienvenido(int kbhit());
string funcioninicio(Inicio boton);

//PROGRAMA PRINCIPAL

int main(){
	string input;
	char s;
	string boton;
	string boton1;
	int cmode=0;
	
	//FUNCION PARA LAS DOS PANTALLAS MOSTRADAS (Y SE PODRIA  SALIR DEL BUCLE CUANDO SE PRESIONE UNA TECLA//
		mostrarbienvenido(kbhit);
		
		
	//A PARTIR DE AQUI SE PONDRA LO QUE SALDRIA LUEGO DE PULSAR CUALQUIER TECLA PARA INICIAR//
	//----------------------------------------------------------------------------------------------------
	for(int i=1;i<=5;i++){
	cout<<"              "<<endl;
	}
	cout<<"                                  ";
	cout<<"INDICACIONES: "<<endl;
	for(int i=1;i<=5;i++){
	cout<<"              "<<endl;
	}
	cout<<"     ";
	cout<<"Presione las letras - EJECUTAR - para dar inicio al programa"<<endl;
	cout<<"     ";
	cout<<"Presione las letras - SALIR - para dejar de ejecutar el programa"<<endl;
	cout<<"     ";
	cout<<"Presione las letras - FINALIZAR - para finalizar el programa"<<endl;
	cout<<" "<<endl;
	cout<<"     ";
	//---------------------------------------------------------------------------------------------------
	cout<<"Ingrese la palabra: ";
	cin>>boton;
	if(boton=="ejecutar"){
		cout<< funcioninicio(ejecutar);
	}else if(boton =="salir"){
		cout<< funcioninicio(salir);
	}else if (boton=="finalizar"){
		cout<< funcioninicio(finalizar);
	}else{
		system("cls");
		//---------------------------------------------------
	    for(int i=1;i<=5;i++){
          	cout<<"              "<<endl;
          	cout<<" "<<endl;
     	}
    	cout<<"                            ";
		cout<<"Palabra no reconocida";
        cout<<"                            ";
        
		for(int i=1;i<=5;i++){
          	cout<<"              "<<endl;
          	cout<<" "<<endl;
		}
		//----------------------------------------------------
		system("pause");
		system("cls");
        return main();
		}
		
	
}



//AQUI SE COLOCARON LAS FUNCIONES Y SUS C�DIGOS

//01 FUNCION
void mostrarbienvenido(int kbhit()){
	do{
		  	
	//PRIMERA PANTALLA QUE SE MOSTRARA AL USUARIO//
		for(int k=1; k<=10; k++){
			for(int m=1; m<=79; m++){
				cout<<"-";
			}
			cout<<"-"<<endl;
		}
		for(int i=1; i<=25; i++){
				cout<<"-";
		}
	cout<<"BIENVENIDO A LA BASE DE DATOS";

		for(int i=1; i<=25; i++){
			cout<<"-";
		}
	cout<<"-"<<endl;
		for(int l=1; l<=10; l++){
			for(int m=1; m<=79; m++){
				cout<<"-";
			}
			cout<<"-"<<endl;
		}
	clock_t start = clock(); // indica el tiempo de reloj que ha transcurrido
	while(clock()-start<1*CLOCKS_PER_SEC);//verifica dentro de cuanto tiempo se va a tener la pantalla dada
	system("cls"); //esta funci�n se ocupar�a de limpiar la pantalla
	
	   
    	    
	//SEGUNDA PANTALLA DE INICIO//
	
		for(int k=1; k<=12; k++){
			cout<<" "<<endl;
		}
		for(int i=1; i<=20; i++){
			cout<<" ";
		}
	
	cout<<"PRESIONE CUALQUIER BOTON PARA INICIAR";

		for(int i=1; i<=23; i++){
			cout<<" ";
		}
	cout<<" "<<endl;
		for(int l=1; l<=10; l++){		
			cout<<" "<<endl;
		}
	clock_t start1 = clock(); // indica el tiempo de reloj que ha transcurrido
	while(clock()-start1<1*CLOCKS_PER_SEC); //verifica dentro de cuanto tiempo se va a tener la pantalla dada
	system("cls");	
	
	}while(!kbhit());
}


string funcioninicio(Inicio boton){
	int contra;
	
	switch (boton){
		
		case ejecutar:
		//SE DARA INICIO AL PROGRAMA PRINCIPAL DONDE SE EJECUTARIA LA MAYORIA DE LAS FUNCIONES
		cout<<"INGRESE SU CONTRASE�A: ";
		cin>>contra;
		//AQUI PUEDES PONER LA FUNCION PARA LO OTRO, YA SERIA FUNCION DENTRO DE OTRA FUNCI�N
		if(contra==101010){//CONTRASE�A DEL PROFESOR BARRAZA :)
			cout<<"Probando";
			//-------------------------------------------------------------------------------------------------------------------
		system("pause");
		
			//_------------------------------------------------------------------------------------------------------------------------
		system("cls");	
		cout<<main();
		}
		else{
			cout<<"CONTRASE�A NO VALIDA"<<endl;
		}
		
			break;//para indicar que se termino el switch
		case salir:	
			system("cls");
			cout<<main();
			break;
		case finalizar:
		cout<<" "<<endl;
		cout<<" "<<endl;
		break;
		default:
			cout<< "ERROR.";
	}
}
