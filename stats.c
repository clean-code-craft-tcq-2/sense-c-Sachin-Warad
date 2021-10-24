#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    
    if(setlength !=0){
        float sum = numberset[0], max = numberset[0], min = numberset[0];
        for(int i =1; i<setlength; i++){
            sum += numberset[i];
            if(max < numberset[i]){
                max = numberset[i];
            }
            if(min > numberset[i]){
                min = numberset[i];
            }
        }
        s.average = sum/setlength;
        s.max = max;
        s.min = min;
    }   
    else{
    s.average = NAN;
    s.max = NAN;
    s.min = NAN;
    }
    return s;
}
