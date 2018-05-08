    uint64_t password = 0;
  	uint64_t password_2 = 0;
  	uint16_t vigencia=0;
  	uint16_t vigencia_2=0;
  	const unsigned totalDigits = 26;
  for( ; ; )
  	{
    unsigned digitsLeft = currentDigit;
    		for( char * b = buf; ; ++b )
    		{
      			
      			while( !isdigit( *b ) )
        			++b;

      			if ( !*b )
        			break;

      			if ( ! ( digitsLeft-- ) )
      			{
        			*b -= '0' - 'A';
        			break;
      			}
    		}
        
        Parallel
    		{
	      		Call( waitKey, "adminUp" );		/** Outcome 1 - LINES3 - (3) 9 lineas - avanza a la izquierda*/
	      		Call( waitKey, "adminDown" );	/** Outcome 2 - MAXBET - (m) doblar - avanza a la derecha*/
	      		Call( waitKey, "adminEnter" );	/** Outcome 3 - START - (s) jugar - incrementa el valor de los digitos*/
	      		Call( waitKey, "adminDecre" );  /** Outcome 4 - LINES5 - (5) 20 lineas - decrementa el valor de los digitos*/
	      		Call( waitKey, "enterAdmin" );	/** Outcome 5 - KEY2 - (a) lectura - ingresa y acepta las claves*/
	      		Call( waitKey, "adminEscape" );	/** Outcome 6 - LINES1 - (1) 1 linea- salir*/	 
    		}

			
    		switch( Outcome() )
    		{
				/// Outcome 1
      			case 1:
        		if ( !currentDigit )
          			currentDigit = totalDigits - 1;
        		else
          			--currentDigit;
      			break;

				/// Outcome 2
      			case 2:
      			
        		if ( ++currentDigit >= totalDigits )
          			currentDigit = 0;
      			break;

				/// Outcome 3 - START - (s) jugar - cambia el valor de los digitos
      			case 3:
      			{
					///clave 1, 10 digitos de 0 a 9
					if(currentDigit<=9){
						// Change digits of the password

						uint64_t multiplier = 1;

						for( unsigned x = 9 - ( currentDigit ); x--; )
							multiplier *= 10;

						if ( ( password % ( multiplier * 10 ) ) / multiplier == 9 )
							password -= multiplier * 9;
						else
							password += multiplier; /** add 1 digit */
					}

		  
					if(currentDigit>=10 && currentDigit<=19)
					{
						// Change digits of the password

						uint64_t multiplier_2 = 1;

						for( unsigned x = 9 - ( currentDigit - 10 ); x--; )
							multiplier_2 *= 10;

						if ( ( password_2 % ( multiplier_2 * 10 ) ) / multiplier_2 == 9 )
							password_2 -= multiplier_2 * 9;
						else
						password_2 += multiplier_2;
				  
					}
			  
					if(currentDigit>=20 && currentDigit <=22)
					{
							// Change digits of the password

							uint8_t multiplier_3 = 1;

							for( unsigned x = 2 - ( currentDigit - 20 ); x--; )
								multiplier_3 *= 10;

							if ( ( vigencia % ( multiplier_3 * 10 ) ) / multiplier_3 == 9 )
								vigencia -= multiplier_3 * 9;
							else
							vigencia += multiplier_3;
				  
					}
			  
					if(currentDigit>=23 )
					{
						// Change digits of the password

							uint8_t multiplier_4 = 1;

							for( unsigned x = 2 - ( currentDigit - 23 ); x--; )
								multiplier_4 *= 10;

							if ( ( vigencia_2 % ( multiplier_4 * 10 ) ) / multiplier_4 == 9 )
								vigencia_2 -= multiplier_4 * 9;
							else
							vigencia_2 += multiplier_4;	  
					}		     
      			}
      			break;
      			
      			
      			/// Outcome 4 - LINES5 - (5) 20 lineas - decrementa el valor de los digitos
      			case 4:
      			{
					///clave 1, 10 digitos de 0 a 9
					if(currentDigit<=9){
						uint64_t multiplier = 1;
						for( unsigned x = 9 - ( currentDigit ); x--; )
							multiplier *= 10;

						if ( ( password % ( multiplier * 10 ) ) / multiplier <= 0 )
							password += multiplier * 9;
						else
							password -= multiplier;	/**  substract 1 digit */
					}
					///clave 2, 10 digitos de 10 a 19
					if(currentDigit>=10 && currentDigit<=19)
					{
						uint64_t multiplier_2 = 1;
						for( unsigned x = 9 - ( currentDigit - 10 ); x--; )
							multiplier_2 *= 10;

						if ( ( password_2 % ( multiplier_2 * 10 ) ) / multiplier_2 <= 0 )
							password_2 += multiplier_2 * 9;
						else
							password_2 -= multiplier_2;			  
					}
					///clave 3, 3 digitos de 20 a 22
					if(currentDigit>=20 && currentDigit <=22)
					{		
							uint8_t multiplier_3 = 1;
							for( unsigned x = 2 - ( currentDigit - 20 ); x--; )
								multiplier_3 *= 10;

							if ( ( vigencia % ( multiplier_3 * 10 ) ) / multiplier_3 <= 0 )
								vigencia += multiplier_3 * 9;
							else
							vigencia -= multiplier_3;  
					}
					///clave 4, 3 digitos de 23 a 25
					if(currentDigit>=23 )
					{
							uint8_t multiplier_4 = 1;
							for( unsigned x = 2 - ( currentDigit - 23 ); x--; )
								multiplier_4 *= 10;

							if ( ( vigencia_2 % ( multiplier_4 * 10 ) ) / multiplier_4 <= 0 )
								vigencia_2 += multiplier_4 * 9;
							else
							vigencia_2 -= multiplier_4;
					}
						
				}
				break;
				
				/// Outcome 5 - KEY2 - (a) lectura - ingresa y acepta las claves
      			case 5:
      			{
            uint64_t Date_Value=0;      
					std::string date_reg;	//Date on pendrive
					system("date +'%s' > /trash/Date_Reg.txt");
					char date_tmp[20]; 
					File::Class Date_Reg( "/trash/Date_Reg.txt", "r" );       
					date_reg = Date_Reg.gets();
					Date_Reg.close();
					system("rm -rfv /trash/Date_Reg.txt");
					memset(date_tmp,0,sizeof(date_tmp)); 
					snprintf(date_tmp,sizeof(date_tmp),"%s",date_reg.c_str());
					Date_Value=(atoll(date_tmp));  
          if(dongle.Validate_Sena_From_Dongle(&senha_3[0],&senha_out[0],password,password_2,vigencia,vigencia_2,Date_Value)){

						dongle.updateVigencia();	
						
						dongle.Set_Err_Flag(0x00,0x01);					

						return; 

					}      
       
       
       				offset=0;
       				for(i=0;i<20;i++)
					{
						sprintf(tmp_str,"%02X",senha_out[i] & 0xFF);
						senha_out_str[2*i+offset]=tmp_str[0];
						senha_out_str[2*i+1+offset]=tmp_str[1];
	
						if( (i % 2)==1 && i < 11)
						{
							offset++;
							senha_out_str[2*i+1+offset]='-';
						}
					}       
      
       				adminSet.text( "hintt1" ).set( L"" );
        			adminSet.text( "hintt3" ).set( L"" );
					//config.text( "b3" ).set( str( " %s", senha_1_str ) );
        			//adminSet.text( "hintt2" ).set(senha_out_str );       

        			sleep( 6 );
      			}
      			break;

				///Outcome 6 - LINES1 - (1) 1 linea- salir
      			case 6:
					Fe::Set & qr = adminSet.set( "qr" );

					qr.show();
		
					sleep( 0.05 );
        		return;
    		}
    		
    		
  	}
