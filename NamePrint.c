#include<stdio.h>
#include<string.h>

void bit_extract(int a)
{
   char d[5];
    for(int g=0;g<5;g++)
    {
       int t= (a>>g)&1;
       if(t==1)
       strcat(d,"*");
       else
       strcat(d," ");
     }
    printf("%s ",d);
    d[0]='\0';
}
int rowletter(char ft,int temp)
{
int k[5]={17,9,5,9,17};
int u[5]={17,17,17,17,14};
int n[5]={17,19,21,25,17};
int a[5]={14,17,31,17,17};
int l[5]={1,1,1,1,31};
int s[5]={30,1,14,16,15};
int h[5]={17,17,31,17,17};
int y[5]={17,10,4,4,4};
int p[5]={15,17,15,1,1};
int _[5]={0,0,0,0,0};
int i[5]={31,4,4,4,31};
int r[5]={15,17,15,5,25};
int d[5]={7,9,17,9,7};
int t[5]={31,4,4,4,4};
int m[5]={17,27,21,17,17};
int b[5]={7,17,7,17,7};
int o[5]={14,17,17,17,14};
int j[5]={31,4,4,5,7};
int c[5]={14,1,1,1,14};
int e[5]={31,1,15,1,31};
int f[5]={31,1,15,1,1};
int g[5]={30,1,25,17,14};
int w[5]={17,17,21,27,17};
int q[5]={14,17,21,9,22};
int v[5]={17,17,17,10,4};
int x[5]={17,10,4,10,17};
int z[5]={31,8,4,2,31};
switch(ft)
{
case 'K': return k[temp];
case 'U': return u[temp];
case 'N':return n[temp];
case 'A':return a[temp];
case 'L':return l[temp];
case 'S':return s[temp];
case 'H':return h[temp];
case 'Y':return y[temp];
case 'P':return p[temp];
case '_':return _[temp];
case 'I':return i[temp];
case 'R':return r[temp];
case 'D':return d[temp];
case 'T':return t[temp];
case 'M':return m[temp];
case 'B':return b[temp];
case 'O':return o[temp];
case 'J':return j[temp];
case 'C':return c[temp];
case 'E':return e[temp];
case 'F':return f[temp];
case 'G':return g[temp];
case 'W':return w[temp];
case 'Q':return q[temp];
case 'V':return v[temp];
case 'X':return x[temp];
case 'Z':return z[temp];
}    
}
int main()
{
char c[]="YOUR_NAME_HERE";                      //WRITE YOUR NAME HERE
int len=sizeof(c)/sizeof(c[0]);
len-=1;
for(int i=0;i<5;i++) 
{
for(int jt=0;jt<len;jt++)
{
int t=rowletter(c[jt],i);
bit_extract(t);
}
printf("\n");
}
printf("\n \n \n");
char ct[]="FATHER_NAME";                      //WRITE YOUR FATHER NAME
len=sizeof(ct)/sizeof(ct[0]);
len-=1;
for(int i=0;i<5;i++) 
{
for(int jt=0;jt<len;jt++)
{
int t=rowletter(ct[jt],i);
bit_extract(t);
}
printf("\n");
}
}