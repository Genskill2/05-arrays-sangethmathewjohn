/* Enter your solutions in this file */
#include <stdio.h>

/********----Average----********/

float average(int a[],int num){
  int i, sum=0;
  for (i=0;i<num;i++)
      sum += a[i];
  sum/=num;
  return sum;
}

/******---Maximum---******/

int max(int a[],int num){
  int i,max= 0;
  for (i=0;i<num;i++){
    if(max < a[i])
      max=a[i];
  }
  return max;
}

/******---Minimum---******/

int min(int a[],int num){
  int i=0,min=a[i];
  for(i;i<num;i++){
    if(a[i]<min)
      min=a[i];
  }
  return min;
}

/********---Mode---*********/

int mode(int a[],int num){
  int i,j,modenum,moden=0,mode;
  for(i=0;i<num;i++){
    modenum =0;
    for(j=0;j<num;j++){
      if(a[i] ==a[j])
        modenum++;
    }
    if(moden<modenum)
      mode =a[i];
    moden=modenum;  
    }
    return(mode);
}

/*******---Factors---********/

int factors(int num,int a[]){
  int i,acc=0;
  for(i=2;i<=num;i++){
      while((num%i==0){
        num=num/i;
        a[acc] = i;
        acc ++;
      }
  }
  return acc;
}
