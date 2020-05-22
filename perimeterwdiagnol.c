#include <stdio.h>

int main() {

int  x=0;
 
printf("Pls Enter number from 1 to 10:");

scanf("%d", &x);

int i=1;

while(i<=x){

 int j=1;

while(j<=x){

if(i==1){
  printf("*");
}
else if(i==x){
  printf("*");

}
else if (i==j || j==x-i){ 
  printf("*");
}


else{
  if(j==1){
   printf("*");
   }
  else if(j==x){
    printf("*");

  }
  else{
    printf(" ");
  }
}
  j=j+1;

}
 printf("\n");
 i=i+1;
}


  return 0;
}
