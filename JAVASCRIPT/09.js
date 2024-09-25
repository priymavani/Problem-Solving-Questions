//9. Sort an Array in Ascending Order
function sort(arr){
    console.log(arr.sort());
}
sort([4,2,8,5,1]);

// or


var arr=[4,2,8,5,1];
var i=0,j=0;
var len = arr.length;
for(i=0;i<len;i++){
    for(j = 0;j<len;j++){
        if(arr[j]>arr[i]){
            var temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
console.log(arr);