/* Enter your solutions in this file */
#include <stdio.h>
/********----Average----********/
float average(int a[],int num){
  int i, sum=0;
  for (i=0;i<=num;i++){
    sum += a[i];
  }
  sum=sum/num;
  return sum;
}
/******---Maximum---******/
int max(int a[],int num){
  int i,max= 0;
  for (i=0;i<=num;i++){
    if(max < a[i]){
     max=a[i];
    } 
  }
  return max;
}
/******---Minimum---******/
int min(int a[],int num){
  int i=0,min=a[i];
  for(i;i<=num;i++){
    if(a[i]<min){
     min=a[i];
    }
  }
  return min;
}

int mode(int a[],int num){
  int i,j,modenum,moden=0,mode;
  for(i=0;i<=num;i++){
    modenum =0;
    for(j=0;j<=num;j++){
      if(a[i] ==a[j])
        modenum+=1;
    }
    if(moden<modenum)
      mode =a[i];
    moden=modenum;  
    }
    return(mode);
}

int factors(int num,int a[]){
  int i,j=0,acc=0,facts[50]={0};
  for(i=0;i<num;i++){
    if(num%i == 0){
      a[j] =i;
      j++;
    }
  }
  for(i=0;i<j;i++){
    while(num%a[i]==0){
      num /=a[i];
      facts[acc] = a[i];
      acc++;
    }
  }
   return(j+1);   
}
