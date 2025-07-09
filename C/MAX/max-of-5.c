#include<stdio.h>
void main()
{   
    int a,b,c,d,e;
    printf("Enter the value a,b,c,d: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                if (a>e)
                {
                    printf("max is %d",a);
                }
                else
                {
                    printf("max is %d",e);
                }
                
            }
            else
            {
                if (d>e)
                {
                    printf("max is %d",d);
                }
                else
                {
                    printf("max is %d",e);
                }
                    
            }

        }
        else
        {
            if (c>d)
            {
                if (c>e)
                {
                    printf("max is %d",c);
                }
                else
                {
                    printf("max is %d",e);
                }
                
            }
            else
            {
                if (d>e)
                {
                    printf("max is %d",d);
                }
                else
                {
                    printf("max is %d",e);
                }
            }
        }    
        
    }
    else
    {
    
        if (b>c)
        {
            if (b>d)
            {
                if (b>e)
                {
                    printf("max is %d",b);
                }
                else
                {
                    printf("max is %d",e);
                }
                
            }
            else
            {
                if (d>e)
                {
                    printf("max is %d",d);
                }
                else
                {
                    printf("max is %d",e);
                }
                    
            }

        }
        else
        {
            if (c>d)
            {
                if (c>e)
                {
                    printf("max is %d",c);
                }
                else
                {
                    printf("max is %d",e);
                }
                
            }
            else
            {
                if (d>e)
                {
                    printf("max is %d",d);
                }
                else
                {
                    printf("max is %d",e);
                }
            }
        }    
        
    }
}