# Turnurile din Hanoi

## Cerința
Se dau trei tije A, B, C și N discuri de diametre diferite, stivuite inițial pe
tija A în ordinea descrescătoare a diametrelor, formând un con. Să se determine secvența de
mutări ale discurilor de pe tija inițială A către tija finală C, folosind B ca tijă intermediară, având
în vedere următoarele restricții:

a. la fiecare mișcare se va muta un singur disc

b. un disc se poate plasa doar asupra unui disc mai mare ca diametru.

## Rezolvare
  Pentru N=1, se muta discul de pe tija A pe tija C, adică se face mutarea A->C.
  
  Pentru N=2, se fac mutările: A->B, A->C, B->C.
  
  Pentru N>2, notăm șirul mutărilor celor N discuri de pe tija A pe tija C, folosind B ca tijă intermediară cu Hanoi(N,A,B,C). 
  
  Descompunem problema în alte două subprobleme de acelaşi tip, urmând apoi să combinăm soluţiile.
  
  Observăm că mutarea celor N discuri de pe tija inițială A pe tija finală C, utilizând ca tijă intermediară tija B, este echivalentă cu:
  
       • mutarea a N-1 discuri de pe tija A pe tija B, utilizând ca tijă intermediară tija C;
       
       • mutarea discului rămas pe tija C;
       
       • mutarea a N-1 discuri de pe tija B pe tija C, utilizând ca tijă intermediară tija A.
       
  Cu 3 discuri, problema se rezolvă în 7 mutări.
  
  Numărul minim de mutări pentru a rezolva problema este 2^N-1.
  
## Rulare
         docker run -it predescuionela/myapp
   
   Introduceți numărul de discuri dorit.
