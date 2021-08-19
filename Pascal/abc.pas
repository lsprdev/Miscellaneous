program abc;
Var
	A, B, C, Tudo :Integer;
Begin
		Writeln('De o valor de A');
		Readln(A);
		Writeln('De o valor de B');
		Readln(B);
		WriteLn('De o valor de C');
		Readln(C);
		Tudo := A+B;
		if (Tudo>C)
		then WriteLn('A soma de A e B é maior que C')
		else WriteLn('A soma de A e B é menor que C');
		readln;
End.                                                     