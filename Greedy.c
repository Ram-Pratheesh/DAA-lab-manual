EX.NO:1-G-Coin Problem

#include<stdio.h>
int min(int v){
    int a[]={1,2,5,10,20,50,100,500,1000};
    int n = sizeof(a)/sizeof(a[0]);
    int c=0;
    for(int i=n-1;i>0;i--){
        int curr=v/a[i];
        c+=curr;
        v=v%a[i];
    }
    return c;
}
int main(){
    int v;
    scanf("%d",&v);
    int r=min(v);
    printf("%d",r);
}

EX.NO:2-G-Cookies Problem

#include<stdio.h>
int asc1(int n,int a[],int c,int b[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(b[j]>b[j+1]){
                int tem=b[j];
                b[j]=b[j+1];
                b[j+1]=tem;
}
}
}
int c1=0;
for(int i=0;i<n;i++){
    for(int j=0;j<c;j++){
        if(b[j]==a[i]){
            c1++;
        }
        
    }
}
  return c1;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    int c;
    scanf("%d",&c);
    int b[c];
    for(int i=0;i<c;i++){
        scanf("%d",&b[i]);
    }
    int r = asc1(n,a,c,b);
    printf("%d",r);
}

EX.NO:3-G-Burger Problem

#include<stdio.h>
#include<math.h>
int min(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]<a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
    sum+=pow(n,i)*a[i];
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int r=min(a,n);
    printf("%d",r);
}

EX.NO:4-G-Array Sum max problem

#include<stdio.h>
int asc(int n,int a[]){
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[j-1]>a[j]){
                int temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i]*i;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int r = asc(n,a);
    printf("%d",r);
}

EX.NO:5-G-Product of Array elements-Minimum

#include<stdio.h>
int asc(int n,int a[],int b[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(b[j]<b[j+1]){
                int tem=b[j];
                b[j]=b[j+1];
                b[j+1]=tem;
            }
            
        }
        
    }
    int sum=0;
    for(int i=0;i<n;i++){
            sum+=a[i]*b[i];
        }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int r = asc(n,a,b);
    printf("%d",r);
}
