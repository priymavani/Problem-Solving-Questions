//10. Given an array of integers, count how many numbers are even and how many are odd.
var arr=[1,2,3,4,5];
var even=0;
var odd=0;
for(i=0;i<arr.length;i++){
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}
console.log("even=",even);
console.log("odd=",odd);