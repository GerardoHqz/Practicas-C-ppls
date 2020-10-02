    do{
      cout<<"User: "; cin>>user;
      cout<<"Password: "; cin>>password;
      if(password == "contraseña"){
          band = true;
          contador = 2;
      }
      if(password != "contraseña"){
        cout<<"Credenciales incorrectas.\n";
      }        
      cout<<endl;

      contador++;
    }while(contador != 3);