#include <stdio.h>
struct student {
  char firstname[64];
  char lastname[64];
  char id[64];
  int score;
};
void displayDetail(struct student std);
int main(void) {
  struct student stdArr[3];
  int i;
  for (i = 0; i < 3; i++) {
    printf("Enter detail of student #%d\n", (i+1));
    printf("Enter First Name: ");
    scanf("%s", stdArr[i].firstname);
    printf("Enter ID: ");
    scanf("%s", stdArr[i].id);
    printf("Enter Score: ");
    scanf("%d", &stdArr[i].score);
  }
  for (i = 0; i < 3; i++) {
    printf("\nStudent #%d Detail:\n", (i+1));
    displayDetail(stdArr[i]);
  }
  return 0;
}
  void displayDetail(struct student std) {
  printf("Firstname: %s\n", std.firstname);
  printf("ID: %s\n", std.id);
  printf("Score: %d\n", std.score);
  }
