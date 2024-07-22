#include<LPC214X.h>
int main()
{
	int i=0;
	while(1)
	{
		
	IODIR0|=(0x01<<1);
	IODIR0|=(0x01<<2);
	IODIR0|=(0x01<<3);
	IODIR0|=(0x01<<4);
	IODIR0|=(0x01<<8);
	IODIR0|=(0x01<<6);
	IODIR0|=(0x01<<7);
	

		//0
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 8);
	}
}
	
