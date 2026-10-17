#include <stdio.h>

struct drivers
{
    char drivername[50];
    int DLno;
    char route[80];
    int totaldistance;
};

int main(void)
{
    struct drivers d1,d2,d3;

    printf("Enter the information of the Drivers:\n\n");

    printf("Enter the informations of first Driver:\n");
    printf("Enter the name of the first driver:\n");
    if (scanf("%40s",d1.drivername) != 1) return 1;
    printf("Enter the driving license no. of the first driver:\n");
    if (scanf("%d",&d1.DLno) != 1) return 1;
    printf("Enter the route of the first driver:\n");
    if (scanf("%40s",d1.route) != 1) return 1;
    printf("Enter the total distance in KM for the first driver:\n");
    if (scanf("%d",&d1.totaldistance) != 1) return 1;

    printf("\nEnter the informations of second Driver:\n");
    printf("Enter the name of the second driver:\n");
    if (scanf("%40s",d2.drivername) != 1) return 1;
    printf("Enter the driving license no. of the second driver:\n");
    if (scanf("%d",&d2.DLno) != 1) return 1;
    printf("Enter the route of the second driver:\n");
    if (scanf("%40s",d2.route) != 1) return 1;
    printf("Enter the total distance in KM for the second driver:\n");
    if (scanf("%d",&d2.totaldistance) != 1) return 1;

    printf("\nEnter the informations of third Driver:\n");
    printf("Enter the name of the third driver:\n");
    if (scanf("%40s",d3.drivername) != 1) return 1;
    printf("Enter the driving license no. of the third driver:\n");
    if (scanf("%d",&d3.DLno) != 1) return 1;
    printf("Enter the route of the third driver:\n");
    if (scanf("%40s",d3.route) != 1) return 1;
    printf("Enter the total distance in KM for the third driver:\n");
    if (scanf("%d",&d3.totaldistance) != 1) return 1;

    printf("\n\nInformation of the first driver:\n");
    printf("Name of the first driver: %s\n",d1.drivername);
    printf("Driving license of the first driver: %d\n",d1.DLno);
    printf("Route of the first driver: %s\n",d1.route);
    printf("Total distance of the first driver in kM: %d\n\n",d1.totaldistance);

    printf("Information of the second driver:\n");
    printf("Name of the second driver: %s\n",d2.drivername);
    printf("Driving license of the second driver: %d\n",d2.DLno);
    printf("Route of the second driver: %s\n",d2.route);
    printf("Total distance of the second driver in kM: %d\n\n",d2.totaldistance);

    printf("Information of the third driver:\n");
    printf("Name of the third driver: %s\n",d3.drivername);
    printf("Driving license of the third driver: %d\n",d3.DLno);
    printf("Route of the third driver: %s\n",d3.route);
    printf("Total distance of the third driver in kM: %d\n\n",d3.totaldistance);

    return 0;

}
