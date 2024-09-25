//8. Find the Average of an Array.
function averageis(arr){
    var sum = 0;
    for(i=0;i<arr.length;i++){
        sum=sum+arr[i];
    }
    var average=sum/arr.length;
    console.log(average);
}
averageis([1,2]);
