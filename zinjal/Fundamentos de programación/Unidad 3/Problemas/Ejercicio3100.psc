Algoritmo Ejercicio3100
	Contador<- 0
	PuntajeM<- 0
	CantidadM<- 0
	NombreM<- "AAA"
	Mientras Contador<3 Hacer
		Escribir "Ingrese el nombre"
		Leer Nombre;
		Escribir "Ingrese el puntaje"
		Leer Puntaje;
		Escribir "Ingrese la cantidad de carreras ganadas";
		Leer CantidadGanadas;
		contador<- Contador+1;
		Si puntaje>PuntajeM o (Puntaje=PuntajeM y CantidadGanadas>cantidadM ) Entonces
			PuntajeM<- Puntaje;
			cantidadM<- CantidadGanadas;
			NombreM<- Nombre;
		FinSi
	FinMientras
	Escribir NombreM;
	
FinAlgoritmo
