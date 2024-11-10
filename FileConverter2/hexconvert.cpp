String^ hextobin(String^ InHex) {
	//Conversion involves an itial mapping to a decimal value followed by a decimal-to-binary conversion loop used before,
	//except a change of the loop index (8 to 4) since each hexadecimal character corresponds to 4 bits
	int len = InHex->Length;
	String^ binres = "";
	String^ bin = "";
	
	int bindec = 0;
	
	for (int i = 0; i < len; i++) {
		Char hex = InHex[i];

		switch (hex) {
		case '1':
			bindec = 1;
			break;
		case '2':
			bindec = 2;
			break;
		case '3':
			bindec = 3;
			break;
		case '4':
			bindec = 4;
			break;
		case '5':
			bindec = 5;
			break;
		case '6':
			bindec = 6;
			break;
		case '7':
			bindec = 7;
			break;
		case '8':
			bindec = 8;
			break;
		case '9':
			bindec = 9;
			break;
		case '0':
			bindec = 0;
			break;
		case 'a':
			bindec = 10;
			break;
		case 'b':
			bindec = 11;
			break;
		case 'c':
			bindec = 12;
			break;
		case 'd':
			bindec = 13;
			break;
		case 'e':
			bindec = 14;
			break;
		case 'f':
			bindec = 15;
			break;
		}

		//take each decimal and split into 4bits 
		for (int j = 0; j < 4; j++) {
			(bindec % 2) ? bin = "1" + bin :
				bin = "0" + bin;
			bindec /= 2;
		}
		binres += bin;
		//reset
		bin = "";
		bindec = 0;
		//ouput resulting binary string

	}
	return binres;
}

