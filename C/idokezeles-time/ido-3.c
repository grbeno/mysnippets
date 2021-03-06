#include <stdio.h>
#include <time.h>

// Programok futási idejének megmérése / Running time measuring using difftime()

time_t kezd, veg;
time(&kezd);

// A program
for (int i = 0; i < 1000000000; i++);

time(&veg);
    
// Ciklus feldolgozása alatt eltelt másodpercek / Elapsed time (sec) while the loop was running
double diff = difftime(veg,kezd);
printf("A program %.0f sec alatt futott le.\n", diff);