#include "stdio.h"
#include "stats.h"
#include "alert.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats){
  if(computedStats.max > maxThreshold){
      emailAlerter();
      ledAlerter();
  }
}

void emailAlerter(void){
    emailAlertCallCount = 1;
}

void ledAlerter(void){
    ledAlertCallCount = 1;
}
