// 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].


var arr = [1,2,3,4];
var i = 0;
var length = arr.length;
   for(i=0;i<length;i++){
       arr[length-i]=arr[length-i-1];
   }

   arr[0]=0;
     

       console.log(arr);


   

