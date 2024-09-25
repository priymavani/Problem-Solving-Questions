
// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"


#include <stdio.h>
void  action(char light[]){
    if(light == "red"){
        printf("Stop");
    }else if(light == "yellow"){
        printf("Slow Down");
    }else if(light == "green"){
        printf("Go");
    }
}
int main() {
    action("pink");

    return 0;
}