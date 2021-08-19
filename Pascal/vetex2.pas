program vetex2;
var
		vet 		:array[1.. 5] of Integer;
		cont, cont2  	:integer;
Begin
cont2 := 5;
for cont := 1 to 5 Do
	begin
		writeln('Vetor ', cont, ': ');
		readln(vet[cont]);
	end;
for cont := 1 to 5 Do
	Begin

		writeln('Vetor' , cont, '=> ', vet[cont2]);
		cont2 := (cont2-1);
	end;
readln;
end.