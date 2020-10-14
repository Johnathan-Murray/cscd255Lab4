#include "lab4.h"

int readMeterValue(char * str)
{
int value;
printf("please enter %s meter value: ", str);
scanf("%d", &value);
while(fgetc(stdin)!='\n'){}

return value;
}

double determineUsage(int begMeterValue, int endMeterValue)
{
  return 0.0;
}

char readCustomerCode()
{
  return '0';
}

double determineCost(double usage, char customerCode)
{
  return 0.0;
}

void printResults(double cost, double usage, char customerCode, int begMeterValue, int endMeterValue)
{

}
