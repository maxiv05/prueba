Algoritmo Ejercicio42
	//Parte A; 
	Dimension A[20];
	Para i<-1 Hasta 20 Hacer
		Leer A[i];
	FinPara
	Suma<-0 
	Para i<-0 hasta 20 Hacer
		suma<- suma+ A[i];
	FinPara
	Prom<- suma/20;
	cantidad<- 0
	Para i<-0 Hasta 20 Hacer
		Si A[i] > prom Entonces
			Cantidad<- cantidad +1;
		FinSi
	FinPara
FinAlgoritmo
