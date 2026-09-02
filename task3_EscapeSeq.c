#include<stdio.h>
#include<string.h>
typedef struct
{
    int id;
    char name[70];
    char department[70];
    int pointRoute;
} Student;

int main(){
    Student s1;
    printf("\nHello please enter the following details\n");
    printf("What is your name ? ");
    fgets(s1.name,sizeof(s1.name),stdin);
    s1.name[strcspn(s1.name,"\n")] = '\0';

    printf("\nWhat is your id : ");
    scanf("%d", &s1.id);
    getchar();

    printf("\nFrom which department you belong ? : ");
    fgets(s1.department,sizeof(s1.department),stdin);
    s1.department[strcspn(s1.department,"\n")] = '\0';

    printf("\nAnd finally from Which route you come to uni ? : ");
    scanf("%d", &s1.pointRoute);

    printf("============================\n");
    printf("\nUsing BackSlah \\n");
    printf("\nname = %s\n", s1.name);
    printf("id = %d\n", s1.id);
    printf("department = %s\n", s1.department);
    printf("Point Route = %d\n", s1.pointRoute);

    printf("\n============================\n");
    printf("\nUsing BackSlah - t \\t\n");
    printf("\nname = %s\t", s1.name);
    printf("id = %d\t", s1.id);
    printf("department = %s\t", s1.department);
    printf("Point Route = %d\t", s1.pointRoute);

    printf("\n============================\n");
    printf("\nUsing Double BackSlah Quotes \\""\n");
    printf("\n\"name = %s\"", s1.name);
    printf("\"id = %d\"", s1.id);
    printf("\"department = %s\"", s1.department);
    printf("\"Point Route = %d\"", s1.pointRoute);

    printf("\n============================\n");
    printf("\nUsing Single BackSlah Quotes \\""\n");
    printf("\n\'name = %s\'", s1.name);
    printf("\'id = %d\'", s1.id);
    printf("\'department = %s\'", s1.department);
    printf("\'Point Route = %d\'", s1.pointRoute);

    printf("\n============================\n");
    printf("\nUsing Vertical BackSlah \\v\n");
    printf("\nname = %s\v", s1.name);
    printf("id = %d\v", s1.id);
    printf("department = %s\v", s1.department);
    printf("Point Route = %d\v", s1.pointRoute);

    return 0;
}