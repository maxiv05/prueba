Algoritmo Ejercicio4101
	Dimension V[7]
	Para i<-1 Hasta 6 Hacer
		Leer V[i]
	FinPara
	
	Escribir "Ingrese el nuevo apellido"
	Leer ape
	//Encontras el lugar
	pos<-1
	Mientras pos<=6 y Ape>V[pos] Hacer
		pos<- pos+1
	FinMientras
	
	//Moves la posición para hacer ese lugar
	Para i<- 6 Hasta 1 Con Paso -1 Hacer
		V[i+1]<- V[i]
	FinPara
	V[pos]<- Ape
	
	//Mostrar el vector
	Para i<-1 Hasta 7 Hacer
		Escribir V[i];
	FinPara
	
FinAlgoritmo
