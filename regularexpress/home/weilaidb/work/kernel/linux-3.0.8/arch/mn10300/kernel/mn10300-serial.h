#define _MN10300_SERIAL_H
#define NR_PORTS		3
#define MNSC_BUFFER_SIZE	+(PAGE_SIZE / 2)
#define MNSCx_RX_AVAIL		0x01
#define MNSCx_RX_OVERF		0x02
#define MNSCx_TX_SPACE		0x04
#define MNSCx_TX_EMPTY		0x08
struct mn10300_serial_port ;
extern struct mn10300_serial_port mn10300_serial_port_sif0;
extern struct mn10300_serial_port mn10300_serial_port_sif1;
extern struct mn10300_serial_port mn10300_serial_port_sif2;
extern struct mn10300_serial_port *mn10300_serial_ports[];
struct mn10300_serial_int ;
extern struct mn10300_serial_int mn10300_serial_int_tbl[];
extern asmlinkage void mn10300_serial_vdma_interrupt(void);
extern asmlinkage void mn10300_serial_vdma_rx_handler(void);
extern asmlinkage void mn10300_serial_vdma_tx_handler(void);
#if defined(CONFIG_GDBSTUB_ON_TTYSM0)
#define SCgSTR SC0STR
#define SCgRXB SC0RXB
#define SCgRXIRQ SC0RXIRQ
#elif defined(CONFIG_GDBSTUB_ON_TTYSM1)
#define SCgSTR SC1STR
#define SCgRXB SC1RXB
#define SCgRXIRQ SC1RXIRQ
#elif defined(CONFIG_GDBSTUB_ON_TTYSM2)
#define SCgSTR SC2STR
#define SCgRXB SC2RXB
#define SCgRXIRQ SC2RXIRQ
