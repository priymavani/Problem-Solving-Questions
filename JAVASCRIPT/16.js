// 16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.

var array = [3,5,9,1,7];

var count = 0;
var i =0 ;
for(i = 0;i<array.length ; i++){
    if(array[i] >= 0){
        count ++ ;
    }
}
if(count == array.length){
    console.log("true");
    // return true;
}
else{
    console.log("false");
    // return false ;
}