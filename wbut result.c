/*
	Author: Erik Mota(TheMot)...
	Date: 01-01-2017 5:32 p.m (UTC - 4:30) Caracas
	Email: Kenshimota@gmail.com
	Github: https://github.com/kenshimota

	TheMot: Estas son mis orientaciones a tu codigo porque veo que tienes mcuhas fallas en cuanto 
al estilo, maneo de variables, te recomiento que use mas funciones y no combiertas tu codigo en 
un espaguetti me costo un poco poder entenderlo de hecho no entendi mucho tu idea, recuerda 
que es usuario no sabe lo que haces y como esta hecho el programa si el programa falla los usuarios
lo dejaran de usar y una de la cosas mas importantes valida tus datos en el input porque sino vas
a volver corrupta tu base de datos y el programa no serviria de nada....

	Recuerda siempre documentar tu codigo porque si llegas a quedar en una empresa como programador
vas a trabajar con muchas personas y ellos necesitaran saber para que funciona cada cosa y que significa :P
Te deseo suerte como programador...
	
	Postdata-> Sigueme en mi cuenta de Github... :) :D*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> /*use esta libraria porque me permitira hacer la salida del programa
y tambien te puede ayudar mucho con el manejo de memoria */

/* funcion que se encarga de imprimir los resultados obtenidos */
void printResult(int point, float spga, char select[]){
	printf("Total Credit Point=%d \n",point);
	printf("SGPA Of %s Semestar=%.2f \n",select,spga);
}

/* Funcion que se encargara de obtener los resultados directamente de la suma
de los valores obtenidos dividos en la fraciones obtenidas */
float getResult(int *values, int *fraction , char select[]){
	float spga;
	int total;
	float tmp_fraction;

	for (int i = 0; i < 4; ++i)
	{
		total += values[i];
		tmp_fraction = ((i+1) * fraction[i]); 
	}

	spga =  float(total / tmp_fraction);
	printResult(total, spga, select);

	return spga;
}

/**
 * Lee un entero de la entrada estandar.
 *
 * La funcion continuara pidiendo un numero al usuario mientras el "input" sea
 * invalido.
 */
int read_int(){
    while(1){
        int num = 0;
        // scanf regersa el numero de caracteres leidos
        int read_count = scanf("%d", &num);
        getchar();
        if(read_count == 1){
            // si el numero de caracteres leidos es 1, quiere decir que hemos
            // obtenido un valor que corresponde con el formato %d, o sea, un
            // entero.
            // Regresamos ese numero.
            return num;
        } else {
            // si read_count es diferente de 1, quiere decir que scanf no pudo leer
            // un valor que corresponda con el formato %d. En ese caso,
            // volveremos a pedir al usuario que ingrese un valor valido.
            printf("\nThe value entered is not valid.\n");
            printf("\nPlease enter a number: ");
        }
    }
}


/* Funcion que obtendra un valor valido para lo ingresado por el usuario una calificacion
(A - F) e O  y obtorgara el valor a la suma */
void get_char(int *sum, int q){
	
	char c;

	while(1){

		scanf("%s",&c);
		getchar();

		if(c >= 'A' && c <= 'Z')
			c  =  c+('a'-'A');
		//esta forma permite que si La letra es mayuscala la convertira en minuscula

		if( ( c >= 'a' && c <= 'f' ) || c == 'o' ){
			switch(c){
				case 'a': *sum += 8*q; break;
				case 'b': *sum += 7*q; break;
				case 'c': *sum += 6*q; break;
				case 'd': *sum += 5*q; break;
				case 'f': *sum += 2*q; break;
				case 'e': *sum += 9*q; break;
				case 'o': *sum += 10*q; break;
			}

			break;
		}
		else
			printf("\nThe value entered is not valid.\n");
	}
}

float oddSemResult(char select[]){

	/* Reemplaze n con number porque pense que como era numerica usaste una abreviatura
	pero no estoy claro del todo */
	int number;
	int sum[4], notes[4];

	/* En vez de usar 4 veces el mismo codigo usas ciclos que hacen mas corto el codigo
	siempre tiene que recordar el consejo: Not-repeat YourSelf... */
	for (int i = 3; i >= 0; --i)
	{
		printf("Enter number of subject %d credit point:",i);
		number = read_int();
		notes[i] = number;

		for (int index = 0; index < number ; ++i)
		{
			printf("Enter subject %d grade:",index+1);
			get_char(&sum[i] , i);
		}
	}

	return getResult(sum, notes, select);
}


/* Funcion imprimir en pantalla las opciones que puede selecionas el usuario */
void print_options(){
	printf("Press 1.For ODD SEM RESULT SGPA\n");
	printf("Press 2.For EVEN SEM RESULT SGPA\n");
	printf("Press 3.For YGPA\n");
	printf("Press 4.Exit\n");
}

/* Funcion que leera las opciones que traten usar los usuarios de los usuarios */
int select_options(){

	int option;
	float spga[2];

	while(1){

		print_options();

		printf("Enter ur choice:");
		scanf("%d",&option);
		getchar();

		switch(option){
			case 1:
				spga[0] = oddSemResult("Sem");
			break;
			case 2:
				spga[1] = oddSemResult("Even");
			break;
			case 3:
				printf("YGPA OF SEMESTAR=%.2f \n",(spga[0] / spga[1]));
				getchar();
			break;
			case 4:
				printf("Press a key to exit...\n");
				getchar(); 
				exit(1);
			break;
			default:
				printf("Please enter a valid option...\n");
			break;
		}
	}

	return 0;
}

/* Funcion encargada de imprimir la bienvenedia */
void print_welcome(){
	printf("WELCOME TO MAKAUT FOR RESULT:\n");
}


/* -- Main -- */
int main(){

	while(1){

		print_welcome();

		select_options();

	}
}
