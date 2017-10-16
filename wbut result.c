#include<stdio.h>
#include<string.h>
int main()
{
	int a,p=4,g,k,n,w,c,m=3,o,h=1,z,y,i,e=4,sum=0,sum1=0,q=3,f=2,t,d,r=2,sum2=0,l,b,u,v=1,x,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,total,total_even,e1,t3;
	float sgpa,sgpa1,ygpa;
	char s[5];
	char arr[10];
		printf("WELCOME TO MAKAUT FOR RESULT:\n");
		while(1)
		{
		printf("Press 1.For ODD SEM RESULT SGPA:\n");
		printf("Press 2.For EVEN SEM RESULT SGPA:\n");
		printf("Press 3.For YGPA:\n");			
		printf("Enter ur choice:");
		scanf("%d",&e1);
		switch(e1)
		{
		case 1:
		printf("Enter number of subject 4 credit point:");
		scanf("%d",&n);
		for(i=0;i<n; i++)
 		{
			printf("Enter subject %d grade:",i+1);      		 	
			scanf("%s",&s[i]);
       				
	   	 }
		
	for(i=0;i<n;i++)
	{	
		if(s[i]=='o' || s[i]=='O')
		{
			g=10*p;
			sum=sum+g;
		}
		else if (s[i]=='e' || s[i]=='E')
		{
			g=9*p;
			sum=sum+g;
		}
		else if (s[i]=='a' || s[i]=='A')
		{
			g=8*p;
			sum=sum+g;
		}
		else if (s[i]=='b' || s[i]=='B')
		{
			g=7*p;
			sum=sum+g;
		}
		else if (s[i]=='c' || s[i]=='C')
       	        {
        		g=6*p;
			sum=sum+g;
		}
		else if (s[i]=='d' || s[i]=='D')
		{
			g=5*p;
			sum=sum+g;
		}
		else if (s[i]='f' || s[i]=='F')
		{
			
			g=2*p;
			sum=sum+g;
		}
		else
		{
			printf("WRONG INPUT TRY AGAIN:\n");
		}
	}
		printf("Enter number of subject 3 credit point:");
		scanf("%d",&d);
		
		for(i=0;i<d; i++)
 		{
			printf("Enter subject %d grade:",i+1);      		 	
			scanf("%s",&s[i]);
       				
	   	 }
		
	for(i=0;i<d;i++)
	{	
		if(s[i]=='o' || s[i]=='O')
		{
			t=10*q;
			sum1=sum1+t;
		}
		else if (s[i]=='e' || s[i]=='E')
		{
			t=9*q;
			sum1=sum1+t;
		}
		else if (s[i]=='a' || s[i]=='A')
		{
			t=8*q;
			sum1=sum1+t;
		}
		else if (s[i]=='b' || s[i]=='B')
		{
			t=7*q;
			sum1=sum1+t;
		}
		else if (s[i]=='c' || s[i]=='C')
       	        {
        		t=6*q;
			sum1=sum1+t;
		}
		else if (s[i]=='d' || s[i]=='D')
		{
			t=5*q;
			sum1=sum1+t;
		}
		else if (s[i]='f' || s[i]=='F')
		{
			t=2*q;
			sum1=sum1+t;
			
		}
		else
		{
			printf("WRONG INPUT TRY AGAIN:\n");
		}
	}
	   printf("Enter number of subject 2 credit point:");
		scanf("%d",&b);
		for(i=0;i<b; i++)
 		{
			printf("Enter subject %d grade:",i+1);      		 	
			scanf("%s",&s[i]);
       				
	   	 }
		
	for(i=0;i<b;i++)
	{	
		if(s[i]=='o' || s[i]=='O')
		{
			l=10*r;
			sum2=sum2+l;
		}
		else if (s[i]=='e' || s[i]=='E')
		{
			l=9*r;
			sum2=sum2+l;
		}
		else if (s[i]=='a' || s[i]=='A')
		{
		l=8*r;
			sum2=sum2+l;
		}
		else if (s[i]=='b' || s[i]=='B')
		{
			l=7*r;
			sum2=sum2+l;
		}
		else if (s[i]=='c' || s[i]=='C')
       	        {
        		l=6*r;
			sum2=sum2+l;
		}
		else if (s[i]=='d' || s[i]=='D')
		{
			l=5*r;
			sum2=sum2+l;
		}
		else if (s[i]='f' || s[i]=='F')
		{
			
			l=2*r;
			sum2=sum2+l;
		}
		else
		{
			printf("WRONG INPUT TRY AGAIN:\n");
		}
	}       
printf("Enter number of subject 1 credit point:");
		scanf("%d",&x);
		for(i=0;i<x; i++)
 		{
			printf("Enter subject %d grade:",i+1);      		 	
			scanf("%s",&s[i]);
       				
	   	 }
		
	for(i=0;i<x;i++)
	{	
		if(s[i]=='o' || s[i]=='O')
		{
			u=10*v;
			sum3=sum3+u;
		}
		else if (s[i]=='e' || s[i]=='E')
		{
				u=9*v;
			sum3=sum3+u;
		}
		else if (s[i]=='a' || s[i]=='A')
		{
				u=8*v;
			sum3=sum3+u;
		}
		else if (s[i]=='b' || s[i]=='B')
		{
				u=7*v;
			sum3=sum3+u;
		}
		else if (s[i]=='c' || s[i]=='C')
       	        {
        			u=6*v;
			sum3=sum3+u;
		}
		else if (s[i]=='d' || s[i]=='D')
		{
				u=5*v;
			sum3=sum3+u;
		}
		else if (s[i]='f' || s[i]=='F')
		{
			
				u=2*v;
			sum3=sum3+u;
		}
		else
		{
			printf("WRONG INPUT TRY AGAIN:\n");
		}
	}
total=(sum+sum1+sum2+sum3);
sgpa=float(total)/float(4*n+3*d+2*b+1*x);
printf("Total Credit Point=%d \n",total);
printf("SGPA Of Odd Semestar=%.2f \n",sgpa);
break;
case 2:printf("Enter number of subject 4 credit point:",p);
		scanf("%d",&a);
		
		for(i=0;i<a; i++)
 		{
			printf("Enter subject %d grade:",i+1);      		 	
			scanf("%s",&s[i]);
       				
	   	 }
		
	for(i=0;i<a;i++)
	{	
		if(s[i]=='o' || s[i]=='O')
		{
			w=10*e;
			sum4=sum4+w;
		}
		else if (s[i]=='e' || s[i]=='E')
		{
				w=9*e;
			sum4=sum4+w;
		}
		else if (s[i]=='a' || s[i]=='A')
		{
				w=8*e;
			sum4=sum4+w;
		}
		else if (s[i]=='b' || s[i]=='B')
		{
				w=7*e;
			sum4=sum4+w;
		}
		else if (s[i]=='c' || s[i]=='C')
       	        {
        			w=6*e;
			sum4=sum4+w;
		}
		else if (s[i]=='d' || s[i]=='D')
		{
				w=5*e;
			sum4=sum4+w;
		}
		else if (s[i]='f' || s[i]=='F')
		{
				w=2*e;
			sum4=sum4+w;
			
		}
		else
		{
			printf("WRONG INPUT TRY AGAIN:\n");
		}
	}
	printf("Enter number of subject 3 credit point:");
		scanf("%d",&c);
		
		for(i=0;i<c; i++)
 		{
			printf("Enter subject %d grade:",i+1);      		 	
			scanf("%s",&s[i]);
       				
	   	 }
		
	for(i=0;i<c;i++)
	{	
		if(s[i]=='o' || s[i]=='O')
		{
			o=10*m;
			sum5=sum5+o;
		}
		else if (s[i]=='e' || s[i]=='E')
		{
				o=9*m;
			sum5=sum5+o;
		}
		else if (s[i]=='a' || s[i]=='A')
		{
				o=8*m;
			sum5=sum5+o;
		}
		else if (s[i]=='b' || s[i]=='B')
		{
				o=7*m;
			sum5=sum5+o;
		}
		else if (s[i]=='c' || s[i]=='C')
        {
        	o=6*m;
			sum5=sum5+o;
		}
		else if (s[i]=='d' || s[i]=='D')
		{
				o=5*m;
			sum5=sum5+o;
		}
		else if (s[i]='f' || s[i]=='F')
		{
				o=2*m;
			sum5=sum5+o;
			
		}
		else
		{
			printf("WRONG INPUT TRY AGAIN:\n");
		}
	}
	printf("Enter number of subject 2 credit point:");
		scanf("%d",&t3);
		for(i=0;i<t3; i++)
 		{
			printf("Enter subject %d grade:",i+1);      		 	
			scanf("%s",&s[i]);
       	}
	for(i=0;i<t3;i++)
	{	
		if(s[i]=='o' || s[i]=='O')
		{
			k=10*f;
			sum6=sum6+k;
		}
		else if (s[i]=='e' || s[i]=='E')
		{
				k=9*f;
			sum6=sum6+k;
		}
		else if (s[i]=='a' || s[i]=='A')
		{
		    k=8*f;
			sum6=sum6+k;
		}
		else if (s[i]=='b' || s[i]=='B')
		{
			 k=7*f;
			sum6=sum6+k;
		}
		else if (s[i]=='c' || s[i]=='C')
        {
        		 k=6*f;
			sum6=sum6+k;
		}
		else if (s[i]=='d' || s[i]=='D')
		{
				 k=5*f;
			sum6=sum6+k;
		}
		else if (s[i]='f' || s[i]=='F')
		{
		    k=2*f;
			sum6=sum6+k;
			
		}
		else
		{
			printf("WRONG INPUT TRY AGAIN:\n");
		}		
	   	 }
printf("Enter number of subject 1 credit point:");
		scanf("%d",&y);
		for(i=0;i<y; i++)
 		{
			printf("Enter subject %d grade:",i+1);      		 	
			scanf("%s",&s[i]);
       				
	   	 }
		
	for(i=0;i<y;i++)
	{	
		if(s[i]=='o' || s[i]=='O')
		{
			z=10*h;
			sum7=sum7+z;
		}
		else if (s[i]=='e' || s[i]=='E')
		{
				z=9*h;
			sum7=sum7+z;
		}
		else if (s[i]=='a' || s[i]=='A')
		{
				z=8*h;
			sum7=sum7+z;
		}
		else if (s[i]=='b' || s[i]=='B')
		{
				z=7*h;
			sum7=sum7+z;
		}
		else if (s[i]=='c' || s[i]=='C')
       	        {
        			z=6*h;
			sum7=sum7+z;
		}
		else if (s[i]=='d' || s[i]=='D')
		{
				z=5*h;
			sum7=sum7+z;
		}
		else if (s[i]='f' || s[i]=='F')
		{
			
				z=2*h;
			sum7=sum7+z;
		}
		else
		{
			printf("WRONG INPUT TRY AGAIN:\n");
		}
	}	
total_even=(sum4+sum5+sum6+sum7);
sgpa1=float(total_even)/float(4*a+3*c+2*t3+1*y);
printf("Total Credit Point=%d \n",total_even);
printf("SGPA Of Even semestar=%.2f \n ",sgpa1);
break;
case 3:ygpa=(sgpa+sgpa1)/2;
       printf("YGPA OF SEMESTAR=%.2f \n",ygpa);
       break;
       default:printf("Wrong Choice:\n");
       break;
}
}
 return 0;
	  }   
