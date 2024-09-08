#include <stdio.h>
  int  main() {
  	
  	float principal;
  	float interestrate;
  	
  	printf("PRINCIPAL AMOUNT=");
	scanf("%f", &principal);
	printf("INTEREST RATE=");
	scanf("%f", &interestrate);
	
	float interest;
	interest=(principal*interestrate)/(100);
		printf("the interest amount you will earn over a year=%.2f\n",interest);
	
	float totalamount;
	totalamount=(interest*principal);
	printf("total amount=%.2f",totalamount);
	
	}