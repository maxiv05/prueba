Algoritmo Ejercicio44
	Leer N
	Dimension A[N];
	Para i<- 1 Hasta N Hacer
		Leer A[i];
	FinPara
	
	pos<- 1
	Mientras pos<= N y A[pos] <> "Garcia" Hacer
		pos<-pos+1
	FinMientras
	
	Si pos<=N Entonces
		Para i<-pos+1 hasta N Hacer
			A[i-1]<- A[i]
		FinPara
		N<-N-1
	SiNo
		Escribir "No estaba";
	FinSi
	Para i<-1 Hasta N Hacer
		Escribir A[i]
	FinPara
FinAlgoritmo
