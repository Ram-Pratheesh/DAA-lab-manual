EX.NO:1-Number of Zeros in a Given Array

#include<stdio.h>
int countZeros(int a[], int l, int h) {
    if (l > h) {
        return 0;
    }
    if (a[l] == 0) {
        return 1 + countZeros(a, l + 1, h);
    } else {
        return countZeros(a, l + 1, h);
    }
}

int main() {
    int m;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    int result = countZeros(a, 0, m - 1);
    printf("%d", result);
    return 0;
}

EX.NO:2-Majority Element

#include<stdio.h>
int findmajorityelement(int nu[], int n) {
    int count = 0;
    int candidate = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nu[i];
        }
        count += (nu[i] == candidate);
    }
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nu[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int nu[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nu[i]);
    }

    int m = findmajorityelement(nu, n);
    printf("%d\n", m);

    return 0;
}

EX.NO:3-Finding Floor Value

#include<stdio.h>
int findfloor(int a[], int l,int h,int x){
    int r=0;
    while(l<=h){
        int mid = (l+h)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x){
            r=a[mid];
            l=mid+1;
        }
        else{
            h=mid-1;
        }
      
    }
    return r;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int result  = findfloor(a,0,n-1,x);
    printf("%d",result);
  
    
}

EX.NO:4-Two Elements sum to x

#include<stdio.h>
void findsum(int a[],int low,int high,int x){
    int sum=a[low]+a[high];
    if(low>high){
        printf("No");
    }
    else{
    if(sum==x){
        printf("%d",a[low]);
        printf("\n%d",a[high]);
    }
    else if(sum<x){
     findsum(a,low+1,high,x);
}
   else{
       findsum(a,low,high-1,x);
   }
}
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    findsum(a,0,n-1,x);
}

EX.NO:5-Implementation of Quick Sort

#include<stdio.h>
void swap(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}
int part(int a[],int low,int high){
    int pi=a[low];
    int i=low;
    int j=high;
    
    while(i<j){
        while(a[i]<=pi&&i<=high-1){
            i++;
        }
        while(a[j]>pi&&j>=low){
            j--;
        }
        if(i<j){
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[j],&a[low]);
    return j;
}
void quicksort(int a[],int low,int high){
    if(low<high){
    int p1=part(a,low,high);
    
    quicksort(a,low,p1-1);
    quicksort(a,p1+1,high);
    
}
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
}



