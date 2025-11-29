#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    int upSpeed, downSpeed, desiredHeight;
    
    cout << "Skorost rosta: ";
    cin >> upSpeed;
    
    cout << "Umenshene: ";
    cin >> downSpeed;
    
    cout << "Hochu razmer: ";
    cin >> desiredHeight;
    
    int result = calculateDays(upSpeed, downSpeed, desiredHeight);
    
    if (result == -1) {
        cout << "Nuh uh!";
    } else {
        cout << "Cherez stoka dney: " << result;
    }
    
    return 0;
}
