//7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action
function signal(signal){
    if(signal=="red"){
        console.log("STOP");
    }
    else if(signal=="yellow"){
        console.log("SLOW DOWN");
    }
    if(signal=="green"){
        console.log("GO");
    }
}
signal(green);
