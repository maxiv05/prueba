Algoritmo Ejercicio36
	ContF<- 0
	ContM<- 0
	Contador<-0
	Mientras contador<=112 Hacer
		Escribir "Ingrese su altura";
		Leer Altura;
		Escribir "Ingrese su sexo";
		Leer Sexo
		Si sexo="M" Entonces //Estaria bien poner si sexo=M Y altura>1.90 entonces ContM<-ContM+1?
			Si altura>1.90 Entonces
				ContM<- ContM+1;
			FinSi
		SiNo
			Si sexo="F" Entonces
				Si altura>=1.75 Entonces
					ContF<- ContF+1
				FinSi
			FinSi
		FinSi
	FinMientras
	Escribir "La cantidad de Mujeres altas es: ", ContF;
	Escribir "La cantidad de varones altos es: ", ContM; 
FinAlgoritmo
