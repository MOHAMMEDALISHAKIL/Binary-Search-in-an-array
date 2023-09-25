#include <stdio.h>
main(){
  int arr[100],k,first,last,middle,b,n,item;
  printf("enter array size\n");
  scanf("%d",&n);
  printf("enter array elements\n",n);
  for (k=0;k<n;k++)
    scanf("%d",&arr[k]);
  for (k=0;k<n;k++){
    for(int j=0;j<n;j++){
        if(arr[k]<arr[j]){
            b=arr[k];
            arr[k]=arr[j];
            arr[j]=b;
        }}}
    printf("array\n");
    for (k=0;k<n;k++){
    printf("%d\n", arr[k]);}
  printf("Enter value to find\n");
  scanf("%d", &item);
  first=0;
  last=n;
  middle=first+last)/2;
  while (first<= last){
    if (arr[middle] < item)
      first=middle+1;
    else if(arr[middle]==item){
      printf("%d found at location %d.\n", item, middle+1);
      break;
    }
    else
      last = middle - 1;
    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found%d isn't present in the list.\n", item);
}
