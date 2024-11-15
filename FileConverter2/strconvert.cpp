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

