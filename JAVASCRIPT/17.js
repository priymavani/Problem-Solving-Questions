// 17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.

var array = [1,-2,3,-4,5,-6];

var positive = 0;
var negetive = 0;
var i =0;

for(i =0;i<array.length;i ++){
    if(array[i] >=0){
        positive ++;
    }else{
        negetive ++;
    }
}

console.log(positive);
console.log(negetive);



