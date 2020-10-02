    cout<<endl;
	cout<<"Bienvenido al juego de Nathy,veremos si adivinas mi numero."<<endl;
	cout<<"Dime tu nombre simple mortal: ";cin>>nombre;
    cout<<"MUY BIEN "<<nombre<< " ADIVINA...ADIVINA MI NUMERO."<<endl;
	
	srand(time(NULL)); //generar un numero aleatorio entre 1-100
	dato = 1 + rand()%(101-1);
	srand(time(NULL)); //generar un numero aleatorio entre 1-100
	nathy = 1 + rand()%(11-1);