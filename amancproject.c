#include <stdio.h>
#include <string.h>

struct UserDetails {
    char name[20];
    char gender[10];
    int age;
};

void Timetable(char destination[]);

int main() {
    char destination[20];
    char date[15];
    int timeChoice;
    struct UserDetails user;
    printf("Current location: Delhi\n");
    printf("destination (Jaipur, Chandigarh, Dehradun, Haridwar): ");
    scanf("%s", &destination);
    if (strcmp(destination, "Jaipur") == 0 || strcmp(destination, "Chandigarh") == 0 || strcmp(destination, "Dehradun") == 0 || strcmp(destination, "Haridwar") == 0 || strcmp(destination, "jaipur") == 0 || strcmp(destination, "chandigarh") == 0 || strcmp(destination, "dehradun") == 0 || strcmp(destination, "haridwar") == 0) {
        printf("Enter date (DD-MM-YYYY):\n ");
        scanf("%s", &date);
        Timetable(destination);
        printf("Select a time (1-4): \n");
        scanf("%d", &timeChoice);

        switch (timeChoice) {
            case 1:printf(" selected date %s.\n", date);
                break;
            case 2:printf(" selected date %s.\n", date);
                break;
            case 3:printf(" selected date %s.\n", date);
                break;
            case 4: printf(" selected date %s.\n", date);
                break;
            default:printf("Invalid choice.\n");
                return 1;
        }
        printf("\nEnte  name: ");
        scanf(" %s",&user.name);
        printf(" gender (Male/Female/Other): ");
        scanf("%s", &user.gender);
        printf(" age: ");
        scanf("%d", &user.age);
        
        printf("\nBooking details:\n");
        printf("Name: %s\n", user.name);
        printf("Gender: %s\n", user.gender);
        printf("Age: %d\n", user.age);
        printf("Travel Details: %s to %s on %s .\n ", "Delhi", destination, date);
        printf("booking is confirmed\n");

    }
    else {
        printf("Invalid destination.\n");
    }
    return 0;
}

void Timetable(char destination[]) {
    printf("Bus Timetable for %s:\n", destination);
    printf("1. 08:00 AM\n");
    printf("2. 12:00 PM\n");
    printf("3. 04:00 PM\n");
    printf("4. 08:00 PM\n");
}
