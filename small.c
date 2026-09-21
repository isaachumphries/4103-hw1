#include <stdio.h>
int main(){char a[]={' ','X',' '};for(int i=0;i<5;i++){for(int j=0;j<5;j++){putchar(a[i%2]);if((i%2==1&&j<4)||i%2==0){putchar(a[i%2+1]);}}putchar('\n');}return 0;}
