1)

#include<stdio.h>
void duplicate(int n,int a[]){
    int h[n];
    for(int i=0;i<n;i++){
        h[i]=0;
    }
    for(int i=0;i<n;i++){
        if((h[a[i]])==1){
            printf("%d",a[i]);
        }
        else{
            h[a[i]]=1;
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
    duplicate(n,a);
}

2)

#include<stdio.h>
int duplicate(int n,int a[]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                return a[i];
            }
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int result=duplicate(n,a);
    printf("%d",result);
}

3)

#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int m;
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    int n;
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                printf("%d ",a[i]);
            }
        }
    }
}

4)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    int m;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    int n;
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }


    int h[1000000] = {0}; 
    for (int i = 0; i < m; i++) {
        h[a[i]] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (h[b[i]] == 1) {
            printf("%d ", b[i]);
            h[b[i]] = 0;  
        }
    }

    return 0;
}

5)

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && (a[j] - a[i] == k)) {
                printf("1\n");
                return 0;
            }
        }
    }

    printf("0\n");
}


6)

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    int i = 0, j = 1;
    while (i < n && j < n) {
        if (i != j && a[j] - a[i] == k) {
            printf("1\n");
            return 0;
        } else if (a[j] - a[i] < k) {
            j++;
        } else {
            i++;
        }
    }

    printf("0\n");
    return 0;
}
