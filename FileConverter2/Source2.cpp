
String^ hextobin(String^ InHexWords) {
	//initializing decimal values, binary base value and result strings
	int len = InHexWords->Length;
	String^ binres = "";
	String^ bin = "";
	//initialize two different decimal values to analyse
	int bindec = 0;
	//take each element and map into its decimal value
	for (int i = 0; i < len; i++) {
		Char hex = InHexWords[i];

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

String^ bintochar(String^ InBinNums) {
	String^ resStr = "";
	int strdec = 0;
	int base_val = 1;
	int size = InBinNums->Length;
	for (int i = size / 8; i > 0; i--) {
		for (int j = 8 * i - 1; j >= 8 * i - 8; j--) {
			if (InBinNums[j] == '1')
				strdec += base_val;
			base_val = base_val * 2;
		}
		Char letter = (char)strdec;
		resStr = letter + resStr;
		//reset
		base_val = 1;
		strdec = 0;
	}
	//output result
	return resStr;

}