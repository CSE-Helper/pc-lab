#include <stdio.h>
struct traveller{
  int train_no;
  int coach_no;
  int seat_no;
  int age;
  int date;
  char source[64];
  char destination[64];
  char gender[64];
  char name[64];
}a[3];
int main() {
  int i;
  for (i = 0; i < 3; i++) {
    printf("\nEnter detail of traveller #%d\n", (i+1));

    printf("Enter Name: ");
    scanf("%s", a[i].name);

    printf("Enter Gender: ");
    scanf("%s", a[i].gender);

    printf("Enter Age: ");
    scanf("%d", &a[i].age);

    printf("Enter Departure Date: ");
    scanf("%d %d %d", &a[i],&a[i],&a[i].date);

    printf("Enter Source: ");
    scanf("%s", a[i].source);

    printf("Enter Destination: ");
    scanf("%s", a[i].destination);

    printf("Enter Train number: ");
    scanf("%d", &a[i].train_no);

    printf("Enter Coach number: ");
    scanf("%d", &a[i].coach_no);

    printf("Enter Seat number:");
    scanf("%d", &a[i].seat_no);
  }
  for (i = 0; i < 3; i++) {
    printf("\nTraveller #%d Detail:\n", (i+1));
  printf("Name: %s\n", a[i].name);
  printf("Gender: %s\n", a[i].gender);
  printf("Age: %d\n", a[i].age);
  printf("Departure date: %d\n", a[i].date);
  printf("Source: %s\n", a[i].source);
  printf("Destination: %s\n", a[i].destination);
  printf("Train Number: %d\n", a[i].train_no);
  printf("Coach Number: %d\n", a[i].coach_no);
  printf("Seat Number: %d\n", a[i].seat_no);
  }
  return 0;
  }
