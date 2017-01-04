#define MPC52xx_PSC_SR		0x04
#define MPC52xx_PSC_SR_RXRDY		0x0100
#define MPC52xx_PSC_SR_RXFULL		0x0200
#define MPC52xx_PSC_SR_TXRDY		0x0400
#define MPC52xx_PSC_SR_TXEMP		0x0800
#define MPC52xx_PSC_BUFFER	0x0C
static void *psc;
static int psc_open(void)
static void psc_putc(unsigned char c)
static unsigned char psc_tstc(void)
static unsigned char psc_getc(void)
int mpc5200_psc_console_init(void *devp, struct serial_console_data *scdp)
