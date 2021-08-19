Program maiormenor;
Var
  cont, num, maior, menor : Integer;
Begin
  maior := -999999;
  menor := 999999;
  For cont := 1 To 4 Do
    Begin
      Writeln('Digite um numero: ');
      Readln(num);
      If (num > maior)Then
        maior := num;
      If (num < menor)Then
        menor := num;
    End;
  Writeln('Maior numero => ', maior);
  Writeln('Menor numero => ', menor);
  Readln;
End.
