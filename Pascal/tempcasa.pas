program casada;
Var
	nome, sexo, estaciv :String;
	tempcasa :integer;
Begin
		WriteLn('Digite seu nome');
		readln(nome);
		Writeln('Digite seu sexo');
		Readln(sexo);
		Writeln('Digite seu estado civil');
		Readln(estaciv);
	if (sexo = 'F') and (estaciv = 'CASADA')
	then writeln('Tempo de casada');
			 Readln(tempcasa);
	Readln;
End.