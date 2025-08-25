//addition
#include <stdio.h>
int main() {
  int a[100][100], b[100][100], c[100][100];
  int x, y, i, j;
  scanf("%d%d", &x, &y);
  for (i=0; i<x; i++){
    for (j=0; j<y; j++) scanf("%d", &a[i][j]);
  }
  for (i=0; i<x; i++){
    for (j=0; j<y; j++) printf("%d\t", a[i][j]);
    printf("\n");
  }
  for (i=0; i<x; i++){
    for (j=0; j<y; j++) scanf("%d", &b[i][j]);
  }
  for (i=0; i<x; i++){
    for (j=0; j<y; j++) printf("%d\t", b[i][j]);
    printf("\n");
  }
  printf("\n\n");
  for (i=0; i<x; i++){
    for (j=0; j<y; j++){
        c[i][j] = a[i][j] + b[i][j];
        printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
}
//subtract
#include <stdio.h>
int main() {
  int a[100][100], b[100][100], c[100][100];
  int x, y, i, j;
  scanf("%d%d", &x, &y);
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) scanf("%d", &a[i][j]);
  }
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) printf("%d\t", a[i][j]);
    printf("\n");
  }
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) scanf("%d", &b[i][j]);
  }
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) printf("%d\t", b[i][j]);
    printf("\n");
  }
  printf("\n\n");
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) {
        c[i][j] = a[i][j] - b[i][j];
        printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
}
//Diagonal
#include <stdio.h>
int main() {
  int a[100][100], x, y, i, j, s=0;
  scanf("%d%d", &x, &y);
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) {
      scanf("%d", &a[i][j]);
      if(i==j) s+=a[i][j];
    }
  }
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) printf("%d\t", a[i][j]);
    printf("\n");
  }
  printf("%d", s);
}
//Transpose
#include <stdio.h>
int main() {
    int a[100][100], b[100][100], x, y, i, j;
    scanf("%d%d", &x, &y);
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) scanf("%d", &a[i][j]);
    }
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("\n\n");
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) {
            b[i][j]=a[j][i];
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}
//Lower Triangle
#include <stdio.h>
int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    int a[x][y];
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) scanf("%d", &a[i][j]);
    }
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            if(j<=i) printf("%d\t", a[i][j]);
            else printf("0\t");
        }
        printf("\n");
    }
}
//Upper Triangle
#include <stdio.h>
int main() {
    int a[100][100], x, y, i, j;
    scanf("%d%d", &x, &y);
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) scanf("%d", &a[i][j]);
    }
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) {
            if(j>=i) printf("%d\t", a[i][j]);
            else printf("0\t");
        }
        printf("\n");
    }
}
//Determinent
#include <stdio.h>
int main() {
    int a[100][100], x, y, i, j, d;
    scanf("%d%d", &x, &y);
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) scanf("%d", &a[i][j]);
    }
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("\n\n");
    if(x==2&&y==2){
        d=a[0][0]*a[1][1]-a[1][0]*a[0][1];
        printf("%d", d);
    }
    if(x==3&&y==3){
        d= a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
        printf("%d", d);
    }
}
//kick duplicate
#include <stdio.h>
int main (){
    int arr[100], i, j, k, x, t;
    scanf (" %d", &x);
    for( i=0; i<x; i++) scanf ("%d", &arr[i]);
    for( i=0; i<x; i++){
        for(j=i+1; j<x; j++){
            if(arr[i]==arr[j]){
                for(k=j; k<x-1; k++) arr[k]=arr[k+1];
                x--;
                j--;
            }
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = i+1; j < x; j++) {
           if(arr[i] > arr[j]) {
               t = arr[i];
               arr[i] = arr[j];
               arr[j] = t;
           }
        }
    }
    for(i=0; i<x; i++) printf ("%d\t", arr[i]);
}
//Add element
#include<stdio.h>
int main(){
    int n, p, q, i;
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n; i++) printf("%d\t", a[i]);
    printf("\n");
    scanf("%d%d", &p, &q);
    p=p-1;
    for(i=n; i>=p; i--) a[i]=a[i-1];
    a[p]=q;
    n++;
    for(i=0; i<n; i++) printf("%d\t", a[i]);
}
//kick element
#include<stdio.h>
int main(){
    int n, p;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &p);
    for(int i=p-1; i<n-1; i++) a[i]=a[i+1];
    for(int i=0; i<n-1; i++) printf("%d\t", a[i]);
}
//ASCII value
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char n[100];
    int a, b, i;
    gets(n);
    a=strlen(n);
    for(i=0; i<a; i++){
        b=n[i];
        printf("%d\t", b);
    }
}
//Count different elements
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char n[100];
    gets(n);
    int a=strlen(n);
    int b=0, c=0, w=0, num=0, i, j;
    for(i=0; i<a; i++){
        if((n[i]>=65&&n[i]<=90)||(n[i]>=97&&n[i]<=122))
            w++;
        if(n[i]>=48&&n[i]<=57)
            num++;
    }
    printf("Special Characters: %d\n", a-(w+num));
    printf("Alphabets: %d\n", w);
    printf("Numbers: %d", num);
}
//frequency
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char n[1000];
    gets(n);
    int a, i, j, b;
    a=strlen(n);
    for(i=65; i<=90; i++){
        b=0;
        for(j=0; j<a; j++) if(i==n[j]) b++;
        if(b) printf("%c-%d\n", i, b);
    }
    for(i=97; i<=122; i++){
        b=0;
        for(j=0; j<=a; j++) if(i==n[j]) b++;
        if(b) printf("%c-%d\n", i, b);
    }
}
//Urie dao
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char n[1000], m[1000];
    gets(n);
    int a, b=0, i;
    a=strlen(n);
    for(i=0; i<a; i++){
        if((n[i]>=65&&n[i]<=90)||n[i]>=97&&n[i]<=122){
            m[b++]=n[i];
        }
    }
    m[b]='\0';
    printf("%s", m);
}
//Dereference
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int *p=(int *)malloc(sizeof(int));
    printf("Address=%d\n", p);
    *p=n;
    printf("Value=%d\n", *p);
}
//Array Dereference
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
#include<limits.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int *p=(int *)malloc(sizeof(int));
    for(i=0; i<n; i++) scanf("%d", p+i);
    for(i=0; i<n; i++){
        printf("Value=%d, Address=%d\n", *(p+i), (p+i));
    }
}