#include <reg52.h>

//延时函数
void delay(unsigned int);
//主函数
void main(void)
{
	 unsigned char led,i;
	 while(1)
	 {
		  led=0xfe;
		  for(i=0;i<8;i++) 
		  {
			   P2=led;
			   delay(500);
			   led=(led<<1)+1;    						    
		  }
		  for(i=0;i<9;i++) 
		  {
			   P2=led;
			   delay(500);
			   led=led<<1;  
		  }
		  led=0xff;
		  for(i=8;i>0;i--)
		  {
			  P2=led;
			  delay(500);
			  led=led>>1;
		  }
		  for(i=0;i<5;i++)
		  {
			  P2=led;
			  delay(500);
			  led=(led<<2)+1;
		  }
		  for(i=0;i<5;i++)
		  {
			  P2=led;
			  delay(500);
			  led=(led>>2);
		  }
		  for(i=0;i<9;i++)
		  {
			  P2=led;
			  delay(500);
			led=(led>>1)+128;
		  }
//		  {
//			  led=0xe7;
//			  P2=led;
//			  delay(500);
//			  led=0xc3;
//			  P2=led;
//			  delay(500);
//			  led=0x81;
//			  P2=led;
//			  delay(500);
//			  led=0x00;
//			  P2=led;
//			  delay(500);
//		  }
//		  {
//			  led=0x7e;
//			  P2=led;
//			  delay(500);
//			  led=0x3c;
//			  P2=led;
//			  delay(500);
//			  led=0x18;
//			  P2=led;
//			  delay(500);
//			  led=0x00;
//			  P2=led;
//			  delay(500);
//		  }
//		  {
//			  led=0xe7;
//			  P2=led;
//			  delay(500);
//			  led=0xdb;
//			  P2=led;
//			  delay(500);
//			  led=0xbd;
//			  P2=led;
//			  delay(500);
//			  led=0x7e;
//			  P2=led;
//			  delay(500);
//		  }
//		  {
//			  led=0xbd;
//			  P2=led;
//			  delay(500);
//			  led=0xdb;
//			  P2=led;
//			  delay(500);
//			  led=0xe7;
//			  P2=led;
//			  delay(500);
//		  }
		  led=0xff;
		  P2=led;
		  delay(500);
	 }

}
void delay(unsigned int n)
{
 unsigned int x,y;
 for(x=0;x<n;x++)
 {
  for(y=0;y<121;y++)
  {
	;
  }
 }
}




