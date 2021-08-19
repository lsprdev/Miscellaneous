program vetex1;
Var
	vet  		:Array[1.. 10] of integer;
	cont 		:integer;
Begin
for cont := 1 to 10 Do
	Begin
		writeln('Valor vet ', cont,': ');
		readln(vet[cont]);
	end;
	for cont := 1 to 10 Do
		Begin
			writeln('=> Vetor ',cont, ' => Valor ', vet[cont]);
		end;
readln;
end.