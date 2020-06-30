# Set plot
set xlabel "x"
set ylabel "y"
set grid
set key right bottom
set title "Funkcija cos^2(x), 'x' intervals [-4;4], tacu integralis tika aprekinats pie 'x' intervala [-3.2;0.5]"
plot [-4:4] (cos(x))**2 with lines lc "black" lw 2 title ""
replot [-3.2:0.5] (cos(x))**2 with filledcurves r=-1 lc "red" lw 2 title "integralis"
replot [-4:4] (cos(x))**2 with lines lc "black" lw 2 title "cos^2(x)"


