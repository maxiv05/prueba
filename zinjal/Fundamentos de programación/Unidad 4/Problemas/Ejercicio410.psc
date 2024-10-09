Algoritmo Ejercicio410
	Dimension A[10,4];
	Dimension P[10];
	Para c<-1 Hasta 4 Hacer //Primero el de columna pq se leen las sucursales
		Para f<-1 Hasta 10 Hacer
			Leer A[f,c];
		FinPara
	FinPara
	
	Escribir "Introduzca la matriz de precios";
	Para f<-1 Hasta 10 Hacer
		Leer P[f];
	FinPara
	
	Dimension suma[4]
	Para s<-1 Hasta 4 Hacer
		suma[s]<- 0 
		Para f<-1 Hasta 10 Hacer
			suma[s]<- suma[s] + A[f,s] * P[f]
		FinPara
		Escribir suma[s]
	FinPara
	
	TotalEmpresa<-0 
	Para s<-1 Hasta 4 Hacer
		TotalEmpresa<- TotalEmpresa+suma[s];
	FinPara
	Escribir TotalEmpresa;
	
	Mayor<-0
	Para s<-1 Hasta 4 Hacer
		Si suma[s] > Mayor Entonces
			Mayor<- suma [s]
			SucMayor<- s
		FinSi
	FinPara
	Escribir SucMayor
	
FinAlgoritmo
