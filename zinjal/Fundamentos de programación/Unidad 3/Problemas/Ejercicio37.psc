Algoritmo Ejercicio37
	ContF<- 0
	ContM<- 0
	altura<- 1
	Escribir "Ingrese su sexo";
	Leer sexo;
	Escribir "Ingrese su altuea";
	Leer altua; 
	Mientras altura<> 0 Hacer
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
		Escribir "Ingrese su sexo"
		Leer sexo
		Escribir "Ingrese su altura"
		Leer altura
		FinMientras
	Escribir "La cantidad de Mujeres altas es: ", ContF;
	Escribir "La cantidad de varones altos es: ", ContM; 

FinAlgoritmo
