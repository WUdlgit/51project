#include <REGX52.H>
#include "Nixie.h"
#include "Delay.h"

void main()
{
		while(1)
		{
				Nixie(1,5);
				Nixie(2,2);
				Nixie(3,0);
				Nixie(4,1);
				Nixie(5,3);
				Nixie(6,1);
				Nixie(7,4);
		}
}