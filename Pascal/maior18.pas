program maior18;
Var
	idade :Integer;
Begin
	WriteLn('Qual sua idade?');
  Readln(idade);
	if (idade >= 18)
	Then WriteLn('Você é maior de idade!')
	Else WriteLn('Você é menor de idade');
	Readln;
End.