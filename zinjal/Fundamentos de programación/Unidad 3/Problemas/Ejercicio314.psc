Algoritmo Ejercicio14
	contador<- 0
	factorial<-1
	Escribir "Ingrese un número";
	Leer num;
	Repetir
		contador<- contador+1
		factorial<- factorial*contador
	Hasta Que contador=num
	Escribir "El factorial de ", num, " es ", factorial;
FinAlgoritmo
