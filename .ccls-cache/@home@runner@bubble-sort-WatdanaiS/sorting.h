// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int a[], int l){ 
	int i, j, m, mi;
    // display(a,l);
  
  for(j=0;j<l-1;j++){
    m=a[j];
    mi=j;
    }
  for(i=j+1;i<l;i++){
    if(m>a[i]){
      m=a[i];
      mi=i;
    }
    
  }
  swap(&a[j],&a[mi]);
  printf("Min is %d\n",m);
     
	
} 



void insertion(int x[],int n){
  
  int j, i;
  for(j=1;j<n;j++){
  int insert=x[j];
  for(i=j-1;i>=0;i--){
    if(insert<x[i])
      break;
    else
      x[i+1]=x[i];
    display(x,n);
    }
  x[i+1]=insert;
    display(x,n);
    printf("\n");
  }
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
     //display(a,n);
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


