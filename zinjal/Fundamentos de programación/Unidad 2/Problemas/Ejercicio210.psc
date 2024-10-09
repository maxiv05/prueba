Algoritmo Ejercicio210
	Escribir "Ingresa la base menor del trapecio";
	Leer Bmenor;
	Escribir "Ingresa la altura del trapecio";
	Leer altura;
	Escribir "Ingresa el angulo del trapecio";
	Leer angulo;
	Escribir "Ingresa la velocidad del agua";
	Leer velocidad;
	p1<- (Bmenor*altura)/2;
	hipotenusa<- altura/SEN (angulo);
	p2<- Raiz (hipotenusa^2*altura^2);
	area<- p1+ p2/2;
	caudal<- velocidad*area;
	Escribir "El caudal medio es ", caudal; 
FinAlgoritmo
