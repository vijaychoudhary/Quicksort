#include<stdio.h>
int i,temp,index=0;
main()
{
    int array[10]={56,22,2,12,3,20,77,4,9,112};
    pivett(array,2,9);
    pivet(array,10);
    print(array,10);
    
    
    
}

int pivett(int array[],int start, int end)
{
    int pivet=array[end];
    int pivetIndex=start;
    
    for(i=start;i<=end;i++)
    {
        if(pivet>=array[i])
        {
          temp=array[pivetIndex];
          array[pivetIndex]=array[i];
          array[i]=temp;
          pivetIndex++;
          
        }
        
    }
    return --pivetIndex;
    
}
void quick(int array[],int start, int end)
{
  if(start>=end)
  {
       return;  
  }
  int pivetIndex=pivett(array,start,end);
  quick(array,start,pivetIndex-1);
  quick(array,pivetIndex,end);
  
  
}



void print(int array[],int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        printf("%d \n",array[i]);
    }
}


int pivet(int array[],int length)
{
    int pivet=array[length-1];
    int pivetIndex=0;
    
    for(i=0;i<length;i++)
    {
        if(pivet>=array[i])
        {
          temp=array[pivetIndex];
          array[pivetIndex]=array[i];
          array[i]=temp;
          pivetIndex++;
          
        }
        
    }
    
}

