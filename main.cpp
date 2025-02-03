#include <iostream>
using namespace std;
#include<cstdio>
#include<cstring>
int main()
{
    char s[40],d[40];
    char a[28]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_','.'};
    int x,m,i,j,n,l,k,p,flg=1;
    while(1)
    {
        printf("\nEnter the integer:");
        scanf("%d",&n);
        if(n==0)
        {
            printf("As 0 is inputed Terminate the Program\n");
            break;
        }
        if(n<1||n>27)
        {
            printf("Invalid Integer \nPlease reenter correct integer\n");
            continue;
        }
        printf("Enter the string:");
        cin>>s;
        l=strlen(s);
        //printf("Length:%d\n",l);
        //for(i=0;i<l;i++)
        i=0;
        while(i<l&&flg==1)
        {
            if((s[i]>=65&&s[i]<=90)||s[i]=='_'||s[i]=='.')
            {
                flg=1;
            }
            else
            {
                //printf("\nInvalid string ");
                flg=0;
            }
            i++;
        }
        if(flg!=1)
        {
            printf("Invalid string \nPlease reenter correct string\n ");
            flg=1;
            continue;
        }
        if(flg==1)
        {
            /*printf("Reversed string:");
            for(x=l-1;x>=0;x--)
            {
                cout<<s[x];
            }*/
            k=0;
            for( x=l-1;x>=0;x--)
            {
                    for(j=0;j<=27;j++)
                    {
                        if(s[x]==a[j])
                        {
                            if(j+n>=28)
                            {
                                m=j;
                                m=(m+n)%28;
                                d[k]=a[m];
                            }
                            else
                            {
                                d[k]=a[j+n];

                            }
                            k++;
                        }
                    }
            }
            d[k]='\0';
            printf("Required string:%s\n",d);
        }
    }
    return 0;
}
