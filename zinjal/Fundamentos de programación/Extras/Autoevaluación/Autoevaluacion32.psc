//Escriba un programa que permita cargar los 50 datos de una matriz de 10x5, por fila. El programa debe luego
//informar primero los datos de las 3ra columna. Luego, los de la 4ta fila.

Algoritmo Autoevaluacion32
	
	Dimension A[10,5];
	
	Para i<-1 Hasta 10 Hacer
		Para j<-1 Hasta 5 Hacer
			Leer A[i,j];
		FinPara
	FinPara
	
	Para i<-1 Hasta 10 Hacer
		Para j<-1 Hasta 5 Hacer
			Escribir "Los elementos de la columna 3" A[i,3];
		FinPara
	FinPara
	
	
FinAlgoritmo
