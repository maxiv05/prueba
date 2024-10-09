Algoritmo ejercicio48
	Dimension A[2,3]
	Dimension B[2,3]
	Dimension Suma[2,3]
	Dimension Promedio[2,3]
	
	Escribir "Rellene la matriz A"
	Para f<-1 Hasta 2 Hacer
		Para c<-1 Hasta 3 Hacer
			Leer A[f,c]
		FinPara
	FinPara
	Escribir "Rellene la matriz B:"
	Para f<-1 Hasta 2 Hacer
		Para c<-1 Hasta 3 Hacer
			Leer B[f,c]
		FinPara
	FinPara
	//Suma
	Para f<-1 Hasta 2 Hacer
		Para c<-1 Hasta 3 Hacer
			Suma[f,c]<- A[f,c]+B[f,c]
		FinPara
	FinPara
	//Promedio 
	Para f<-1 Hasta 2 Hacer
		Para c<-1 Hasta 3 Hacer
			Promedio[f,c]<- (A[f,c] + B[f,c])/2
		FinPara
	FinPara
	
	Escribir "La suma de las dos matrices da: " 
	Para f<-1 Hasta 2 Hacer
		Para c<-1 Hasta 3 Hacer
			Escribir Suma[f,c], " " Sin Saltar 
		FinPara
		Escribir " "
	FinPara
	
	Escribir " "
	Escribir "El promedio de las dos matrices da: "
	Para f<-1 Hasta 2 Hacer
		Para c<-1 Hasta 3 Hacer
			Escribir  Promedio[f,c], " " Sin Saltar 
		FinPara
		Escribir " "
	FinPara
FinAlgoritmo
