#include <stdio.h>
int main ()
{     
     int n,m,k,l,j,g,i;
     char a[100],b[100];
	 char c[7][100];
     
	for(m=0;m<7;m++)
	 for(i=0;i<100;i++)
	   c[m][i]='\0';
     scanf("%d",&n);
     getchar();
     for(m=0;m<n;m++)
	{   j=0;k=0; 
	 for(i=0;i<100;i++)
     {
     	a[i]='\0';b[i]='\0';
	 }
	 while((a[j]=getchar())!=' ')
	     { 
	     	j++;
		 }
	while((b[k]=getchar())!='\n')	
		{
			k++;
		}
     
     for(i=99;i>=0&&(a[i]<'0'||a[i]>'9');i--)
		continue;
	for(j=99;j>=0&&(b[j]<'0'||b[j]>'9');j--)
		continue;
		g=0;	
    for(l=0;l<100;l++)
	{  if(i>=0&&j>=0) 
		{
			if  (a[i]+b[j]-'0'+g<='9')
		      {
		      	c[m][l]=a[i]+b[j]-'0'+g;
		      	g=0;
			  }
		else  
		  {  
		   c[m][l]=a[i]+b[j]-'0'+g-10;
		   g=1;	   	    
		  } 
		i--;
		j--;
		}
		else if(i>=0&&j<0)
		{
			if(a[i]+g<='9')
		    {
		    	c[m][l]=a[i]+g;
		    	g=0;
			}
		else  
		{  
		   c[m][l]=a[i]+g-10;
		   g=1;	   	
		}
		i--;
			}	
	   else if(j>=0&&i<0)
	   	{
		   if(b[j]+g<='9')
		      {
		      	c[m][l]=b[j]+g;
		      	g=0;
			  }
		else  
		  {  
		   c[m][l]=b[j]+g-10;
		   g=1;	   	    
		   }
		   j--;		
	      }
	   if(i<0&&j<0) 
		   {
	   		  if(g==0)
	   		  c[m][l+1]='\0';
	   		  else if (g==1)
				 c[m][l+1]='1';
		   }	
	}	
}
for (m=0;m<n;m++)
 {
 	for(i=99;i>=0;i--)
	if(c[m][i]!='\0')
	printf("%c",c[m][i]);
 	printf("\n");
 }
	return 0;
}

