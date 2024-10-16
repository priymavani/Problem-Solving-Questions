// 19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

var array = [1,2,3,4,5];

var count = 0;
var i =0;

for(i =0 ; i<array.length ; i++){
    if(array[i] > array[i +1]){
        count ++ ;
    }
}

if(count == 0 ){
    console.log("true");
}else{
    console.log("false");
}
