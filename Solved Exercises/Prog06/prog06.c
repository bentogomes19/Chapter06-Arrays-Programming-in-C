#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	int op,op2, i, flight_numb[12], seats[12], n_flight;
	char dep[12][22], arr[12][22];
	printf("#################################################################\n");
	printf("###      FLIGHT RESERVATION SYSTEM - AMERICAN AIRLINES        ###\n");
	printf("#################################################################\n");
	printf("###              INFO ABOUT 12 FLIGHTS                        ###\n");
	printf("#################################################################\n");
	for(i=0; i<=11; i++) {
		printf("\033[0;38;5;226m"); // ANSI Sequence to change the text color to Yellow
		printf("\nType your flight number %d --> ", i+1);
		scanf(" %d", &flight_numb[i]);

		printf("\033[0m");
		printf("\nType the origin flight (Ex: New York, Boston...) --> ");
		fflush(stdin);
		fgets(dep[i], 22, stdin); //read an string with fgets

		printf("\nType the destination flight (Ex: New York, Boston...) --> ");
		fflush(stdin);
		fgets(arr[i], 22, stdin);

		printf("\nType the number of seats available for this flight %d --> ", i+1);
		scanf(" %d", &seats[i]);
	}

	do {

		printf("\033[0m"); 
		printf("\n\n\n###################################\n");
		printf("##     MENU OPTIONS                 ##\n");
		printf("##    [01] --> CONSULT              ##\n");
		printf("##    [02] --> MAKE A RESERVATION   ##\n");
		printf("##    [03] --> EXIT                 ##\n");
		printf("######################################\n");
		printf("## CHOOSE ONE OF THE OPTIONS: ");
		scanf("%d", &op);

	while (op <= 0 && op > 3) {
		printf("Invalid input... Try again\n\n");
		printf("## CHOOSE ONE OF THE OPTIONS 1|2|3: ");
		scanf("%d", &op);
	}

		if (op == 1) { // OPITON 01 FOR CONSULT
			printf("\033[0;38;5;226m");
			printf("\n\n\n############################################\n");
			printf("##     MENU OPTIONS  - [01]CONSULT           ##\n");
			printf("##    [01] --> BY FLIGHT NUMBER              ##\n");
			printf("##    [02] --> BY DEPARTURE                  ##\n");
			printf("##    [03] --> BY ARRIVAL                    ##\n");
			printf("###############################################\n");
			printf("CHOOSE ONE OF THE OPTIONS: ");
			scanf("%d", &op2);

			while (op2 > 3) {
				printf("Invalid input... Try again\n");
				printf("CHOOSE ONE OF THE OPTIONS 1 - FLIGHT NUMBER |2 - DEPARTURE|3 - ARRIVAL: ");
				scanf("%d", &op2);
			}

			if (op2 == 1) {
				printf("\n\n01 - FLIGHTS NUMBER");
				
				for (i=0; i<=11; i++) {
					printf("\nFlight %d --> N° %d # available seats --> %d\n", i, flight_numb[i], seats[i]);
				}

			}
			if (op2 == 2) {
				printf("\n\n02 - DEPARTURES");

				for (i=0; i<=11; i++) {
					printf("\nFlight %d --> N° %d # departure --> %s # available seats --> %d\n", i, flight_numb[i], dep[i], seats[i]);
				}
			}	
			if (op2 == 3) {
				printf("\n\n03 - ARRIVALS");

				for (i=0; i<=11; i++) {
					printf("\nFlight %d --> N° %d # Arrival --> %s # available seats--> %d\n", i, flight_numb[i], arr[i], seats[i]);
				}
			}

		}

		if (op == 2) { // Make a reservation
			printf("\033[0;33m");
			printf("\n\n### AVAILABLE FLIGHTS ###\n");
			for (i=0; i<=11; i++) {
				printf("Flight --> N° %d\n", flight_numb[i]);
				printf("Departure --> %s", dep[i]);
				printf("Arrival --> %s", arr[i]);
				printf("Available Seats --> %d\n\n", seats[i]);
			}

			printf("\n\nType your flight number --> ");
			scanf("%d", &n_flight);

			i=0;
			while (i<=11) {
				if (n_flight == flight_numb[i] && seats[i] != 0) {
					printf("\nCONFIRM RESERVATION\n");
				}
				i++;
			}
			i=0;
			while (i<=11) {
				if (n_flight == flight_numb[i] && seats[i] == 0) {
					printf("FULL FLIGHT\n");
				}
				i++;
			}
			i=0;

		}
	
	}
	while (op != 3);

	printf("\n\n");
	system("pause");
	return 0;
}