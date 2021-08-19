program NumPares;
Var n1, n2,cont :integer;
		mult5         :boolean;

Begin
	writeln('Digite o primeiro numero de um intervalo');
	readln(n1);
	writeln('digite o ultio numero do intervalo');
	readln(n2);

	mult5 := (cont mod 2 = 0);

for cont := n1 to n2 Do
	Begin
		If cont mod 5 = 0 Then
			writeln(cont:5);
	end;
readln;
end.