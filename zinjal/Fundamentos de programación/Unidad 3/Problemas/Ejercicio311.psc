Algoritmo Ejercicio311
	c <- 0
	suma <- 0
	Repetir
		Escribir 'Ingresar el valor de x '
		Leer x
		c <- c+1
		Si x/2=Trunc(x/2) Entonces
			suma <- suma+x
		FinSi
	Hasta Que c=7
	Escribir suma
FinAlgoritmo
