Algoritmo Ejercicio49
	Dimension A[10,4]
	Para c<-1 Hasta 4 Hacer //Primero el de columna pq se leen las sucursales
		Para f<-1 Hasta 10 Hacer
			Leer A[f,c]
		FinPara
	FinPara
	
	suma<-0
	Para f<-1 hasta 10 Hacer
		suma<-0
		Para c<-1 Hasta 4 Hacer
			suma<- suma+ A[f,c]
		FinPara
		Escribir suma
	FinPara
	
	suma<-0
	Para f<- 1 Hasta 10 Hacer
		suma<- suma + A[f,3]
	FinPara
	Escribir "La cantidad de articulos vendidos de la sucursal 3 es ", suma
	
	Escribir "La cantidad vendida en la sucursal 1 articulo 6 es ", A[6,1]; 
	
FinAlgoritmo
