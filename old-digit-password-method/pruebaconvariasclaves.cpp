uint64_t password = 0;
uint64_t password_2 = 0;
uint16_t vigencia=0;
uint16_t vigencia_2=0;
const unsigned totalDigits = 26;
  for( ; ; ){
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
	      		Call( waitKey, "adminUp" );	/** Outcome 1 - avanza a la izquierda*/
	      		Call( waitKey, "adminDown" );	/** Outcome 2 - avanza a la derecha*/
	      		Call( waitKey, "adminEnter" );	/** Outcome 3 - incrementa el valor de los digitos*/
	      		Call( waitKey, "adminDecre" );  /** Outcome 4 - decrementa el valor de los digitos*/
	      		Call( waitKey, "enterAdmin" );	/** Outcome 5 - ingresa y acepta las claves*/
	      		Call( waitKey, "adminEscape" );	/** Outcome 6 - salir*/	 
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

			/// Outcome 3 - cambia el valor de los digitos
      			case 3:
      			{
					///clave 1, 10 digitos de 0 a 9
					if(currentDigit<=9){
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
      			
      			
      			/// Outcome 4 - decrementa el valor de los digitos
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
    		}		
  	}
