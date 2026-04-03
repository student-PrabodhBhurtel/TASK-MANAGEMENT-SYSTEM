#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct task{
int id;
chat name[50];
char deadline[50];
char status[50];
}t;

void addTask();
void displayTask();
void searchTask();
void updateTask();
void deleteTask();

int main(){
 char ch;
 printf("\n=====================================\n");
        printf("      TASK MANAGEMENT SYSTEM\n");
        printf("=====================================\n");
        printf("1. Add Task\n");
        printf("2. Display Tasks\n");
        printf("3. Search Task\n");
        printf("4. Update Task\n");
        printf("5. Delete Task\n");
        printf("6. Exit\n");
 printf("Enter your choice:");
 scanf("%d",&choice);

 switch(choice){
  case 1:
  addTask();
  break;
   case 2:
  displayTask();
  break;
   case 3:
  searchTask();
  break;
   case 4:
  updateTask();
  break;
   case 5:
  deleteTask();
  break;
     case 6:
  printf("Exiting Program...\n");
  break;
   Default:
  printf("Invalid Choice!!! Please try again.\n");  
 }
 return 0;
}

