String^ strtobin(String^ InChar) {
	
	int len = InChar->Length; //length used to infer final point of string parsing
	String^ bin = "";		  
	String^ binres = "";

	for (int i = 0; i <= len - 1; i++)
	{
		//Every character of the string will be processed through its ASCII value
		int val = int(InChar[i]);

		//Following loop uses the principles of binary code to convert decimal to binary
		for (int j = 0; j < 8; j++) {
			(val % 2) ? bin = "1" + bin :
				bin = "0" + bin;			
			val /= 2;
		}
		binres += bin;
		//To include the padding of binary codes, loop is done for a fixed amount (8 times)
		bin = "";
	};
	return binres;
}

String^ strtohex(String^ InChar) {

	String^ hexres = "";
	String^ firsthex = "";
	String^ secondhex = "";
	int len = InChar->Length;

	for (int k = 0; k <= len - 1; k++)
	{
		//Divide decimal value by 16 to get first part of the hexadecimal output 
		int val = int(InChar[k]);
		firsthex = (val / 16).ToString();
		//Get remainder of the division and map to the second part of hexadecimal output
		int num = val % 16;
		switch (num)
		{
		case 0:
			secondhex = "0";
			break;
		case 1:
			secondhex = "1";
			break;
		case 2:
			secondhex = "2";
			break;
		case 3:
			secondhex = "3";
			break;
		case 4:
			secondhex = "4";
			break;
		case 5:
			secondhex = "5";
			break;
		case 6:
			secondhex = "6";
			break;
		case 7:
			secondhex = "7";
			break;
		case 8:
			secondhex = "8";
			break;
		case 9:
			secondhex = "9";
			break;
		case 10:
			secondhex = "a";
			break;
		case 11:
			secondhex = "b";
			break;
		case 12:
			secondhex = "c";
			break;
		case 13:
			secondhex = "d";
			break;
		case 14:
			secondhex = "e";
			break;
		case 15:
			secondhex = "f";
			break;
		}
		//Add the two parts to an ouput string
		hexres = hexres + firsthex + secondhex;
	}
	return hexres;

}