Algoritmo Ejercicio3112
	c <- 0
	suma <- 0
	Mientras c<7 Hacer
		Escribir 'Ingresar el valor de x '
		Leer x
		c <- c+1
		Si x/2=Trunc(x/2) Entonces
			suma <- suma+x
		FinSi
	FinMientras
	Escribir suma
	
FinAlgoritmo
