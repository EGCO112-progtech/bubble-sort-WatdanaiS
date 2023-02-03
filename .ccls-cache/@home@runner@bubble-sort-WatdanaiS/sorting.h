// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int a[], int l){ 
	int i, j, t, m, mi;
    // display(a,l);
  for(i=0;i<l;i++){
    if(a[i]<a[i+1]){
      
    }
  }
     
	
} 



void insertion(int a[],int n){


}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){
int i,j;
int sorted;
// how may pair to compare?
for(i=0;i<n-1;i++){
  sorted=1;
  for(j=0;j<n-1-i;j++){
    if(a[j]>a[j+1]){
     swap(&a[j],&a[j+1]);
      sorted=0;
     }
     display(a,n);
    }
  //if(sorted==0) break;
  }
 // printf("Result\n");
}

int IsPrime(int a){
  int p=0, i;
    for(i=1;i<=a;i++){
        if(a%i==0) p++;  
        }
    if(p==2)
      return 2;
  return 0;
}


