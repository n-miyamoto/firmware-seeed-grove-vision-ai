//#include <edge_impulse_firmware/edge_impulse_firmware.h>
#include "hx_drv_uart.h"
#include "console_io.h"

static DEV_UART *console_uart;
char str[32];

int main(void)
{
    console_uart = hx_drv_uart_get_dev((USE_SS_UART_E)CONSOLE_UART_ID);
	//edge_impulse_firmware();
	int c=0;
	while (1) {
		//busy wait
		for(int i=0;i<1000000;i++){
			for(int j=0;j<100;j++){
				c++;
			}
		}

		snprintf(str, 32, "Hello World from uart %d\r\n", c/100000000);
		console_uart->uart_write(str, 32);
	}
}
