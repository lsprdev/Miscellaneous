Program reppar;
Var
  prim, sec : Integer;
Begin
  Writeln('digite o primeiro numero do intevalo: ');
  Readln(prim);
  Writeln('digite o ultimo numero do intervalo: ');
  Readln(sec);
  Repeat
    Begin
      If (prim Mod 2 = 0) Then
        Writeln('=> ', prim);
      prim := prim + 1
    End;
  Until (prim > sec);
  Readln;
End.
