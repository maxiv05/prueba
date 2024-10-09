Algoritmo Ejercicio4102
	Dimension M[10,10]
	
	Para f<-1 Hasta 10 Hacer
		Para c<- 1 Hasta 10 Hacer
			Leer M[f,c];
		FinPara
	FinPara
	
	Dimension V[50]
	N<-0
	Para f<-1 Hasta 9 Hacer
		Para c<- f+1 Hasta 10 Hacer
			N<-N+1
			V[N]<- M[f,c];
		FinPara
	FinPara
	
	Para i<-1 Hasta N Hacer
		Escribir V[i]
	FinPara
	
FinAlgoritmo
