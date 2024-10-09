Algoritmo Ejercicio41
	Escribir "Ingrese la cantidad de datos que va a ingresar";
	Leer N;
	Dimension A[N];
	Para i<-1 Hasta N Hacer
		Leer A[i];
	FinPara
	Escribir A[7];
	Escribir A[23];
	Escribir A[N];
	c<-0
	Para i<-1 Hasta N Hacer
		Si A[i] mod 6=0 Entonces
			c<-c+1;
		FinSi
	FinPara
	Si C>0 Entonces
		Escribir "La cantidad de números divisibles por 6 es ", c;
	SiNo
		Escribir "No hay números divisibles por 6 ";
	FinSi
FinAlgoritmo
