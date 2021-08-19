program repimp;
var prim, sec :integer;
begin
	writeln('digite o primeiro numero: ');
	readln(prim);
	writeln('digite o segundo numero do intevalo: ');
	readln(sec);
	while prim < sec Do
	begin
	prim := prim + 1;
	if (prim mod 2 = 1) then
	writeln('=> ',prim)
	end;

readln;
end.