#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float sum = numberset[0], max = numberset[0], min = numberset[0];
    for(int i =1; i<setlength; i++){
        sum+ = numberset[i];
        if(max < numberset[i]){
            max = numberset[i];
        }
        if(min > numberset[i]){
            min = numberset[i];
        }
    }
    s.average = sum/setlength;
    s.maximum = max;
    s.minimum = min;
    
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
