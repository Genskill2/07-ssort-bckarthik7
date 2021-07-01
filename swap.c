void swap_max(int arr[], int l, int n){
  int b,c, large = arr[n];
  for (int i=n;i<l;i++)
    if(arr[i]>large)
      large = arr[i];
  for (int i=n;i<l;i++)
    if(large==arr[i])
      c=i;
  b=arr[n];
  arr[n]=arr[c];
  arr[c]=b;
}
void ssort(int arr[], int l){
  for(int i=0;i<l;i++)
    swap_max(arr,l,i);
}
