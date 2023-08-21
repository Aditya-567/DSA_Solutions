
/*print max of 5 numbers*/


#include<stdio.h>
int main()
    {
        int a,b,c,d,e,max;
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        if(a>b){
            if(a>c){
                if(a>d){
                    if(a>e){
                        max=a;
                        printf("%d",max);
                    }else{
                        max=e;
                        printf("%d",max);
                    }
                   
                }else if(d>a){
                    if(d>e){
                        max=d;
                        printf("%d",max);
                    }else{
                        max=e;
                        printf("%d",max);
                    }
                }
            }else if(c>a)
                 if(c>d)
                 {
                    if(c>e)
                    {
                       max=c;
                       printf("%d",max);
                    }else{
                        max=e;
                        printf("%d",max);
                    } 
                 }
                    
                else if(d>c){
                    if(d>e){
                        max=d;
                        printf("%d",max);
                    }else{
                        max=e;
                        printf("%d",max);
                    }
                
            }
        }else if(b>a){
            if(b>c)
            {
                if(b>d)
                {
                    if(b>e){
                         max=b;
                        printf("%d",max);
                    }else{
                        max=e;
                        printf("%d",max);
                        }
                }else if(d>b){
                    if(d>e){
                        max =d;
                        printf("%d",max);
                    }else{
                        max=e;
                        printf("%d",max);
                    }
                
                }  
            }else if(c>b){
                 if(c>d){
                    if(c>e)
                    {
                       max=c;
                       printf("%d",max);
                    }else{
                        max=e;
                        printf("%d",max);
                    }
                }else if(d>c){
                    if(d>e){
                        max=d;
                        printf("%d",max);
                    }else{
                        max=e;
                        printf("%d",max);
                    }
        
                }
            }
        }
    }