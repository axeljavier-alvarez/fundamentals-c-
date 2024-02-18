// AXEL JAVIER GUADALUPE ALVAREZ FELIPE
// CARNET 7691-23-8896
#include <iostream> // FLUJOS DE ENTRADA DEL PROGRAMA

using namespace std; // librerias del programa

int main() {
	
	// variable: tipo reservado
	// cout hola mundo endl
	// tipo nombre de la variable
	
	//para las clases metodos y funciones lower camel case y para las variables snake_case
	
	// restricciones variables: iniciarcon numero no, no puede tener caracteres especiales
	// string nombreCompleto="Axel Alvarez";// camel case
	// string NombreCompleto="Axel Alvarez";// UpperCamelCase
	// string nombre_completo="Axel Alvarez";// Snake case
	
    // cout<<"Hola mundo"<<endl;
    // cout<<nombreCompleto<<endl;  
    // cout<<NombreCompleto<<endl; 
    // cout<<nombre_completo<<endl; 
	// system("pause");
	
	 
	// Variables Numericas
	// Numero enteros
	// como declarar una variable: tipo-nombres de la variable- valor -;
	
	// espacio de cada uno de los tipos de datos
	/* short entero_corto = 32767; // 2 bytes
	
	int entero=2147483647; // 4 bytes
	
	long long entero_largo=12147483648; // 8 bytes
	
	unsigned long long int i_entero_largo=18446744073709551615; //10 bytes
	
	cout<<"short: "<<entero_corto<<endl;
	cout<<"int: "<<entero<<endl;*/
   // cout<<"long: "<<entero_largo<<endl;
    // cout<<"long int: "<<i_entero_largo<<endl;
    // unsigned int int_sin_signo=2;
   // cout<<"int sin signo: "<<int_sin_signo<<endl;
   
   // long double numero_decimal = 100.235;
   // cout<<"float: "<< numero_decimal << endl;
   // char cr='D';
   // char asc= 61;
   //cout <<"char:"<<cr<<endl;
    // cout <<"ascii:"<<asc<<endl;
    
    // bool logico = 0;
    // cout<<logico<<endl;
    //char cadena[6] = "texto";
    
    // string cadena_texto = "Hola soy armando ";
    // cout<<"Cadena: "<<cadena_texto<<endl;
    
    char saludo[4];
    saludo[0]='H';
    saludo[1]='O';
    saludo[2]='L';
    saludo[3]='A';
    
    cout<<"array: "<<saludo<<endl;
    cout<<"array: "<<saludo[0]<<saludo[1]<<saludo[2]<<saludo[3]<<endl;
    
    int codigo[3];
    codigo[0] = 1280;
    codigo[1] = 3800;
    codigo[2] = 124522;
    
    cout<<"codigos "<<codigo[0]<<","<<codigo[1]<<","<<codigo[2]<<","<<endl;
    
    string paises[3];
    paises[0] = "El Salvador";
    paises[1] = "Nicaragua";
    paises[2] = "Guatemala";
    cout<<"paises "<<paises[0]<<","<<paises[1]<<","<<paises[2]<<","<<endl;

  } 
