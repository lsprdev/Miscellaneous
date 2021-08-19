program repnumint;
Var
		prim, sec :integer;
Begin
	writeln('PRIMEIRO NUMERO: ');
	readln(prim);
	writeln('SEDUNDO NUMERO DO INTERVALO: ');
	readln(sec);
	while prim <= sec Do
		begin
			writeln('=> ', prim);
			prim := prim + 1
		end;
readln;
end.