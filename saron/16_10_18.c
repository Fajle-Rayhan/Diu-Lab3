#include<stdio.h>

int  main(){int a, b, c, d, result;
printf("Enter the marks of Lab final exam out of 40:");
scanf("%d", &a);
printf("\n Enter the marks of Lab final report out of 25:");
scanf("%d", &b);
printf("\n Enter the marks of Lab performance out of 25:");
scanf("%d", &c);
printf("\n Enter the marks of Attendance out of 10:");
scanf("%d", &d);
result = a+b+c+d;
printf("%d+ %d+ %d+ %d= %d", a, b, c, d, result );

return 0;

}




