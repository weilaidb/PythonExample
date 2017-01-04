#define icn_h
#define ICN_IOCTL_SETMMIO   0
#define ICN_IOCTL_GETMMIO   1
#define ICN_IOCTL_SETPORT   2
#define ICN_IOCTL_GETPORT   3
#define ICN_IOCTL_LOADBOOT  4
#define ICN_IOCTL_LOADPROTO 5
#define ICN_IOCTL_LEASEDCFG 6
#define ICN_IOCTL_GETDOUBLE 7
#define ICN_IOCTL_DEBUGVAR  8
#define ICN_IOCTL_ADDCARD   9
typedef struct icn_cdef  icn_cdef;
#if defined(__KERNEL__) || defined(__DEBUGVAR__)
#define OUTB_P(v,p)
#define OUTB_P outb
#define ICN_BASEADDR 0x320
#define ICN_PORTLEN (0x04)
#define ICN_MEMADDR 0x0d0000
#define ICN_FLAGS_B1ACTIVE 1
#define ICN_FLAGS_B2ACTIVE 2
#define ICN_FLAGS_RUNNING  4
#define ICN_FLAGS_RBTIMER  8
#define ICN_BOOT_TIMEOUT1  1000
#define ICN_TIMER_BCREAD (HZ/100)
#define ICN_TIMER_DCREAD (HZ/2)
#define ICN_CODE_STAGE1 4096
#define ICN_CODE_STAGE2 65536
#define ICN_MAX_SQUEUE 8000
#define ICN_FRAGSIZE (250)
#define ICN_BCH 2
#define SHM_DCTL_OFFSET (0)
#define SHM_CCTL_OFFSET (0x1d2)
#define SHM_CBUF_OFFSET (0x200)
#define SHM_DBUF_OFFSET (0x2000)
typedef struct  frag_buf;
typedef union  icn_shmem;
typedef struct icn_card  icn_card;
typedef struct icn_dev  icn_dev;
typedef icn_dev *icn_devptr;
static icn_card *cards = (icn_card *) 0;
static u_char chan2bank[] =
;
static icn_dev dev;
#define ICN_CFG    (card->port)
#define ICN_MAPRAM (card->port+1)
#define ICN_RUN    (card->port+2)
#define ICN_BANK   (card->port+3)
#define sbfree (((readb(&dev.shmem->data_control.scns)+1) & 0xf) != \
readb(&dev.shmem->data_control.scnr))
#define sbnext (writeb((readb(&dev.shmem->data_control.scns)+1) & 0xf, \
&dev.shmem->data_control.scns))
#define sbuf_n dev.shmem->data_control.scns
#define sbuf_d dev.shmem->data_buffers.send_buf[readb(&sbuf_n)].data
#define sbuf_l dev.shmem->data_buffers.send_buf[readb(&sbuf_n)].length
#define sbuf_f dev.shmem->data_buffers.send_buf[readb(&sbuf_n)].endflag
#define rbavl  (readb(&dev.shmem->data_control.ecnr) != \
readb(&dev.shmem->data_control.ecns))
#define rbnext (writeb((readb(&dev.shmem->data_control.ecnr)+1) & 0xf, \
&dev.shmem->data_control.ecnr))
#define rbuf_n dev.shmem->data_control.ecnr
#define rbuf_d dev.shmem->data_buffers.receive_buf[readb(&rbuf_n)].data
#define rbuf_l dev.shmem->data_buffers.receive_buf[readb(&rbuf_n)].length
#define rbuf_f dev.shmem->data_buffers.receive_buf[readb(&rbuf_n)].endflag
#define cmd_o (dev.shmem->comm_control.pcio_o)
#define cmd_i (dev.shmem->comm_control.pcio_i)
#define cmd_free ((readb(&cmd_i)>=readb(&cmd_o))? \
0x100-readb(&cmd_i)+readb(&cmd_o): \
readb(&cmd_o)-readb(&cmd_i))
#define msg_o (dev.shmem->comm_control.iopc_o)
#define msg_i (dev.shmem->comm_control.iopc_i)
#define msg_avail ((readb(&msg_o)>readb(&msg_i))? \
0x100-readb(&msg_o)+readb(&msg_i): \
readb(&msg_i)-readb(&msg_o))
#define CID (card->interface.id)
