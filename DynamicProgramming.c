EX.NO:1-DP-Playing with Numbers

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long int a[n+1];
    for(int i=0;i<n+1;i++){
        a[i]=0;
    }
    a[0]=1;
    for(int i=1;i<n+1;i++){
        if(i-1>=0){
            a[i]+=a[i-1];
        }
        if(i-3>=0){
            a[i]+=a[i-3];
        }
    }
    printf("%lld",a[n]);
}

EX.NO:2-DP-Playing with chessboard

#include<stdio.h>
int max(int a,int b){
    return(a>b?a:b);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int d[n][n];
    d[0][0]=a[0][0];
    //first row
    for(int j=1;j<n;j++){
        d[j][0]=d[j-1][0]+a[j][0];
    }
    //first column
    for(int i=1;i<n;i++){
        d[0][i]=d[0][i-1]+a[0][i];
    }
    //filling 
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            d[i][j]=max(d[i-1][j],d[i][j-1])+a[i][j];
        }
    }
    printf("%d",d[n-1][n-1]);
}

EX.NO:3-DP-Longest Common Subseque

#include<string.h>
#include<stdio.h>

int max(int a,int b){
    return(a>b?a:b);
}
int main(){
    char x[10];
    char y[10];
    scanf("%s",x);
    scanf("%s",y);
    int m=strlen(x);
    int n=strlen(y);
    int d[10][10];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0){
                d[i][j]=0;
            }
            else if(x[i-1]==y[j-1]){
                d[i][j]=1+d[i-1][j-1];
            }
            else{
                d[i][j]=max(d[i-1][j],d[i][j-1]);
            }
            }
        
        }
        printf("%d",d[m][n]);
    }

EX.NO:4-DP-Longest non-decreasing Subsequence

#include <stdio.h>

int longestNonDecreasingSubsequence(int arr[], int n) {
    int dp[n]; 
    int i, j, maxLength = 1;
    for (i = 0; i < n; i++) {
        dp[i] = 1;
    }
    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr[j] <= arr[i] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }
    for (i = 0; i < n; i++) {
        if (dp[i] > maxLength) {
            maxLength = dp[i];
        }
    }

    return maxLength;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int result = longestNonDecreasingSubsequence(arr, n);
    printf("%d\n", result);

    return 0;
}
