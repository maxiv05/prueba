Algoritmo Ejercicio313
	Escribir 'Cuantos datos va a ingresar?'
	Leer N
	Contador <- 0
	Mayor <- -99999
	Mientras Contador<N Hacer
		Escribir "Ingrese los valores"
		Leer num
		Contador <- Contador+1
		Si num>Mayor Entonces
			Mayor <- num
		FinSi
	FinMientras
	Escribir Mayor
FinAlgoritmo
