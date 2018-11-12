
#include <stdio.h>
long a=10000,b,c=2800,d,e,f[2801],g;
main()
{
	for(int i=0;i<c;i++)//将数组中的变量都赋值为2000 
	{
		f[i]=a/5;
	}
	while(c)
	{
		b=c;//做分子 
		d=0;
		g=2*c;//做分母 
		while(b)
		{
			d=d+f[b]*a;
			g--;
			f[b]=d%g;//保留余数 
			d=d/g;
			g--;
			b--;
			if(b)
			d*=b;
		}
		c-=14;
		printf("%.4d",e+d/a);
		e=d%a;
	}
}
