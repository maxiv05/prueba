Algoritmo Ejercicio39
	Notac1<- 0
	Notac2<- 0
	Notac3<- 0
	Notac4<- 0
	Notac5<- 0
	alumnos<- 0
	Mientras alumnos<= 5*24 Hacer
		Escribir "Ingresa la comisión" ;
		Leer comision;
		Escribir "Introduzca la nota";
		Leer nota; 
		alumnos<- alumnos+1
		Segun comision Hacer
			1: notac1<- notac1+1 
			2: notac2<- notac2+1
			3: notac3<- notac3+1
			4: notac4<- notac4+1
			5: notac5<- notac5+1
		FinSegun
	FinMientras
	Escribir "El promedio de la comisión 1 es ", notac1/24;
	Escribir "El promedio de la comisión 2 es ", notac2/24;
	Escribir "El promedio de la comisión 3 es ", notac3/24;
	Escribir "El promedio de la comisión 4 es ", notac4/24;
	Escribir "El promedio de la comisión 5 es ", notac5/24; 
FinAlgoritmo
