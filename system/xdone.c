/* xdone.c - xdone */

#include <master.h>

/*
 *  xdone  -  Print system completion message as last process exits
 */
void	xdone(void)
{
	kprintf("\n\nAll user processes have completed.\n\n");
	halt();				/* Halt the processor		*/
}
