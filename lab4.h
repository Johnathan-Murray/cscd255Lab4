#ifndef LAB4_H
#define LAB4_H

#include <stdio.h>
#include <stdlib.h>

int readMeterValue(char * str);
double determineUsage(int begMeterValue, int endMeterValue);
char readCustomerCode();
double determineCost(double usage, char customerCode);
void printResults(double cost, double usage, char customerCode, int begMeterValue, int endMeterValue);


#endif