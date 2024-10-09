Algoritmo Ejercicio34
	Escribir "Ingresar los tres lados del triangulo";
	Leer cat1, cat2, cat3;
	hip<-0;
	Mientras cat1=cat2 o cat1=cat3 o cat2=cat3 Hacer
		Escribir "ingresar nuevos numeros";
		Leer a, b, c; 
	FinMientras
	Si cat1*cat1=cat2*cat2+cat3*cat3 Entonces
		hip<- cat1;
		Escribir "El triangulo es rectangulo"
		area<- (cat2*cat3)/2;
		Escribir "su area es ", area;
	FinSi
	Si cat2*cat2=cat1*cat1+cat3*cat3 Entonces
		hip<- cat2;
		Escribir "El triangulo es rectangulo"
		area<- (cat1*cat3)/2;
		Escribir "Su area es ", area;
	FinSi
	Si cat3*cat3=cat1*cat1+cat2*cat2 Entonces
		hip<- cat3;
		Escribir "El triangulo es rectangulo"
		area<- (cat1*cat2)/2;
		Escribir "El area es ", area;
	FinSi
	Si hip=0 Entonces
		Escribir "No es triangulo rectangulo";
	FinSi
FinAlgoritmo
