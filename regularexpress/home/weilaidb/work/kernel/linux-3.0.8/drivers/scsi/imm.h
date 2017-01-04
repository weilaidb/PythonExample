#define _IMM_H
#define   IMM_VERSION   "2.05 (for Linux 2.4.0)"
#define   IMM_AUTODETECT        0
#define   IMM_NIBBLE            1
#define   IMM_PS2               2
#define   IMM_EPP_8             3
#define   IMM_EPP_16            4
#define   IMM_EPP_32            5
#define   IMM_UNKNOWN           6
static char *IMM_MODE_STRING[] =
;
#define IMM_BURST_SIZE	512
#define IMM_SELECT_TMO  500
#define IMM_SPIN_TMO    5000
#define IMM_DEBUG	0
#define IN_EPP_MODE(x) (x == IMM_EPP_8 || x == IMM_EPP_16 || x == IMM_EPP_32)
#define CONNECT_EPP_MAYBE 1
#define CONNECT_NORMAL  0
#define r_dtr(x)        (unsigned char)inb((x))
#define r_str(x)        (unsigned char)inb((x)+1)
#define r_ctr(x)        (unsigned char)inb((x)+2)
#define r_epp(x)        (unsigned char)inb((x)+4)
#define r_fifo(x)       (unsigned char)inb((x))
#define r_ecr(x)        (unsigned char)inb((x)+2)
#define w_dtr(x,y)      outb(y, (x))
#define w_str(x,y)      outb(y, (x)+1)
#define w_epp(x,y)      outb(y, (x)+4)
#define w_fifo(x,y)     outb(y, (x))
#define w_ecr(x,y)      outb(y, (x)+0x2)
#define w_ctr(x,y)      outb_p(y, (x)+2)
#define w_ctr(x,y)      outb(y, (x)+2)
static int imm_engine(imm_struct *, struct scsi_cmnd *);
