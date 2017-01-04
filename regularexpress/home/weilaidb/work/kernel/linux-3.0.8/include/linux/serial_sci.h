#define __LINUX_SERIAL_SCI_H
enum ;
#define SCSCR_TIE	(1 << 7)
#define SCSCR_RIE	(1 << 6)
#define SCSCR_TE	(1 << 5)
#define SCSCR_RE	(1 << 4)
#define SCSCR_REIE	(1 << 3)
#define SCSCR_TOIE	(1 << 2)
#define SCSCR_CKE1	(1 << 1)
#define SCSCR_CKE0	(1 << 0)
enum ;
#define SCIx_IRQ_MUXED(irq)		\
struct device;
struct plat_sci_port ;
