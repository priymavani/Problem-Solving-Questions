// 11. Remove duplicate elements from the array arr = [1, 2, 2, 3, 4, 4, 5] and print the updated array.



var arr1 =[1,2,2,3,3,4];
   
var len1 = arr1.length;
var arr2= [];
// arr2[0]=arr1[0];
var len2 = 0;

var  i =1;
var j =0;
for(i = 0;i<len1;i++){
var  count = 0;
  for(j=0;j<len2;j++){
    
      if(arr1[i] != arr2[j]){
          count++;
      }
  }
  if(count == len2){
      arr2[len2]=arr1[i];
      len2 ++;
  
   }
}
console.log(arr2)