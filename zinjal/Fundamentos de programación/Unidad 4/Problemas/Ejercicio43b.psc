Algoritmo Ejercicio43b
	Dimension A[60];
	Para i<- 1 Hasta 60 Hacer
		Leer A[i];
	FinPara
	
	p<-1 
	Mientras P<= 60 Y A[p] <> "Garcia" Hacer
		p<-p+1;
	FinMientras
	
	Si p<=60 Entonces
		Escribir "El primer Garcia est� en la posici�n ", p
	SiNo
		Escribir "No hay ning�n Garcia";
	FinSi
	
FinAlgoritmo
