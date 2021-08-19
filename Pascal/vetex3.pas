program vetex3;
var
	vet :array[1.. 5]of Integer;
	cont, aux, imp, par :integer;
Begin
for cont := 1 to 5 Do
	Begin
		writeln('Vetor ', cont, ' => ');
		readln(vet[cont]);
		if (vet[cont] mod 2 = 0) Then
			par := par + 1
		else
			imp := imp + 1;
	end;
	writeln('Impares => ', imp);
	writeln('Pares => ', par);
readln;
end.