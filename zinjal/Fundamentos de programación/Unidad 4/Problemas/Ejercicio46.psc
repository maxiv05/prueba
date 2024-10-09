Algoritmo Ejercicio46
	Leer N
	ContAp<-0
	ContNoAp<-0
	Dimension Ap[N]
	Dimension NoAp[N]
	
	Para i<- 1 hasta N Hacer
		Leer Nombre, Nota; 
		Si nota>= 7 Entonces
			Ap[ContAp]<- Nombre
			ContAp<- ContAp+1;
		SiNo
			NoAp[ContNoAp]<- Nombre
			ContNoAp<- ContNoAp+1
		FinSi
	FinPara
	
	Escribir "Aprobados: "
	Para i<-1 Hasta ContAp Hacer
		Escribir Ap[i];
	FinPara
	
	Escribir "  "
	
	Escribir "No aprobados: "
	Para i<-1 Hasta ContNoAp Hacer
		Escribir NoAp[i];
	FinPara
	
FinAlgoritmo
