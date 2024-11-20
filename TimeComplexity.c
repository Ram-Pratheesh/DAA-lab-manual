1)
#include<stdio.h>
void function(int n){
    int count=0;
    int i = 1;
    count++;
    int s = 1;
    count++;
    while(s<=n){
        count++;
        i++;
        count++;
        s+=i;
        count++;
    }
    count++;
    printf("%d",count);
}
int main(){
    int a;
    scanf("%d",&a);
    function(a);
}

2)
#include<stdio.h>
void func(int n){
    int c=0;
    if(n==1){
        c++;
    //printf("*");
    c++;
}
else{
    c++;
    for(int i=1;i<=n;i++){
        c++;
        for(int j=1;j<=n;j++){
            c++;
            //printf("*");
            c++;
            //printf("*");
            c++;
            break;
        }c++;
    }c++;
}
    printf("%d",c);
}
int main(){
    int a;
    scanf("%d",&a);
    func(a);
}

3)
#include<stdio.h>
void Factor(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        c++;
        if(n%i==0){
            c++;
            //printf("%d ",i);
        }c++;
    }c++;
    printf("%d",c);
}
int main(){
    int a;
    scanf("%d",&a);
    Factor(a);
}

4)
#include<stdio.h>
int m=0;
void function(int n){
    int c=0;
    m++;
    for(int i=n/2;i<n;i++){
        m++;
        for(int j=1;j<n;j=2*j){
            m++;
            for(int k=1;k<n;k=k*2){
                m++;
                c++;
                m++;
                
            }
            m++;
        }
        m++;
    }
    m++;
    printf("%d",m);
}
int main(){
    int a;
    scanf("%d",&a);
    function(a);
}
5)
#include<stdio.h>
int c=0;
void reverse(int n){
    int rev=0,remainder;
    c++;
    while(n!=0){
        c++;
        remainder=n%10;
        c++;
        rev=rev*10+remainder;
        c++;
        n/=10;
        c++;
    }
    c++;
    //print(rev);
    c++;
    printf("%d",c);
}
int main(){
    int a;
    scanf("%d",&a);
    reverse(a);
}
