#define __DRIVERS_PARIDE_H__
#define PARIDE_H_VERSION 	"1.01"
#define	PI_PD	0
#define PI_PCD	1
#define PI_PF   2
#define PI_PT	3
#define PI_PG   4
struct pi_adapter  ;
typedef struct pi_adapter PIA;
extern int pi_init(PIA *pi,
int autoprobe,
int port,
int mode,
int unit,
int protocol,
int delay,
char * scratch,
int devtype,
int verbose,
char *device
);
extern void pi_release(PIA *pi);
extern void pi_write_regr(PIA *pi, int cont, int regr, int val);
extern int pi_read_regr(PIA *pi, int cont, int regr);
extern void pi_write_block(PIA *pi, char * buf, int count);
extern void pi_read_block(PIA *pi, char * buf, int count);
extern void pi_connect(PIA *pi);
extern void pi_disconnect(PIA *pi);
extern void pi_do_claimed(PIA *pi, void (*cont)(void));
extern int pi_schedule_claimed(PIA *pi, void (*cont)(void));
#define delay_p			(pi->delay?udelay(pi->delay):(void)0)
#define out_p(offs,byte)	outb(byte,pi->port+offs); delay_p;
#define in_p(offs)		(delay_p,inb(pi->port+offs))
#define w0(byte)
#define r0()                    (in_p(0) & 0xff)
#define w1(byte)
#define r1()                    (in_p(1) & 0xff)
#define w2(byte)
#define r2()                    (in_p(2) & 0xff)
#define w3(byte)
#define w4(byte)
#define r4()                    (in_p(4) & 0xff)
#define w4w(data)
#define w4l(data)
#define r4w()         		(delay_p,inw(pi->port+4)&0xffff)
#define r4l()         		(delay_p,inl(pi->port+4)&0xffffffff)
static inline u16 pi_swab16( char *b, int k)
static inline u32 pi_swab32( char *b, int k)
struct pi_protocol ;
typedef struct pi_protocol PIP;
extern int paride_register( PIP * );
extern void paride_unregister ( PIP * );
