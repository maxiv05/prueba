//Escriba un programa que permita ingresar 30 n�mero e informe el promedio de todos ellos.
Algoritmo Autoevaluacion22
	
	Escribir "Ingrese los n�meros"
	Leer num
	
	Contador<-0
	suma<-0 
	Mientras Contador<=30 Hacer
		leer num
		suma<- suma+num
		Contador<-Contador+1
	FinMientras
	
	Promedio<- suma/30;
	
	Escribir "El promedio es ", promedio; 
	
FinAlgoritmo
