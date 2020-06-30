#Pieraksti ātrākai zīmēšanai

Rezultats Nr1
set title "x vertibas intervals [-2,9;0.5]"
set key right bottom
set xlabel "x"
set ylabel "y"
plot "RootsGnuplotNr1.dat" lc rgb "red" lt 1 lw 2  with lines title "RezultatsNr1", 
"VienaSakne.dat" lc rgb "green" lt 7 lw 3 title "Viena sakne"



Rezultats Nr2
set title "x vertibas intervals [-3.2;0.5]"
set key right bottom
set xlabel "x"
set ylabel "y"
plot "RootsGnuplotNr2.dat" lc rgb "red" lt 1 lw 2  with lines title "RezultatsNr2", "DivasSaknes.dat" lc rgb "green" lt 7 lw 3 title "2-as saknes"
