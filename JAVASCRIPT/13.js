// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

var  arr = [1,2,3,4,5];
   var  num = 3;
   var  i = 0,count=0;
   var  length = arr.length;
   for(i=0;i<length;i++){
    if(arr[i] == num){
      count ++;
        
    }
}
   if(count >0){
        console.log("true");
   }else{
        console.log("flase");
   }