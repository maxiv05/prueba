Algoritmo Ejercicio43a
	Dimension A[60];
	Para i<-1 Hasta 60 Hacer
		Leer A[i];
	FinPara
	contador<- 0
	Para p<- 1 Hasta 60 Hacer
		Si A[p]="Garcia" Entonces
			Escribir "Hay un Garcia en la posici� ", p;
			contador<- contador+1;
		FinSi
	FinPara
	Si contador=0 Entonces
		Escribir "No hay ning�n Garcia";
	FinSi
FinAlgoritmo
