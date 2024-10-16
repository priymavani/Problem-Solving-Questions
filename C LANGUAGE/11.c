// 11. Remove duplicate elements from the array arr = [1, 2, 2, 3, 4, 4, 5] and print the updated array.


 #include <stdio.h>
int main()
{
   int arr1[] ={1,2,2,3,3,4};
   
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[10]= {};
    // arr2[0]=arr1[0];
    int len2 = 0;
    
     int i ;
    int j ;
  for(i = 0;i<len1;i++){
      int count = 0;
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
  
for(int z =0;z<len2;z++){
  printf("%d\n",arr2[z]);
}
}