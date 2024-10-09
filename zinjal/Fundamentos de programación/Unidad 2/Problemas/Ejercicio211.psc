Algoritmo Ejercicio211
	Escribir "Introducir su fecha de cumpleaños toda junta";
	Leer fecha;
	ano<- trunc (fecha/10000);
	pri<- fecha%10000;
	mes<- trunc (pri/100)
	seg<- fecha%100;
	dia<- trunc (seg);
	Escribir "Su fecha es ", ano;
	Escribir "Su mes es ", mes; 
	Escribir "Su dia es " , dia; 
FinAlgoritmo
