Program ProjMatAguaCalc;
Var
  consumo, vmax, v1, v2, v3, v4, v5 : Integer;
  valmax, val1, val2, val3, val4, val5,tmax, t1, t2, t3, t4, t5 : Real;
Begin
  Write('Consumo/m3= ');
  Readln(consumo);
  valmax := 37.47;
  val1 := 1.16;
  val2 := 6.46;
  val3 := 6.49;
  val4 := 6.55;
  val5 := 11.08;
  Begin
    If (consumo <= 5) Then
      vmax := consumo;
    If (consumo <= 5) Then
      tmax := 37;
  End;
  Begin
    If (consumo>5) And (consumo <= 10) Then
      vmax := 5;
    If (consumo>5) And (consumo <= 10) Then
      tmax := 37;
    If (consumo>5) And (consumo <= 10) Then
      v1 := (consumo-5);
    If (consumo>5) And (consumo <= 10) Then
      t1 := (v1*val1);
  End;
  Begin
    If (consumo > 10) And (consumo <= 15) Then
      vmax := 5;
    If (consumo > 10) And (consumo <= 15) Then
      tmax := 37;
    If (consumo > 10) And (consumo <= 15) Then
      v1 := 5;
    If (consumo > 10) And (consumo <= 15) Then
      t1 := (v1*val1);
    If (consumo > 10) And (consumo <= 15) Then
      v2 := (consumo-10);
    If (consumo > 10) And (consumo <= 15) Then
      t2 := (v2*val2)
  End;
  Begin
    If (consumo > 15) And (consumo <= 20) Then
      vmax := 5;
    If (consumo > 15) And (consumo <= 20) Then
      tmax := 37;
    If (consumo > 15) And (consumo <= 20) Then
      v1 := 5;
    If (consumo > 15) And (consumo <= 20) Then
      t1 := (v1*val1);
    If (consumo > 15) And (consumo <= 20) Then
      v2 := 5;
    If (consumo > 15) And (consumo <= 20) Then
      t2 := (v2*val2);
    If (consumo > 15) And (consumo <= 20) Then
      v3 := (consumo-15);
    If (consumo > 15) And (consumo <= 20) Then
      t3 := (v3*val3);
  End;
  Begin
    If (consumo > 20) And (consumo <= 30) Then
      vmax := 5;
    If (consumo > 20) And (consumo <= 30) Then
      tmax := 37;
    If (consumo > 20) And (consumo <= 30) Then
      v1 := 5;
    If (consumo > 20) And (consumo <= 30) Then
      t1 := (v1*val1);
    If (consumo > 20) And (consumo <= 30) Then
      v2 := 5;
    If (consumo > 20) And (consumo <= 30) Then
      t2 := (v2*val2);
    If (consumo > 20) And (consumo <= 30) Then
      v3 := 5;
    If (consumo > 20) And (consumo <= 30) Then
      t3 := (v3*val3);
    If (consumo > 20) And (consumo <= 30) Then
      v4 := (consumo-20);
    If (consumo > 20) And (consumo <= 30) Then
      t4 := (v4*val4);
  End;
  Begin
    If (consumo > 30) Then
      vmax := 5;
    If (consumo > 30) Then
      tmax := 37;
    If (consumo > 30) Then
      v1 := 5;
    If (consumo > 30) Then
      t1 := (v1*val1);
    If (consumo > 30) Then
      v2 := 5;
    If (consumo > 30) Then
      t2 := (v2*val2);
    If (consumo > 30) Then
      v3 := 5;
    If (consumo > 30) Then
      t3 := (v3*val3);
    If (consumo > 30) Then
      v4 := (10);
    If (consumo > 30) Then
      t4 := (v4*val4);
    If (consumo > 30) Then
      v5 := (consumo-30);
    If (consumo > 30) Then
      t5 := (v5*val5);
  End;
  Writeln('FAIXAS DE CONSUMO    VOLUME     VALOR m³/R$           TOTAL');
  Writeln;
  Writeln('                                       ÁGUA                     ÁGUA');
  Writeln('Mínimo                 ',vmax,'             R$',valmax:6:2,'                   R$',tmax:6:2
  );
  Writeln('de 6 a 10              ',v1,'             R$',val1:6:2,'                  R$',t1:6:2 );
  Writeln('de 11 a 15             ',v2,'             R$',val2:6:2,'	                  R$',t2:6:2 );
  Writeln('de 16 a 20	            ',v3,'             R$',val3:6:2,'	                  R$',t3:6:2 );
  Writeln('de 21 a 30	            ',v4,'             R$',val4:6:2,'	                 R$',t4:6:2 );
  Writeln('acima de 30	           ',v5,'             R$',val5:6:2,'	                  R$',t5:6:2 );
  Writeln;
  Writeln('TOTAL: R$', tmax+t1+t2+t3+t4+t5:6:2);
  Readln;
End.
//FAIXAS DE CONSUMO	  VOLUME	    VALOR m³/R$	       TOTAIS
//                                  ÁGUA	        ÁGUA	   ESGOTO
//Mínimo	              5	          37,47	        37,47	   29,97
//de 6 a 10	            5	          1,16	        5,80	   4,64
//de 11 a 15	          5	          6,46	        32,30	   25,84
//de 16 a 20	          5           6,49	        32,45	   25,96
//de 21 a 30	          10          6,55	        65,50    52,40
//acima de 30	          70	        11,08	        775,60	 620,48