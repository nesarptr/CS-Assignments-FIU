#include <stdio.h>
#include <stdlib.h>

struct Student
{
  int Student_id;
  float marks;
};


int main () {
  struct Student *students = (struct Student *) malloc(100 * sizeof(struct Student));
  float total_marks = 0;

  printf("Enter IDs for 100 Students\n");
  for (int i = 0; i < 100; i++) {
    scanf("%d", &(students+i)->Student_id);
  }
  printf("\nEnter marks for 100 Students\n");
  for (int i = 0; i < 100; i++) {
    scanf("%f", &(students+i)->marks);
    total_marks += (students+i)->marks;
  }
  printf("\nThe IDs and marks of 100 students: \n");
  for (int i = 0; i < 100; i++) {
    printf("%d. ID: %d, marks: %f\n", i+1, (students+i)->Student_id, (students+i)->marks);
  }
  printf("The Average mark of all students is %f", total_marks/100);

  free(students);
  
  return 0;
}