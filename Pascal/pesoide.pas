program pesoide;
var homi, sexo :String;
		homih, muieh, h :Real;

Begin
	WriteLn('Seu Sexo: ');
	Readln(sexo);
	WriteLn('De sua altura: ');
	Readln(h);
	homi := 'H';
		if(sexo = homi)
		Then WriteLn((72.7*h)-58 :0:0)
		Else WriteLn((62.1*h)-44.7 :0:0);
		Readln;
End.