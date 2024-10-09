Algoritmo Ejercicio45
	Leer N
	Dimension A[N+1]
	Para i<-1 Hasta N Hacer
		Leer A[i];
	FinPara
	
	//Insertar
	Leer Pos, Ape;
	Para i<- N Hasta pos Con Paso -1 Hacer
		A[i+1]<- A[i];
	FinPara
	A[pos]<- Ape
	N<-N+1
	
	Para i<-1 Hasta N Hacer
		Escribir A[i]
	FinPara
FinAlgoritmo
