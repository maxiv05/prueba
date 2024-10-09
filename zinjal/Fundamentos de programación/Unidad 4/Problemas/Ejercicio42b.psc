Algoritmo Ejercicio42
	//Parte B; 
	Dimension A[100000];
	N<-0
	Leer X
	Mientras x<> 0 Hacer
		N<- N+1;
		A[N]<- X;
		Leer X
	FinMientras
	Suma<-0 
	Para i<-0 hasta N Hacer
		suma<- suma+ A[i];
	FinPara
	Prom<- suma/N;
	cantidad<- 0
	Para i<-0 Hasta N Hacer
		Si A[i] > prom Entonces
			Cantidad<- cantidad +1;
		FinSi
	FinPara
	Escribir "El promedio es ", prom;
	Escribir "La cantidad mayor al promedio es ", cantidad;
FinAlgoritmo