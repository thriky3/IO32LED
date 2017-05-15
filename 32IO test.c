#include<reg52.h>
#include<intrins.h>

unsigned char code led[10]={0xFF,0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F,0xFF};//定义一排八个灯只亮一个

void Delay(unsigned int i)
	{
	while(i--)
		{
			_nop_();
			_nop_();
			_nop_();
			_nop_();

			_nop_();
			_nop_();
			_nop_();
			_nop_();

			_nop_();
			_nop_();
			_nop_();
			_nop_();

			_nop_();
			_nop_();
			_nop_();
			_nop_();

		}
	}

void main(void)
{
	unsigned char	i,j,k,temp;
	while(1)
		{
		temp=0x01;
		P0=temp;
	//	P1=temp;
	//	P2=temp;
	//	P3=temp;
		

		for(j=8;j>0;j--)
		{
				
				
			for(i=0;i<j;i++)
			{
			//	temp=temp|0x01;	
				temp=255>>i;
				P0=255-temp;
				Delay(60000);
				Delay(60000);
			}
			
		}

	/*		
		for(k=255;k>0;k--)
		{
		//	temp=0x01;
			temp=temp-1;
			P0=P1=P2=P3=temp;
			//temp<<=1;
		for(i=0;i<2;i++)
			{	
			
			for(j=1;j<3;j++)
					{
					Delay(50000);
					}
						
			}
		}
		
	
		for(i=1;i<3;i++)
			{
			temp=0x00;
			P0=temp;
			P1=temp;
			P2=temp;
			P3=temp;
			for(j=1;j<12;j++)
				{
				Delay(50000);
				}
			temp=0xff;
			P0=temp;
			P1=temp;
			P2=temp;
			P3=temp;
			for(j=1;j<12;j++)
				{
				Delay(50000);
				}
			}
			
		for(i=1;i<9;i++)	//P0移位
			{
			P0=led[i];
			Delay(60000);			
			}
		P0=temp;
		
		for(i=1;i<9;i++)	//P1移位
			{			
			P1=led[i];
			Delay(60000);
			}
		P1=temp;
		
		for(i=1;i<9;i++)	//P2移位
			{
			P2=led[i];
			Delay(60000);			
			}
		P2=temp;
		
		for(i=1;i<9;i++)	//P3移位
			{			
			P3=led[i];
			Delay(60000);
			}
		P3=temp;

		
		
		for(i=9;i>=1;i--)	//P3移位,倒叙
			{			
			P3=led[i];
			Delay(30000);
			}
		//Delay(30000);	
		P3=temp;
		
		for(i=9;i>1;i--)	//P2移位
			{	
			P2=led[i];	
			Delay(30000);	
			}
		//Delay(30000);
		P2=temp;
		
		for(i=9;i>1;i--)	//P1移位
			{			
			P1=led[i];
			Delay(30000);
			}
		//Delay(30000);
		P1=temp;
		
		for(i=9;i>1;i--)	//P0移位
			{
			P0=led[i];
			Delay(30000);			
			}
		//Delay(30000);
		P0=temp;
	
			
		
			for(j=0;j<255;j++)
			{
				P0=999-j;
				for(i=1;i<3;i++)
						{
						Delay(5000);
						}
			}
			
			for(j=255;j>=1;j--)
			{
				P1=j;
				for(i=1;i<3;i++)
						{
						Delay(5000);
						}
			}
			
			for(j=255;j>=0;j--)
			{
				P2=j;
				for(i=1;i<3;i++)
						{
						Delay(5000);
						}
			}
			
			for(j=255;j>=0;j--)
			{
				P3=j;
				for(i=1;i<3;i++)
						{
						Delay(5000);
						}
			}
*/

			
	}
}
	