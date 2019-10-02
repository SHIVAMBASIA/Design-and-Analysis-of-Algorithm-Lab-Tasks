#include<stdio.h>
#include<string.h>
 
int i,j,m,n,c[20][20];
char x[20],y[20],b[20][20];
 
void print(int i,int j)
{
                if(i==0 || j==0)
                                return;
                if(b[i][j]=='#')
                {
                                print(i-1,j-1);
                                printf("%c",x[i-1]);
                }
                else if(b[i][j]=='^')
                                print(i-1,j);
                else
                                print(i,j-1);
}
 
void lcs()
{
                m=strlen(x);
                n=strlen(y);
                for(i=0;i<=m;i++)
                                c[i][0]=0;
                for(i=0;i<=n;i++)
                                c[0][i]=0;
                for(i=1;i<=m;i++)
                                for(j=1;j<=n;j++)
                                {
                                                if(x[i-1]==y[j-1])
                                                {
                                                                c[i][j]=c[i-1][j-1]+1;
                                                                b[i][j]='#';
                                                }
                                                else if(c[i-1][j]>=c[i][j-1])
                                                {
                                                                c[i][j]=c[i-1][j];
                                                                b[i][j]='^';
                                                }
                                                else
                                                {
                                                                c[i][j]=c[i][j-1];
                                                                b[i][j]='<';
                                                }
                                }
                                }
                               void tableprint()
                               { int p,q;
                                for(p=1;p<=m;p++)
                              {
                                for(q=1;q<=n;q++)
                                {
                                printf("%c\t",b[p][q]);
                                
}
printf("\n");
}
}

 void numbertableprint()
                               { int r,s;
                                for(r=0;r<=m;r++)
                              {
                                for(s=0;s<=n;s++)
                                {
                                printf("%d\t",c[r][s]);
                                
}
printf("\n");
}
}

 
int main()
{
                printf("Enter 1st sequence:");
                scanf("%s",x);
                printf("Enter 2nd sequence:");
                scanf("%s",y);
                
                lcs();
                tableprint();
                printf("\n");
                numbertableprint();
                printf("\nThe Longest Common Subsequence is ");
                print(m,n);
        return 0;
}
