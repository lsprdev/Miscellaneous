program maior;
Var a, b, c :Integer;
Begin
	Writeln('Numero A');
	Readln(a);
	Writeln('Numero B');
	Readln(b);
	Writeln('Numero C');
	Readln(c);
if (a > b) and (a > c) and (b > c)
then writeln(a , b , c);
if (b > a) and (b > c) and (a > c)
then writeln(b , a , c);
if (a > b) and (c > b) and (a > c)
then writeln(a , c , b);
if (c > a) and (a > b) and (c > b)
then writeln(c , a , b);
if (c > a) and (b > a) and (c > b)
then writeln(c , b , a);
if (b > a) and (a > c) and (b > c)
then writeln(b , a , c);
if (b > a) and (c > a) and (b > c)
then writeln(b , c , a);
Readln;
End.

//bca