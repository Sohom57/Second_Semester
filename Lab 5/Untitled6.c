#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char arr[n];
    int g, b=0;
    char c;
    for(g=0; g<n; g++){
        scanf(" %c ", &c);
        if(c=='y'||c=='n') continue;
        if(c=='x') break;
        else{
            arr[b]=c;
            b++;
        }
    }
    for(int i=0; i<b; i++) printf("%c\t", arr[i]);
}

