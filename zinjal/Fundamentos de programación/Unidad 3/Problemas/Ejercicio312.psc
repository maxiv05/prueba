Algoritmo Ejercicio312
	cantaprobados<- 0;
	cant9<- 0;
	cantalumnos<- 0;
	Escribir "Introduzca la cantidad de alumnos aprobados"; 
	Leer cantaprobados;
	Si cantaprobados=0 Entonces
		Escribir "No aprobó nadie";
	SiNo
		Repetir
			Escribir "Introduzca la nota";
			Leer nota;
			cantalumnos<- cantalumnos+1;
			Si nota>=9 Entonces
				cant9<-cant9+1
			FinSi
		Hasta Que cantaprobados=cantalumnos;
		prom<- 100*cant9/cantaprobados;
		Escribir "El promedio de estudiantes es ", prom; 
	FinSi
FinAlgoritmo
