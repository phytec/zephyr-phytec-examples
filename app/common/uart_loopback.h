#ifndef UART_LOOPBACK_H
#define UART_LOOPBACK_H

/* size of stack area used by each thread */
#define UART_LOOPBACK_STACKSIZE		2048

/* scheduling priority used by each thread */
#define UART_LOOPBACK_PRIORITY		CONFIG_NUM_PREEMPT_PRIORITIES - 1

void uart_loopback(void);

#endif /* UART_LOOPBACK_H */

