program tabuadausandorepeticao;
var
	numtab, numter, cont :Integer;
Begin
	cont := 0;
	writeln('Digite a tabuada desejada: ');
	Readln(numtab);
	writeln('Tabuada até qual numero?: ');
	readln(numter);
	while numter > cont do
	begin
	cont := cont+1;
	writeln('=> ',numtab*cont);
	end;
	readln;
end.