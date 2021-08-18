#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,y,m=0,d,w,f=0;
	scanf("%d%d%d",&a,&b,&c);
	 {if(b>12||b<1) printf("month is error.\n");
	     else {switch(b){
   		 case 12:f=31;break;
		 case 11:f=30;break;
		 case 10:f=31;break;
		 case 9:f=30;break;
		 case 8:f=31;break;
		 case 7:f=31;break;
		 case 6:f=30;break;
		 case 5:f=31;break;
		 case 4:f=30;break;
		 case 3:f=31;break;
		 case 2:if (a%100==0) {if(a%400==0) f=29;
		                    else f=28;}
		      else f=((a%4)?28:29);break;
		 case 1:f=31;break;}
	     if(c>f||c<1) printf("day is error.\n");
	         else {y=(a-1900)/4*(365*4+1)+(a%4)*365-(a-1900)/100+(a-1601)/400;
	            switch(b){
		            case 12:m=m+30;
		            case 11:m=m+31;
		            case 10:m=m+30;
		            case 9:m=m+31;
		            case 8:m=m+31;
		            case 7:m=m+30;
		            case 6:m=m+31;
	            	case 5:m=m+30;
		            case 4:m=m+31;
		            case 3:if (a%100==0) {if(a%400==0) m=m+29; else m=m+28;}
		                   else m=m+((a%4)?28:29);
		            case 2:m=m+31;
		            case 1:;}
	d=y+m+c;
	w=d%7; 
	printf("%d\n",w);
	              }
                }
        }
    }
