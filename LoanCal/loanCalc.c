#include <stdio.h>
#include <math.h>

int main()
{	
	float rate;
	int payments, amount;

	printf("Enter amount of loan : $ ");
	scanf("%d", &amount);

	printf("Enter interest rate per year : %% ");
	scanf("%f", &rate);

	printf("Enter number of payments : ");
	scanf("%d", &payments);

	rate = (rate/100) / 12;

	float x = 1 + rate;

	float monthly = amount * ( (rate*pow(x,payments)) / (pow(x,payments)-1) );

	printf("Monthly payment is  %3.2f\n", monthly);

	printf("==========================AMORTIZATION SCHEDULE==========================\n");
	printf("#\t Payment\t Principal\t Interest\t Balance\n");

	int i = 1;
	float interest, princ, bal, bal1;
	bal = amount;
	 
	while(i <= payments){
		interest = bal * rate;
		princ = monthly - interest;
		bal1 = bal - princ;

			printf("%d\t ", i);
		    printf("$%.2f\t", monthly);
		    printf("$%.2f\t\t", princ);
		    printf("$%.2f\t\t", interest);
		    printf("$%1.2f\n", bal1);




			i++;
	

		bal = bal1;
	}

	return 0;
}
