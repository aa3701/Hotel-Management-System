#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int price; int rooms;
int noOfRms; int noOfDays;
int day1, mon1, year1,day2, mon2, year2;
int day_diff, mon_diff, year_diff;

int main()
{
printf("WELCOME TO HOTEL FELIX FELICIS\n");
printf("One of the best hotels located in the heart of the city. The hotel is well equipped with all the general amenities and has well furnished rooms. The amenities include free internet, 24 hour room service, laundry service and complimentary breakfast");
char name[25]; int checkin, checkout;
printf("\nEnter your name:\t");
scanf("%s", name);
printf("Enter Check-in and Check-out date:\n");
    printf("Enter Check-in date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day1, &mon1, &year1);
    printf("Enter Check-out date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day2, &mon2, &year2);
    
    if(day2 < day1)
    {   
        if (mon2 == 3)
        {
            //  check whether year is a leap year
            if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0)) 
            {
                day2 += 29;
            }

            else
            {
                day2 += 28;
            }                        
        }

        // borrow days from April or June or September or November
        else if (mon2 == 5 || mon2 == 7 || mon2 == 10 || mon2 == 12) 
        {
           day2 += 30; 
        }

        // borrow days from Jan or Mar or May or July or Aug or Oct or Dec
        else
        {
           day2 += 31;
        }

        mon2 = mon2 - 1;
    }

    if (mon2 < mon1)
    {
        mon2 += 12;
        year2 -= 1;
    }       

    day_diff = day2 - day1;
    mon_diff = mon2 - mon1;
    year_diff = year2 - year1;
    noOfDays=day_diff;

int r; //int price;
printf("Types of Rooms\n");
printf("\n1.Executive room\n2.Family room\n3.Suite room\n4.Pool suite room\n");
scanf("%d",&r);

switch(r)
{
case 1:
printf("\nYou choose Executive room\n");
printf( "Executive rooms are one night-stop rooms that encompasses all modern amenities and includes one queen sized bed");
price=3000;
break;
case 2:
printf("\nYou choose Family room\n");
printf("Family rooms can accommodate 4 people and twin beads will be provided");
price=5000;
break;
case 3:
printf("\nYou choose Suite room\n");
printf("Suite rooms are luxurious and a great pick to enjoy your vacation! It consists of 3 rooms and can occupy upto 6 people");
price=7000;
break;
case 4:
printf("\nYou choose Pool Suite room\n");
printf("Pool suite rooms are built exclusively for customers who would love their own private space with all the recreational facilities. It includes a private pool and 4 rooms");
price=10000;
break;
}
Default:
{
    printf("Those are the only 4 rooms we have. Please select from those.");
}

printf("\nHow many rooms do you want?\n");
scanf("%d",&noOfRms);

struct customer {
    char firstName[50];
    int rooms;
int totalpeople;
   int adults;
  int children;
   } s[noOfRms];

//int main()
//{
int i;
        printf("Enter information of Customer:\n");
    // storing information
    //int i;
    for (i = 0; i < noOfRms; ++i) {
        s[i].rooms= i + 1;
        printf("\nFor room number %d,\n", s[i].rooms);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
printf("Enter Total number of people: ");
        scanf("%d", &s[i].totalpeople);
        printf("Enter number of adults: ");
        scanf("%d", &s[i].adults);
      printf("Enter number of children: ");
        scanf("%d", &s[i].children);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < noOfRms; ++i) {
        printf("\nRoom number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
printf("Total number of people in the room: %d\n", s[i].totalpeople);
        printf("Number of adults: %d\n", s[i].adults);
  printf("Number of children: %d", s[i].children);
        printf("\n");
    }
//}
int billamt= price*noOfRms*noOfDays;

{
    printf("\t\t\t________________________________________________________________________________\t\n");
    printf("\t\t\t|Billing Date: ");
    printf("\t\t\t\t\t\tCheck-In Time: 9:30 a.m|\n");
    printf("\t\t\t|\t\t\t\t\t\t\tCheck-Out Time: 11 a.m |");
    printf("\t\t\t\t\t\t\t\t\t\n\t\t\t|                                                                              |");
    printf("\n\t\t\t|\t\t*************************************************              |\n");
	printf("\t\t\t|\t\t*************************************************              |\n");
	printf("\t\t\t|\t\t**                                             **              |\n");
	printf("\t\t\t|\t\t**          WELCOME TO FELIX FELICIS           **              |\n");
	printf("\t\t\t|\t\t**                                             **              |\n");
	printf("\t\t\t|\t\t*************************************************              |\n");
	printf("\t\t\t|\t\t*************************************************              |\n");
    printf("\t\t\t|                                                                              |\t\n");
    printf("\t\t\t|Name of the customer:                                                         |%s\n",name);
    printf("\t\t\t|Date of Arrival: %d/%d/%d\n",day1,mon1,year1);
    printf("\t\t\tDate of Departure: %d/%d/%d\n",day2,mon2,year2);
    printf("\t\t\t|Duration Of Stay:                                                             |%d\n",noOfDays);
    printf("\t\t\t|Room No.(s):                                                                  |%d\n",noOfRms);
	printf("\t\t\t|Total amount :                                                                |%d\n",billamt);
	printf("\t\t\t|\t\t\tWe Look Forward To Seeing You                          |\n");




    
    printf("\t\t\t|                                                                              |\n");
    printf("\t\t\t________________________________________________________________________________");
    printf("\t\t--------------------------------------------------------------------------------\t\n");
    printf("\t\t|\tBilling Date: ");
    printf("\t\t\t\t\t\tCheck-In Time: 9:30 a.m\n");
    printf("\t\t\t\t\t\t\t\t\t\tCheck-Out Time: 11 a.m");
    printf("\n\n|\t\t\t\t*************************************************\n");
	printf("\t\t|\t\t*************************************************\n");
	printf("\t\t|\t\t**                                             **\n");
	printf("\t\t|\t\t**          WELCOME TO FELIX FELICIS           **\n");
	printf("\t\t|\t\t**                                             **\n");
	printf("\t\t|\t\t*************************************************\n");
	printf("\t\t|\t\t*************************************************\n");
    printf("\t\t|\t\t\n");
    printf("\t\t|\tName of the customer:%s\n",name);
    printf("\t\t|\tDate of Arrival:%d ",checkin);
    printf("\t\t|\tDate of Departure:%d\n",checkout);
    printf("\t\t|\tDuration Of Stay:%d\n",noOfDays);
    printf("\t\t|\tRoom No.(s):%d\n",noOfRms); 
	printf("\t\t|\tTotal amount :%d\n",billamt);
	printf("\t\t|\t\t\t\tWe Look Forward To Seeing You");
}
return 0;
}