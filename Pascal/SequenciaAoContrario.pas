program SequenciAoContrario;
Var
	vetnum :Array[1.. 10]of Integer;
	cont1, qtnum :Integer;
Begin
	WriteLn('Quantidades de numeros: ');
	readln(qtnum);
	for cont1 := 1 to qtnum Do
		Begin
			writeln('Digite um numero: ');
			readln(vetnum[cont1]);
		End;
		for cont1 := qtnum DownTo 1 Do
			Begin
				writeln('=> ', vetnum[cont1]);
			End;
readln;
End.
