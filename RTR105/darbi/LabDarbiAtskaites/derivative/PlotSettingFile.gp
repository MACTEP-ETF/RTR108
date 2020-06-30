# Set plot
set xlabel "x"
set ylabel "y"
set grid
set title "Funkcijas cos^2(x) tiesa vertiba, ka ari 1. un 2. kartas atvasinajumi pec 2 metodem. 'x' intervals [-3.2;0.5]"
plot "derivative.dat" using 1:2 with lines lc "black" lw 2 title "f(x)"
replot "derivative.dat" using 1:3 with lines lc "blue" lw 7 title "f'(x) ar AF"
replot "derivative.dat" using 1:4 with lines lc "green" lw 2 title "f'(x) ar FD"
replot "derivative.dat" using 1:5 with lines lc "red" lw 7 title "f''(x) ar AF"
replot "derivative.dat" using 1:6 with lines lc "yellow" lw 2 title "f''(x) ar FD"

