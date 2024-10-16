// 20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].


var array = [80,30,70,50,20];
var min = array[0];
var max = 0;
var i =0 ;
for(i =0 ; i<array.length ; i++){
    if(min > array[i]){
        min = array[i];
    }
    if(max < array[i]){
        max = array[i];
    }
}

console.log(max-min);