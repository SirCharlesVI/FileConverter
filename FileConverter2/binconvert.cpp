String^ bintochar(String^ InBinNums) {

	String^ resStr = "";
	int strdec = 0;
	int base_val = 1;
	int size = InBinNums->Length;
	//the double loop here was initiated to read the binary digits in groups of 8
	for (int i = size / 8; i > 0; i--) {
		for (int j = 8 * i - 1; j >= 8 * i - 8; j--) {
			if (InBinNums[j] == '1')
				strdec += base_val;
			base_val = base_val * 2; //simple code that employs the principles of binary coding
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


String^ bintohex(String^ InBinNums) {
	
	String^ resStr = "";
	String^ resHex = "";
	String^ hex = "";
	int dec = 0;
	int len = InBinNums->Length;
	int base_val = 1;

	//Double loop to read digits in groups of 4. The indices of the loops are decreasing because we are looking to read from right to left.
	//
	for (int i = len / 4; i > 0; i--) {		//for double loop, major loop divides binary digit into len/4 sections

		for (int j = 4 * i - 1; j >= 4 * i - 4; j--) { //second loop goes through each digit in the previously stated sections
			if (InBinNums[j] == '1')
				dec += base_val;
			base_val = base_val * 2;  //simple binary-to-decimal algorithm that uses the principles of binary code

		}
		//map retrieved decimal value to hexadecimal equivalent
		switch (dec)
		{
		case 0:
			hex = "0";
			break;
		case 1:
			hex = "1";
			break;
		case 2:
			hex = "2";
			break;
		case 3:
			hex = "3";
			break;
		case 4:
			hex = "4";
			break;
		case 5:
			hex = "5";
			break;
		case 6:
			hex = "6";
			break;
		case 7:
			hex = "7";
			break;
		case 8:
			hex = "8";
			break;
		case 9:
			hex = "9";
			break;
		case 10:
			hex = "a";
			break;
		case 11:
			hex = "b";
			break;
		case 12:
			hex = "c";
			break;
		case 13:
			hex = "d";
			break;
		case 14:
			hex = "e";
			break;
		case 15:
			hex = "f";
			break;
		}
		//reset decimal and base
		base_val = 1;
		dec = 0;
		resHex = hex + resHex;
	}
	return resHex;
}