 #include <stdio.h>
int main()
{
    int week;
    printf("enter a week:\n");
    scanf("%d",&week);
    switch(week)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("wdenesday\n");
        break;       
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("invalid months\n");
        break;
    }
    }