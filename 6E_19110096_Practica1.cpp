/*
Programa C++
VideoJuego con interfaz en CDM
Titulo del Videojuego 
Julian Jhosimar
Briano Sanchez
19110096
Clue SIJ
*/
#include <iostream>     
#include <stdlib.h>     
#include <time.h>       
#define ss cout 
#define aa cin 

using namespace std;

void Intro();
void Mepri();
void Op();
void PregPer();
void PregLug();
void PregArm();
void ESONO();
void ContJ();



	int men1;
	int men2;
	int men3;
	int Cont1=1;
	int Random;
	int Conti=0;
	int colo;
	int ES=0;
	int ES1=0;
	int ES2=0;

 main(){
	ss<<endl<<"Bienvenido al CLUE SIJ"<<endl;
	srand	(time(NULL));
	Random=1+rand()%(5); 
	do{
		Intro();
		Mepri();
	 ESONO();
	 ContJ();
	}while (Conti==1);
	return 0;
}

void Intro(){
	ss<<"EN UNA MANSION DEL AÑO 1800"<<endl;
	ss<<"HUBO UN TERRIBLE SUCESO QUE SACUDIO A LA PEQUEÑA LOCALIDAD"<<endl;
	ss<<"SE LLEVO A CABO UN ASESINATO."<<endl;
	ss<<"PARA LLEGAR AL CULPABLE DEBEMOS DE INDAGAR ¿QUIEN FUE?"<<endl;
	ss<<"LOS PERSONAJES SON: "<<endl;
	ss<<"- MAYORDOMO "<<endl;
	ss<<"- ESPOSO "<<endl;
	ss<<"- ESPOSA "<<endl;
	ss<<"- HIJO "<<endl;
	ss<<"- PRIMO LEJANO "<<endl;
	ss<<"¿QUIEN DE ELLOS FUE?"<<endl;
	ss<<"¿CON QUE OBJETO SE REALIZO EL ASESINATO?"<<endl;
	ss<<"¿EN QUE PARTE SE LLEVO A CABO? "<<endl;
	ss<<"PARA ENCONTRAR AL RESPONSABLE TU PUEDES PREGUNTAR 5 VECES"<<endl;
	ss<<"INFORMACION DE PERSONAJES"<<endl;
	ss<<"INFORMACION DE LUGARES"<<endl;
	ss<<"ARMA CON LA QUE SE LLEVO A CABO EL HOMICIDIO"<<endl;
	ss<<"PARA FINALIZAR TU DEBES DE DECIDIR QUIEN FUE EL CULPABLE"<<endl;
	ss<<"EN DONDE SUCEDIO"<<endl;
	ss<<"CON QUE OBJETO"<<endl;
	ss<<"Y QUIEN FUE EL ASESINO"<<endl;
	ss<<"SUERTE"<<endl;
	ss<<""<<endl;
}

void Mepri(){
	do{
		Op();	
		switch (colo){
			case 1:
				PregPer();
				ss<<"TURNO: "<<Cont1<<""<<endl;
				break;
				
			case 2:
				PregLug();
				ss<<"TURNO: "<<Cont1<<""<<endl;
				break;
				
			case 3:
				PregArm();
				ss<<"TURNO: "<<Cont1<<""<<endl;
				break;
				
			default:
			 	ss<<"OPCION NO VALIDA"<<endl;
			 	ss<<"TURNO PERDIDO"<<endl;
			  	break;
		}
		Cont1++;
	}while(Cont1<=5);
}

void Op(){
	ss<<"SELECCIONE UNA OPCION:"<<endl;
	ss<<"1) PREGUNTAR A PERSONAS"<<endl;
	ss<<"2) LUGAR"<<endl;
	ss<<"3) ARMA"<<endl;
	ss<<"POR DONDE LE GUSTARIA COMENZAR: "<<endl;
	aa>>colo;
	ss<<""<<endl;
}

void PregPer(){
 system("cls");
	ss<<"PERSONAJES"<<endl;
	ss<<"1) ESPOSA"<<endl;			  
	ss<<"2) ESPOSO"<<endl;			  
	ss<<"3) MAYORDOMO"<<endl;				 
	ss<<"4) PRIMO LEJANO"<<endl;  
	ss<<"5) HIJO"<<endl; 
	ss<<"ELIJA UNA PERSONA: "<<endl;
	aa>>men1;
	ss<<""<<endl;
	switch(men1){
		case 1:
			switch(Random){
				case 1: 
					ss<<"LA ESPOSA FUE LA ASESINADA"<<endl;
					break;
					
				case 2: 
					ss<<"LA ESPOSA ESTA NERVIOSA Y SE ENCUENTRA INTRANQUILA"<<endl;
					ss<<"NO SABE QUE DECIR CUANDO LA CUESTIONAN"<<endl;
					ss<<"TIENE PEQUEÑOS RASTROS DE SANGRE"<<endl;
					break;
					
				case 3: 
					ss<<"LA ESPOSA ESTABA EN UN VIAJE EN INGLATERRA"<<endl;
					break;
					
				case 4: 
					ss<<"LA ESPOSA ESTABA EN CASA DE SU AMIGA PATY"<<endl;
					break;
					
				case 5: 
					ss<<"LA ESPOSA SALIO AL CENTRO COMERCIAL CARITA FELIZ"<<endl;
					break;
			}
			ss<<"ELIGIO A LA ESPOSA:"<<endl;
			ss<<""<<endl;
			break;
			
		case 2: 
			switch(Random){
				case 1: 
					ss<<"EL ESPOSO ESTABA FUERA"<<endl;
					ss<<"LE PREGUNTAN Y MENCIONA QUE ESTUVO TRABAJANDO"<<endl;
					ss<<"SUS COMPAÑEROS DE TRABAJO CONFIRMAN SU CUARTADA"<<endl;
					break;
					
				case 2: 
					ss<<"EL ESPOSO FUE ASESINADO"<<endl;
					break;
					
				case 3: 
				 ss<<"EL ESPOSO ESTA NERVIOSO"<<endl;
					ss<<"CONTESTA FIRMEMENTE LAS PREGUNTAS SIN TITUBEAR"<<endl;
					ss<<"TIENE RASTROS DE SANGRE EN SUS ZAPATOS"<<endl;
					break;
					
				case 4: 
					ss<<"EL ESPOSO ESTABA DE VIAJE DE NEGOCIOS"<<endl;
					ss<<"SU GEFE Y COMPAÑERO DE VIAJE LO COMPRUEBA"<<endl;
					break;
					
				case 5: 
				 ss<<"EL ESPOSO ESTUVO TRABAJANDO HASTA TARDE"<<endl;
				 ss<<"LAS CAMARAS LO CONFIRMAN"<<endl;
					break;
			}
			ss<<"ELIGIO A EL ESPOSO:"<<endl;
			ss<<""<<endl;
			break;
			
		case 3:
			switch(Random){
				case 1: 
					ss<<"EL MAYORDOMO ESTA FUERA DE SI Y SOLO DICE QUE NO LO HIZO"<<endl;
					ss<<"TIENE LAS MANOS OLIENDO A CLORO"<<endl;
					break;
					
				case 2: 
					ss<<"EL MAYORDOMO HABIA SALIDO POR LOS VIVERES AL SUPERMERCADO"<<endl;
					break;
					
				case 3: 
					ss<<"ESTABA EN SU DIA DE DESCANSO "<<endl;
					ss<<"POR LO QUE NO ESTUVO EN LA MANSION "<<endl;
					break;
					
				case 4: 
				 ss<<"EL MAYORDOMO ES EL ASESINADO"<<endl;
					break;
					
				case 5: 
				 ss<<"ESTABA LIMPIANDO EL SOTANO POR ORDENES DIRECTAS"<<endl;
					break;
			}
			ss<<"ELIGIO AL MAYORDOMO:"<<endl;
			ss<<""<<endl;
			break;
			
		case 4: 
			switch(Random){
				case 1: 
					ss<<"PRIMO ESTABA EN CASA DE SU NOVIA "<<endl;
					ss<<"ELLA LO CONFIRMA "<<endl;
					break;
					
				case 2: 
					ss<<"EL PRIMO ESTABA TOMANDO SUS CLASES EN LA UNIVERSIDAD"<<endl;
					break;
					
				case 3: 
				 ss<<"EL PRIMO ESTABA EN EL AUTOLAVADO CUANDO SUCEDIO TODO"<<endl;
					break;
					
				case 4: 
					ss<<"EL PRIMO ESTA NERVIOSO Y NO SABE QUE DECIR"<<endl;
					ss<<"TIENE UNA ACCITUD SOSPECHOSA"<<endl;
					break;
					
				case 5: 
				 ss<<"EL PRIMO ES ASESINADO"<<endl;
					break;
			}
			ss<<"ELIGIO AL PRIMO:"<<endl;
			ss<<""<<endl;
			break;
			
		case 5:
			switch(Random){
				case 1:
					ss<<"ESTUVO DE VIAJE EN FRANCIA"<<endl;
					ss<<"SE NOTA CONSTERNADO"<<endl;
					break;
					
				case 2: 
					ss<<"ESTUVO EN EL TALLER REPARANDO SU CARRO"<<endl;
					ss<<"LOS MECANICOS LO CONFIRMAN"<<endl;
					break;
					
				case 3: 
					ss<<"ES EL ASESINADO"<<endl;
					break;
					
				case 4: 
					ss<<"SE ENCONTRABA EN LA ESCUELA"<<endl;
					ss<<"SUS MAESTROS LO CONFIRMAN"<<endl;
					break;
					
				case 5: 
					ss<<"ESTA NERVIOSO Y TIENE SANGRE EN SU CHAMARRA"<<endl;
					break;
			}
			ss<<"ELIGIO AL HIJO:"<<endl;
			ss<<""<<endl;
			break;
			
		default:
			 	ss<<"Carnal esa opcion no existe, usa una de las que hay"<<endl;
			 	ss<<"Perdiste un turno lo siento, ten mas cuidado"<<endl;
			 	ss<<""<<endl;
			  	break;
	}
}

void PregLug(){
 system("cls");
	ss<<"LUGARES"<<endl;
	ss<<"1) RECAMARA"<<endl;             
	ss<<"2) GARAJE"<<endl;      
	ss<<"3) SALA"<<endl;         
	ss<<"4) COCINA"<<endl;                 
	ss<<"5) BAÑO"<<endl;                  
	ss<<"QUE LUGAR DESEA INDAGAR: "<<endl;
	aa>>men2;
	switch(men2){
		case 1:
			switch(Random){
				case 1: 
					ss<<"LA RECAMARA ES UN CAOS HAY SANGRE POR TODOS LADOS"<<endl;
					ss<<"AQUI PASO ALGO..."<<endl;					
					break;
					
				case 2: 
					ss<<"LA RECAMRA ESTA LIMPIA Y NO TIENE ANOMALIAS"<<endl;
					break;
					
				case 3: 
					ss<<"LA RECAMRA ESTA LIMPIA Y NO TIENE ANOMALIAS"<<endl;
					break;
					
				case 4: 
				 ss<<"LA RECAMRA ESTA LIMPIA Y NO TIENE ANOMALIAS"<<endl;
					break;
					
				case 5: 
					ss<<"LA RECAMRA ESTA LIMPIA Y NO TIENE ANOMALIAS"<<endl;
			}
			ss<<"ELIGIO LA RECAMRA:"<<endl;
			ss<<""<<endl;
			break;
			
		case 2: 
			switch(Random){
				case 1: 
					ss<<"EL GARAJE ESTA LIMPIO  "<<endl;
					ss<<"NO PRESENTA PROBLEMA ALGUNO"<<endl;
					break;
					
				case 2: 
					ss<<"EL GARAJE HUELE MUCHO A CLORO "<<endl;
					ss<<"HAY ALGO EXTRAÑO AQUI"<<endl;
					break;
					
				case 3: 
					ss<<"EL GARAJE ESTA LIMPIO  "<<endl;
					ss<<"NO PRESENTA PROBLEMA ALGUNO"<<endl;
					break;
					
				case 4: 
					ss<<"EL GARAJE ESTA LIMPIO  "<<endl;
					ss<<"NO PRESENTA PROBLEMA ALGUNO"<<endl;
					break;
					
				case 5: 
					ss<<"EL GARAJE ESTA LIMPIO  "<<endl;
					ss<<"NO PRESENTA PROBLEMA ALGUNO"<<endl;
					break;
			}
			ss<<"ELIGIO EL GARAJE:"<<endl;
			ss<<""<<endl;
			break;
			
		case 3:
			switch(Random){
				case 1: 
					ss<<"LA SALA ESTA EN ORDEN"<<endl;
					ss<<"NO PRESENTA PROBLEMA ALGUNO"<<endl;
					break;
					
				case 2: 
					ss<<"LA SALA ESTA EN ORDEN"<<endl;
					ss<<"NO PRESENTA PROBLEMA ALGUNO"<<endl;
					break;
					
				case 3: 
					ss<<"LA SALA TIENE MANCHAS DE SANGRE ABAJO DE LOS SILLONES"<<endl;
					ss<<"SE TIENEN SOSPECHAS DE QUE ALGO SUCEDIO"<<endl;
					break;
					
				case 4: 
					ss<<"LA SALA ESTA EN ORDEN"<<endl;
					ss<<"NO PRESENTA PROBLEMA ALGUNO"<<endl; 
					break;
					
				case 5: 
					ss<<"LA SALA ESTA EN ORDEN"<<endl;
					ss<<"NO PRESENTA PROBLEMA ALGUNO"<<endl;
					break;
			}
			ss<<"Elegiste El Barrio Cholo"<<endl;
			ss<<""<<endl;
			break;
			
		case 4: 
			switch(Random){
				case 1: 
					ss<<"LA CONCINA ESTA EN ORDEN Y NO TIENE PROBLEMAS"<<endl;
					break;
					
				case 2: 
					ss<<"LA CONCINA ESTA EN ORDEN Y NO TIENE PROBLEMAS"<<endl;
					break;
					
				case 3: 
					ss<<"LA CONCINA ESTA EN ORDEN Y NO TIENE PROBLEMAS"<<endl;
					break;
					
				case 4: 
					ss<<"SE ENONTRO UNA OLLA LLENA DE SALGRE"<<endl;
					ss<<"NO SE SABE SI ES DE HUMANO O DE VACA"<<endl;
					break;
					
				case 5: 
					ss<<"LA CONCINA ESTA EN ORDEN Y NO TIENE PROBLEMAS"<<endl;
					break;
			}
			ss<<"ELIGIO LA COCINA:"<<endl;
			ss<<""<<endl;
			break;
			
		case 5:
			switch(Random){
				case 1: 
					ss<<"EL BAÑO ESTA LIMPIO"<<endl;
					ss<<"HUELE A FLORES"<<endl;
					break;
					
				case 2: 
					ss<<"EL BAÑO ESTA LIMPIO"<<endl;
					ss<<"HUELE A FLORES"<<endl;
					break;
					
				case 3: 
					ss<<"EL BAÑO ESTA LIMPIO"<<endl;
					ss<<"HUELE A FLORES"<<endl;
					break;
					
				case 4: 
					ss<<"EL BAÑO ESTA LIMPIO"<<endl;
					ss<<"HUELE A FLORES"<<endl;
					break;
					
				case 5: 
					ss<<"EL BAÑO ES UN CAOS LA TINA ESTA LLENA DE SANGRE"<<endl;
					break;
			}
			ss<<"ELIGIO EL BAÑO:"<<endl;
			break;
			
		default:
			ss<<"ESTA OPCION NO ES VALIDA"<<endl;
			ss<<"PERDIO SU TURNO"<<endl;
			ss<<""<<endl;
			break;
	}
}

void PregArm(){
	system("cls");
	ss<<"ARMAS"<<endl;
	ss<<"1) PICA HIELO"<<endl;   
	ss<<"2) PISTOLA"<<endl;																		
	ss<<"3) CUCHILLO"<<endl;											
	ss<<"4) BATE DE BEISBOL"<<endl;                              
	ss<<"5) LLAVE STILSON"<<endl;																					
	ss<<"ELIJA UN ARMA:"<<endl;
	aa>>men3;
	switch(men3){
		case 1:
			switch(Random){
				case 1: 
					ss<<"SE ENCONTRO EL PICA-HIELO EN LA BASURA"<<endl;
					ss<<"ESO NO ES UNA BUENA SEÑAL"<<endl;
					break;
					
				case 2: 
					ss<<"EL PICA-HIELO ESTA EN SU LUGAR Y NO PRESENTA PROBLEMAS"<<endl;
					ss<<"NO TIENE SEÑALES DE USO"<<endl;
					break;
					
				case 3: 
					ss<<"EL PICA-HIELO ESTA EN SU LUGAR Y NO PRESENTA PROBLEMAS"<<endl;
					ss<<"NO TIENE SEÑALES DE USO"<<endl;
					break;
					
				case 4: 
					ss<<"EL PICA-HIELO ESTA EN SU LUGAR Y NO PRESENTA PROBLEMAS"<<endl;
					ss<<"NO TIENE SEÑALES DE USO"<<endl;
					break;
					
				case 5: 
					ss<<"EL PICA-HIELO ESTA EN SU LUGAR Y NO PRESENTA PROBLEMAS"<<endl;
					ss<<"NO TIENE SEÑALES DE USO"<<endl;
					break;
			}
			ss<<"ELIGIO EL PICA-HIELO:"<<endl;
			ss<<""<<endl;
			break;
			
		case 2: 
			switch(Random){
				case 1: 
					ss<<"LA PISTOLA ESTA GUARDADA EN SU LUGAR Y NO HA SIDO USADA"<<endl;
					break;
					
				case 2: 
					ss<<"LA PISTOLA SE ENCONTRO FUERA DE SU LUGAR"<<endl;
					ss<<"LE FALTAN 2 BALAS"<<endl;
					break;
					
				case 3: 
					ss<<"LA PISTOLA ESTA GUARDADA EN SU LUGAR Y NO HA SIDO USADA"<<endl;
					break;
					
				case 4: 
					ss<<"LA PISTOLA ESTA GUARDADA EN SU LUGAR Y NO HA SIDO USADA"<<endl;
					break;
					
				case 5: 
					ss<<"LA PISTOLA ESTA GUARDADA EN SU LUGAR Y NO HA SIDO USADA"<<endl;
					break;
			}
			ss<<"ELIGIO LA PISTOLA:"<<endl;
			ss<<""<<endl;
			break;
			
		case 3:
			switch(Random){
				case 1:
					ss<<"EL CUCHILLO ESTA EN LA COCINA"<<endl;
					ss<<"NO TIENE RASTROS DE USO"<<endl;
					break;
					
				case 2: 
					ss<<"EL CUCHILLO ESTA EN LA COCINA"<<endl;
					ss<<"NO TIENE RASTROS DE USO"<<endl;
					break;
					
				case 3: 
					ss<<"EL CUCHILLO ESTA EN EL JARDIN"<<endl;
					ss<<"PARECE QUE TIENE UN LIQUIDO ROJO EXTRAÑO"<<endl;
					break;
					
				case 4: 
					ss<<"EL CUCHILLO ESTA EN LA COCINA"<<endl;
					ss<<"NO TIENE RASTROS DE USO"<<endl;
					break;
					
				case 5: 
					ss<<"EL CUCHILLO ESTA EN LA COCINA"<<endl;
					ss<<"NO TIENE RASTROS DE USO"<<endl;
					break;
			}
			ss<<"ELIGIO EL CUCHILLO:"<<endl;
			ss<<""<<endl;
			break;
			
		case 4: 
			switch(Random){
				case 1: 
					ss<<"EL BATE ESTA COLGADO EN LA SALA"<<endl;
					ss<<"SE ENCUENTRA EMPOLVADO "<<endl;
					ss<<""<<endl;
					break;
					
				case 2: 
					ss<<"EL BATE ESTA COLGADO EN LA SALA"<<endl;
					ss<<"SE ENCUENTRA EMPOLVADO "<<endl;
					break;
					
				case 3: 
					ss<<"EL BATE ESTA COLGADO EN LA SALA"<<endl;
					ss<<"SE ENCUENTRA EMPOLVADO "<<endl;
					break;
					
				case 4: 
					ss<<"EL BATE ESTA EN EL PISO Y ESTA BORRADO EL AUTOGRAFO"<<endl;
					break;
					
				case 5: 
					ss<<"EL BATE ESTA COLGADO EN LA SALA"<<endl;
					ss<<"SE ENCUENTRA EMPOLVADO "<<endl;
					break;
			}
			ss<<"ELIGIO EL BATE DE BEISBOL:"<<endl;
			break;
			
		case 5:
			switch(Random){
				case 1: 
					ss<<"LA LLAVE ESTA EN SU LUGAR"<<endl;
					ss<<"NO PARECE QUE HAYA SIDO USADA"<<endl;
					break;
					
				case 2: 
					ss<<"LA LLAVE ESTA EN SU LUGAR"<<endl;
					ss<<"NO PARECE QUE HAYA SIDO USADA"<<endl;
					break;
					
				case 3: 
					ss<<"LA LLAVE ESTA EN SU LUGAR"<<endl;
					ss<<"NO PARECE QUE HAYA SIDO USADA"<<endl;
					break;
					
				case 4: 
					ss<<"LA LLAVE ESTA EN SU LUGAR"<<endl;
					ss<<"NO PARECE QUE HAYA SIDO USADA"<<endl;
					break;
					
				case 5: 
					ss<<"LA LLAVE ESTA TIRADA Y ESTA LLENA DE SANGRE"<<endl;				
					break;
			}
			ss<<"ELIGIO LA LLAVE STILSON:"<<endl;
			break;
			
		default:
			ss<<"OPCION INCORRECTA"<<endl;
			ss<<"USTED PERDIO UN TURNO"<<endl;
			ss<<""<<endl;
			break;
	}
}

void ESONO(){
	Cont1=1;
	system("pause");
	system("cls");
	ss<<"¿LLEGUE A SUS CONCLUSIONES DEL JUEGO?"<<endl;
	ss<<"¿DONDE SE COMETIO EL ASESINATO?"<<endl;
	ss<<"QUIEN LO REALIZO?"<<endl;
	ss<<"¿CON QUE SE REALIZO EL ASESINATO?"<<endl;
	
	ss<<"LOS SOSPECHOSOS SON:"<<endl;
	ss<<"1) LA ESPOSA"<<endl;				 
	ss<<"2) El ESPOSO"<<endl;			 
	ss<<"3) El MAYORDOMO"<<endl;				
	ss<<"4) EL PRIMO LEJANO"<<endl;  
	ss<<"5) EL HIJO"<<endl; 
	
	ss<<"LOS POSIBLES LUGARES SON:"<<endl;
	ss<<"1) RECAMARA"<<endl;               
	ss<<"2) GARAJE"<<endl;      
	ss<<"3) SALA"<<endl;         
	ss<<"4) COCINA"<<endl;                 
	ss<<"5) BAÑO"<<endl;             
	
	ss<<"LAS POSIBLES ARMAS SON:"<<endl;
	ss<<"1) PICA-HIELO"<<endl;   
	ss<<"2) PISTOLA"<<endl;																		
	ss<<"3) CUCHILLO"<<endl;												
	ss<<"4) BATE DE BEISBOL"<<endl;                              
	ss<<"5) LLAVE STILSON"<<endl;																				
	
	ss<<""<<endl;
	
	switch (Random){
		case 1:
			ss<<"¿QUIEN ES EL ASESINO? ";
	  		aa>>ES;
	  if(ES==3){
	  		ss<<"PERSONA CORRECTA"<<endl;
			}
			else{
				ss<<"PERSONA INCORRECTA"<<endl;
			}
			ss<<""<<endl;
			
	  ss<<"¿DONDE SUCEDIO EL ASESINATO? ";
	  aa>>ES1;
	  if(ES1==2){
	  	ss<<"EL LUGAR ES EL CORRECTO"<<endl;
			}
			else{
				ss<<"LUGAR INCORRECTO"<<endl;
			}
	  ss<<""<<endl;
	  
	  ss<<"¿CUAL FUE EL ARMA DE ASESINATO?: ";
	  aa>>ES2;
			if(ES2==4){
	  	ss<<"ARMA CORRECTA"<<endl;
			}
			else{
				ss<<"ARMA INCORRECTA"<<endl;
			}
			ss<<""<<endl;
			
			ss<<"TUS RESULTADOS SON:  ";
			if(ES==3 && ES1==2 && ES2==4){
				ss<<"CORRECTOS"<<endl;
				ss<<"FELICITACIONES LOGRO DESCUBRIR AL ASESINO"<<endl;
			}
			else{
				ss<<"INCORRECTO"<<endl;
				ss<<"SE EQUIVOCO"<<endl;
				ss<<"EL ASESINO ESTA SUELTO Y EL PROXIMO PUEDE SER USTED"<<endl;
			}
			ss<<""<<endl;
			break;
			
		case 2:
			ss<<"¿QUIEN ES EL ASESINO? ";
	  aa>>ES;
	  if(ES==1){
	  	ss<<"PERSONA CORRECTA"<<endl;
			}
			else{
				ss<<"PERSONA INCORRECTA"<<endl;
			}
			ss<<""<<endl;
			
	  ss<<"¿DONDE SUCEDIO EL ASESINATO?";
	  aa>>ES1;
	  if(ES1==4){
	  	ss<<"EL LUGAR ES EL CORRECTO"<<endl;
			}
			else{
				ss<<"LUGAR INCORRECTO"<<endl;
			}
			ss<<""<<endl;
	  
	  ss<<"¿CUAL FUE EL ARMA DE ASESINATO?: ";
	  aa>>ES2;
			if(ES2==3){
	  	ss<<"ARMA CORRECTA"<<endl;
			}
			else{
				ss<<"ARMA INCORRECTA"<<endl;
			}
			ss<<""<<endl;
			
			ss<<"TUS RESULTADOS SON: ";
			if(ES==1 && ES1==4 && ES2==3){
				ss<<"CORRECTOS"<<endl;
				ss<<"FELICITACIONES LOGRO DESCUBRIR AL ASESINO"<<endl;
			}
			else{
				ss<<"INCORRECTO"<<endl;
				ss<<"SE EQUIVOCO"<<endl;
				ss<<"EL ASESINO ESTA SUELTO Y EL PROXIMO PUEDE SER USTED"<<endl;
			}
			ss<<""<<endl;
			break;
			
		case 3:
			ss<<"¿QUIEN ES EL ASESINO? ";
	  aa>>ES;
	  if(ES==2){
	  	ss<<"PERSONA CORRECTA"<<endl;
			}
			else{
				ss<<"PERSONA INCORRECTA"<<endl;
			}
			ss<<""<<endl;
			
	  ss<<"¿DONDE SUCEDIO EL ASESINATO? ";
	  aa>>ES1;
	  if(ES1==3){
	  	ss<<"EL LUGAR ES EL CORRECTO"<<endl;
			}
			else{
				ss<<"LUGAR INCORRECTO"<<endl;
			}
	  ss<<""<<endl;
	  
	  ss<<"¿CUAL FUE EL ARMA DE ASESINATO? ";
	  aa>>ES2;
			if(ES2==1){
	  	ss<<"ARMA CORRECTA"<<endl;
			}
			else{
				ss<<"ARMA INCORRECTA"<<endl;
			}
			ss<<""<<endl;
			
			ss<<"TUS RESULTADOS SON: ";
			if(ES==2 && ES1==3 && ES2==1){
				ss<<"CORRECTOS"<<endl;
				ss<<"FELICITACIONES LOGRO DESCUBRIR AL ASESINO"<<endl;
			}
			else{
				ss<<"INCORRECTO"<<endl;
				ss<<"SE EQUIVOCO"<<endl;
				ss<<"EL ASESINO ESTA SUELTO Y EL PROXIMO PUEDE SER USTED"<<endl;
			}
			ss<<""<<endl;
			break;
			
		case 4:
			ss<<"¿QUIEN ES EL ASESINO?";
	  aa>>ES;
	  if(ES==4){
	  	ss<<"PERSONA CORRECTA"<<endl;
			}
			else{
				ss<<"PERSONA INCORRECTA"<<endl;
			}
			ss<<""<<endl;
			
	  ss<<"¿DONDE SUCEDIO EL ASESINATO? ";
	  aa>>ES1;
	  if(ES1==5){
	  	ss<<"EL LUGAR ES EL CORRECTO"<<endl;
			}
			else{
				ss<<"LUGAR INCORRECTO"<<endl;
			}
	  ss<<""<<endl;
	  
	  ss<<"¿CUAL FUE EL ARMA DE ASESINATO? ";
	  aa>>ES2;
			if(ES2==2){
	  	ss<<"ARMA CORRECTA"<<endl;
			}
			else{
				ss<<"ARMA INCORRECTA"<<endl;
			}
			ss<<""<<endl;
			
			ss<<"TUS RESULTADOS SON: ";
			if(ES==4 && ES1==5 && ES2==2){
				ss<<"CORRECTOS"<<endl;
				ss<<"FELICITACIONES LOGRO DESCUBRIR AL ASESINO"<<endl;
			}
			else{
				ss<<"INCORRECTO"<<endl;
				ss<<"SE EQUIVOCO"<<endl;
				ss<<"EL ASESINO ESTA SUELTO Y EL PROXIMO PUEDE SER USTED"<<endl;
			}
			ss<<""<<endl;
			break;
			
		case 5:
			ss<<"¿QUIEN ES EL ASESINO? ";
	  aa>>ES;
	  if(ES==5){
	  	ss<<"PERSONA CORRECTA"<<endl;
			}
			else{
				ss<<"PERSONA INCORRECTA"<<endl;
			}
			ss<<""<<endl;	  

	  ss<<"¿DONDE SUCEDIO EL ASESINATO? ";
	  aa>>ES1;
	  if(ES1==1){
	  	ss<<"EL LUGAR ES EL CORRECTO"<<endl;
			}
			else{
				ss<<"LUGAR INCORRECTO"<<endl;
			}
	  		ss<<""<<endl;
	  
			ss<<"¿CUAL FUE EL ARMA DE ASESINATO? ";
	  		aa>>ES2;
			if(ES2==5){
	  	ss<<"ARMA CORRECTA"<<endl;
			}
			else{
				ss<<"ARMA INCORRECTA"<<endl;
			}
			ss<<""<<endl;
			
			ss<<"TUS RESULTADOS SON: ";
			if(ES==5 && ES1==1 && ES2==5){
				ss<<"CORRECTOS"<<endl;
				ss<<"FELICITACIONES LOGRO DESCUBRIR AL ASESINO"<<endl;
			}
			else{
				ss<<"INCORRECTO"<<endl;
				ss<<"SE EQUIVOCO"<<endl;
				ss<<"EL ASESINO ESTA SUELTO Y EL PROXIMO PUEDE SER USTED"<<endl;
			}
			ss<<""<<endl;
			break;
	}
}

void ContJ(){
	ss<<"¿QUIERES VOLVER A JUGAR SI(1) NO(0)?"<<endl;
	aa>>Conti;
	Random=1+rand()%(5);
	system("cls");
}

