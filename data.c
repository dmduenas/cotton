#include <stdio.h>
int main (void){
    char name[100];
    char region[100];
    char profession[100];
    int age;
    int unit;
    char status[100];

    FILE *fh_write;
    fh_write = fopen("data.txt", "w");
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Region: ");
    fgets(region, sizeof(region), stdin);
    printf("Enter Profession: ");
    fgets(profession, sizeof(profession), stdin);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Unit Number: ");
    scanf("%d", &unit);
    getchar();
    printf("Enter Status: ");
    fgets(status, sizeof(status), stdin);

    fprintf(fh_write, "User Data\n\n");
    fprintf(fh_write, "Name: %s", name);
    fprintf(fh_write, "Region: %s", region);
    fprintf(fh_write, "Profession: %s", profession);
    fprintf(fh_write, "Age: %d\n", age);
    fprintf(fh_write, "Unit: %d\n", unit);
    fprintf(fh_write, "Status: %s", status);

    fclose(fh_write);
    return 0;
}