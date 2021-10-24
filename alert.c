#include "stats.h"
#include "alert.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats){
  if(max > computedStats.max){
      emailAlerter();
      ledAlerter();
  }
}

void emailAlerter(void){
    emailAlertCallCount = 1;
}

void ledAlerted(void){
    ledAlertCallCount = 1;
}
