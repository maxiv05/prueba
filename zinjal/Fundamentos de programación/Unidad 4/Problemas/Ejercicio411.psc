Algoritmo Ejercicio411
	Dimension M[3,6];
	Para a<- 1 Hasta 6 Hacer
		Para t<-1 Hasta 3 Hacer
			M[t,a]<- 0
		FinPara
	FinPara
	
	Escribir "Ingrese el número de arquitecto";
	Leer a;
	Mientras a<>0 Hacer
		Escribir "Ingrese el tipo de trabajo";
		Leer t;
		Escribir "Ingrese la cantidad de m2";
		Leer m2;
		M[t,a]<- M[t,a] + m2
		Escribir "Ingrese el número de arquitecto";
		Leer a
	FinMientras
	
	Para a<- 1 Hasta 6 Hacer
		Escribir "El arquitecto " , a, " construyó "
		Para t<-1 Hasta 3 Hacer
			Escribir " ", M[t,a], " m2 del tipo ", t;
		FinPara
	FinPara
	
	Total<-0
	Para a<-1 Hasta 6 Hacer
		Para t<-1 Hasta 3 Hacer
			Total<- Total+ M[t,a];
		FinPara
	FinPara
	Escribir "El total es " , Total;
	
FinAlgoritmo
