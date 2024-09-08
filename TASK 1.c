#include <stdio.h>
 main() {
 	
 	int testInteger=3000000000;
 	ptintf("Number is %d",testInteger);
 }

-NOTE: There is a range of values that the %d format specifier handles, but in 
this code, it fails to cover the full range, leading to incorrect values 
being displayed.