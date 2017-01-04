#define	_SCC_H
#define PA0HZP		0x00
#define EAGLE		0x01
#define PC100		0x02
#define PRIMUS		0x04
#define DRSI		0x08
#define BAYCOM		0x10
enum SCC_ioctl_cmds ;
enum L1_params ;
enum FULLDUP_modes ;
#define TIMER_OFF	65535U
#define NO_SUCH_PARAM	65534U
enum HWEVENT_opts ;
#define RXGROUP		0100
#define TXGROUP		0200
enum CLOCK_sources ;
enum TX_state ;
typedef unsigned long io_port;
struct scc_stat ;
struct scc_modem ;
struct scc_kiss_cmd ;
struct scc_hw_config ;
struct scc_mem_config ;
struct scc_calibrate ;
enum ;
#define VECTOR_MASK	0x06
#define TXINT		0x00
#define EXINT		0x02
#define RXINT		0x04
#define SPINT		0x06
#define Inb(port)	inb_p(port)
#define Outb(port, val)	outb_p(val, port)
#define Inb(port)	inb(port)
#define Outb(port, val)	outb(val, port)
struct scc_kiss ;
struct scc_channel ;
