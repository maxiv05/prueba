Algoritmo Ejercicio310
	Notac1<- 0
	Notac2<- 0
	Notac3<- 0
	Notac4<- 0
	alumnosc1<- 0
	alumnosc2<- 0
	alumnosc3<- 0
	alumnosc4<- 0
	Escribir "Ingresa la comisión" ;
	Leer comision;
	Escribir "Introduzca la nota";
	Leer nota; 
	Mientras alumnos<>0 y comision <>0 Hacer
		alumnos<- alumnos+1
		Segun comision Hacer
			1: notac1<- notac1+1 
			2: notac2<- notac2+1
			3: notac3<- notac3+1
			4: notac4<- notac4+1
		FinSegun
		Escribir "Ingresa la comisión" ;
		Leer comision;
		Escribir "Introduzca la nota";
		Leer nota; 
	FinMientras
	Escribir "El promedio de la comisión 1 es ", notac1/alumnosc1;
	Escribir "El promedio de la comisión 2 es ", notac2/alumnosc2;
	Escribir "El promedio de la comisión 3 es ", notac3/alumnosc3;
	Escribir "El promedio de la comisión 4 es ", notac4/alumnosc4;
FinAlgoritmo

