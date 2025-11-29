#include "solution.h"

int calculateDays(int upSpeed, int downSpeed, int desiredHeight) {
    if (upSpeed >= desiredHeight) {
        return 1;
    }
    
    if (upSpeed <= downSpeed) {
        return -1;
    }
    
    int days = 0;
    int currentHeight = 0;
    
    while (currentHeight < desiredHeight) {
        days++;
        currentHeight += upSpeed;
        
        if (currentHeight >= desiredHeight) {
            return days;
        }
        
        currentHeight -= downSpeed;
    }
    
    return days;
}
