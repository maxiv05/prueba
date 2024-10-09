Algoritmo Ejercicio38
	C <- 0 ; Suma <- 0
	Leer N, C1, C2, C3, C4
	Mientras C < N Hacer
		Leer Cat
		C <- C + 1
		Segun Cat Hacer
			1: Cuota <- C1 * 0.90
			2: Cuota <- C2 * 0.90
			3: Cuota <- C3 * 0.75
			4: Cuota <- C4 * 0.75
			5: Cuota <- C4 * 0.90
		FinSegun
		Suma <- Suma + Cuota
	FinMientras
	Escribir 'Recaudación del mes:', Suma
FinAlgoritmo
