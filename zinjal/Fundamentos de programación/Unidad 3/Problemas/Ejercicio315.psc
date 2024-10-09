Algoritmo Ejercicio315
	Escribir "Ingrese la cantidda de nombres y edades"
	Leer Cant
	contador <- 0
	EdadMayor <- 0
	EdadSegundo<-0
	cantidad<- 0
	
	Mientras contador<cantidad Hacer
		Escribir "Ingrese el nombre";
		Leer Nombre
		Escribir "Ingrese la edad"
		Leer Edad
		contador <- contador+1
		Si edad>EdadMayor Entonces
			NombreSegundo <- NombreMayor
			EdadSegundo <- EdadMayor
			EdadMayor <- Edad
			NombreMayor <- Nombre
		SiNo
			Si Edad>EdadSegundo Entonces
				EdadSegundo <- Edad
				NombreSegundo <- Nombre
			FinSi
		FinSi
	FinMientras
	Escribir "El nombre del mayor es ", NombreMayor, " y tiene " ,EdadMayor , " años";
	Escribir "El nombre del segundo mayor es ", NombreSegundo , " y tiene", EdadSegundo , " años";
FinAlgoritmo
