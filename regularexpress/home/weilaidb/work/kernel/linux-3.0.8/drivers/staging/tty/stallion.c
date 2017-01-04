#define	BRD_EASYIO	20
#define	BRD_ECH		21
#define	BRD_ECHMC	22
#define	BRD_ECHPCI	26
#define	BRD_ECH64PCI	27
#define	BRD_EASYIOPCI	28
struct stlconf ;
static unsigned int stl_nrbrds;
#define	STL_SIOMEMMAJOR		28
#define	STL_SERIALMAJOR		24
#define	STL_CALLOUTMAJOR	25
#define	STL_TXBUFLOW		512
#define	STL_TXBUFSIZE		4096
static char	*stl_drvtitle = "Stallion Multiport Serial Driver";
static char	*stl_drvname = "stallion";
static char	*stl_drvversion = "5.6.0";
static struct tty_driver	*stl_serial;
static struct ktermios		stl_deftermios = ;
static char		stl_unwanted[SC26198_RXFIFOSIZE];
static DEFINE_MUTEX(stl_brdslock);
static struct stlbrd		*stl_brds[STL_MAXBRDS];
static const struct tty_port_operations stl_port_ops;
#define	BRD_FOUND	0x1
#define STL_PROBED	0x2
#define	ASYI_TXBUSY	1
#define	ASYI_TXLOW	2
#define	ASYI_TXFLOWED	3
static char	*stl_brdnames[] = ;
static unsigned int stl_nargs;
static char	*board0[4];
static char	*board1[4];
static char	*board2[4];
static char	*board3[4];
static char	**stl_brdsp[] = ;
static struct  stl_brdstr[] = ;
module_param_array(board0, charp, &stl_nargs, 0);
MODULE_PARM_DESC(board0, "Board 0 config -> name[,ioaddr[,ioaddr2][,irq]]");
module_param_array(board1, charp, &stl_nargs, 0);
MODULE_PARM_DESC(board1, "Board 1 config -> name[,ioaddr[,ioaddr2][,irq]]");
module_param_array(board2, charp, &stl_nargs, 0);
MODULE_PARM_DESC(board2, "Board 2 config -> name[,ioaddr[,ioaddr2][,irq]]");
module_param_array(board3, charp, &stl_nargs, 0);
MODULE_PARM_DESC(board3, "Board 3 config -> name[,ioaddr[,ioaddr2][,irq]]");
#define	EIO_8PORTRS	0x04
#define	EIO_4PORTRS	0x05
#define	EIO_8PORTDI	0x00
#define	EIO_8PORTM	0x06
#define	EIO_MK3		0x03
#define	EIO_IDBITMASK	0x07
#define	EIO_BRDMASK	0xf0
#define	ID_BRD4		0x10
#define	ID_BRD8		0x20
#define	ID_BRD16	0x30
#define	EIO_INTRPEND	0x08
#define	EIO_INTEDGE	0x00
#define	EIO_INTLEVEL	0x08
#define	EIO_0WS		0x10
#define	ECH_ID		0xa0
#define	ECH_IDBITMASK	0xe0
#define	ECH_BRDENABLE	0x08
#define	ECH_BRDDISABLE	0x00
#define	ECH_INTENABLE	0x01
#define	ECH_INTDISABLE	0x00
#define	ECH_INTLEVEL	0x02
#define	ECH_INTEDGE	0x00
#define	ECH_INTRPEND	0x01
#define	ECH_BRDRESET	0x01
#define	ECHMC_INTENABLE	0x01
#define	ECHMC_BRDRESET	0x02
#define	ECH_PNLSTATUS	2
#define	ECH_PNL16PORT	0x20
#define	ECH_PNLIDMASK	0x07
#define	ECH_PNLXPID	0x40
#define	ECH_PNLINTRPEND	0x80
#define	ECH_ADDR2MASK	0x1e0
static unsigned char	stl_vecmap[] = ;
static spinlock_t brd_lock;
static spinlock_t stallion_lock;
#define	BRDENABLE(brdnr,pagenr)						\
if (stl_brds[(brdnr)]->brdtype == BRD_ECH)			\
outb((stl_brds[(brdnr)]->ioctrlval | ECH_BRDENABLE),	\
stl_brds[(brdnr)]->ioctrl);			\
else if (stl_brds[(brdnr)]->brdtype == BRD_ECHPCI)		\
outb((pagenr), stl_brds[(brdnr)]->ioctrl);
#define	BRDDISABLE(brdnr)						\
if (stl_brds[(brdnr)]->brdtype == BRD_ECH)			\
outb((stl_brds[(brdnr)]->ioctrlval | ECH_BRDDISABLE),	\
stl_brds[(brdnr)]->ioctrl);
#define	STL_CD1400MAXBAUD	230400
#define	STL_SC26198MAXBAUD	460800
#define	STL_BAUDBASE		115200
#define	STL_CLOSEDELAY		(5 * HZ / 10)
#define	PCI_VENDOR_ID_STALLION		0x124d
#define	PCI_DEVICE_ID_ECHPCI832		0x0000
#define	PCI_DEVICE_ID_ECHPCI864		0x0002
#define	PCI_DEVICE_ID_EIOPCI		0x0003
static struct pci_device_id stl_pcibrds[] = ;
MODULE_DEVICE_TABLE(pci, stl_pcibrds);
#define	MINOR2BRD(min)		(((min) & 0xc0) >> 6)
#define	MINOR2PORT(min)		((min) & 0x3f)
static unsigned int	stl_baudrates[] = ;
static long	stl_memioctl(struct file *fp, unsigned int cmd, unsigned long arg);
static int	stl_brdinit(struct stlbrd *brdp);
static int	stl_getportstats(struct tty_struct *tty, struct stlport *portp, comstats_t __user *cp);
static int	stl_clrportstats(struct stlport *portp, comstats_t __user *cp);
static void	stl_cd1400setreg(struct stlport *portp, int regnr, int value);
static int	stl_cd1400getreg(struct stlport *portp, int regnr);
static int	stl_cd1400updatereg(struct stlport *portp, int regnr, int value);
static int	stl_cd1400panelinit(struct stlbrd *brdp, struct stlpanel *panelp);
static void	stl_cd1400portinit(struct stlbrd *brdp, struct stlpanel *panelp, struct stlport *portp);
static void	stl_cd1400setport(struct stlport *portp, struct ktermios *tiosp);
static int	stl_cd1400getsignals(struct stlport *portp);
static void	stl_cd1400setsignals(struct stlport *portp, int dtr, int rts);
static void	stl_cd1400ccrwait(struct stlport *portp);
static void	stl_cd1400enablerxtx(struct stlport *portp, int rx, int tx);
static void	stl_cd1400startrxtx(struct stlport *portp, int rx, int tx);
static void	stl_cd1400disableintrs(struct stlport *portp);
static void	stl_cd1400sendbreak(struct stlport *portp, int len);
static void	stl_cd1400flowctrl(struct stlport *portp, int state);
static void	stl_cd1400sendflow(struct stlport *portp, int state);
static void	stl_cd1400flush(struct stlport *portp);
static int	stl_cd1400datastate(struct stlport *portp);
static void	stl_cd1400eiointr(struct stlpanel *panelp, unsigned int iobase);
static void	stl_cd1400echintr(struct stlpanel *panelp, unsigned int iobase);
static void	stl_cd1400txisr(struct stlpanel *panelp, int ioaddr);
static void	stl_cd1400rxisr(struct stlpanel *panelp, int ioaddr);
static void	stl_cd1400mdmisr(struct stlpanel *panelp, int ioaddr);
static inline int	stl_cd1400breakisr(struct stlport *portp, int ioaddr);
static void	stl_sc26198setreg(struct stlport *portp, int regnr, int value);
static int	stl_sc26198getreg(struct stlport *portp, int regnr);
static int	stl_sc26198updatereg(struct stlport *portp, int regnr, int value);
static int	stl_sc26198getglobreg(struct stlport *portp, int regnr);
static int	stl_sc26198panelinit(struct stlbrd *brdp, struct stlpanel *panelp);
static void	stl_sc26198portinit(struct stlbrd *brdp, struct stlpanel *panelp, struct stlport *portp);
static void	stl_sc26198setport(struct stlport *portp, struct ktermios *tiosp);
static int	stl_sc26198getsignals(struct stlport *portp);
static void	stl_sc26198setsignals(struct stlport *portp, int dtr, int rts);
static void	stl_sc26198enablerxtx(struct stlport *portp, int rx, int tx);
static void	stl_sc26198startrxtx(struct stlport *portp, int rx, int tx);
static void	stl_sc26198disableintrs(struct stlport *portp);
static void	stl_sc26198sendbreak(struct stlport *portp, int len);
static void	stl_sc26198flowctrl(struct stlport *portp, int state);
static void	stl_sc26198sendflow(struct stlport *portp, int state);
static void	stl_sc26198flush(struct stlport *portp);
static int	stl_sc26198datastate(struct stlport *portp);
static void	stl_sc26198wait(struct stlport *portp);
static void	stl_sc26198txunflow(struct stlport *portp, struct tty_struct *tty);
static void	stl_sc26198intr(struct stlpanel *panelp, unsigned int iobase);
static void	stl_sc26198txisr(struct stlport *port);
static void	stl_sc26198rxisr(struct stlport *port, unsigned int iack);
static void	stl_sc26198rxbadch(struct stlport *portp, unsigned char status, char ch);
static void	stl_sc26198rxbadchars(struct stlport *portp);
static void	stl_sc26198otherisr(struct stlport *port, unsigned int iack);
typedef struct uart  uart_t;
#define	stl_panelinit		(* ((uart_t *) panelp->uartp)->panelinit)
#define	stl_portinit		(* ((uart_t *) portp->uartp)->portinit)
#define	stl_setport		(* ((uart_t *) portp->uartp)->setport)
#define	stl_getsignals		(* ((uart_t *) portp->uartp)->getsignals)
#define	stl_setsignals		(* ((uart_t *) portp->uartp)->setsignals)
#define	stl_enablerxtx		(* ((uart_t *) portp->uartp)->enablerxtx)
#define	stl_startrxtx		(* ((uart_t *) portp->uartp)->startrxtx)
#define	stl_disableintrs	(* ((uart_t *) portp->uartp)->disableintrs)
#define	stl_sendbreak		(* ((uart_t *) portp->uartp)->sendbreak)
#define	stl_flowctrl		(* ((uart_t *) portp->uartp)->flowctrl)
#define	stl_sendflow		(* ((uart_t *) portp->uartp)->sendflow)
#define	stl_flush		(* ((uart_t *) portp->uartp)->flush)
#define	stl_datastate		(* ((uart_t *) portp->uartp)->datastate)
static uart_t stl_cd1400uart = ;
#define	EREG_ADDR	0
#define	EREG_DATA	4
#define	EREG_RXACK	5
#define	EREG_TXACK	6
#define	EREG_MDACK	7
#define	EREG_BANKSIZE	8
#define	CD1400_CLK	25000000
#define	CD1400_CLK8M	20000000
static int	stl_cd1400clkdivs[] = ;
static uart_t stl_sc26198uart = ;
#define	XP_DATA		0
#define	XP_ADDR		1
#define	XP_MODID	2
#define	XP_STATUS	2
#define	XP_IACK		3
#define	XP_BANKSIZE	4
static unsigned int	sc26198_baudtable[] = ;
#define	SC26198_NRBAUDS		ARRAY_SIZE(sc26198_baudtable)
static const struct file_operations	stl_fsiomem = ;
static struct class *stallion_class;
static void stl_cd_change(struct stlport *portp)
static int __init stl_parsebrd(struct stlconf *confp, char **argp)
static struct stlbrd *stl_allocbrd(void)
static int stl_activate(struct tty_port *port, struct tty_struct *tty)
static int stl_open(struct tty_struct *tty, struct file *filp)
static int stl_carrier_raised(struct tty_port *port)
static void stl_dtr_rts(struct tty_port *port, int on)
static void stl_flushbuffer(struct tty_struct *tty)
static void stl_waituntilsent(struct tty_struct *tty, int timeout)
static void stl_shutdown(struct tty_port *port)
static void stl_close(struct tty_struct *tty, struct file *filp)
static int stl_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int stl_putchar(struct tty_struct *tty, unsigned char ch)
static void stl_flushchars(struct tty_struct *tty)
static int stl_writeroom(struct tty_struct *tty)
static int stl_charsinbuffer(struct tty_struct *tty)
static int stl_getserial(struct stlport *portp, struct serial_struct __user *sp)
static int stl_setserial(struct tty_struct *tty, struct serial_struct __user *sp)
static int stl_tiocmget(struct tty_struct *tty)
static int stl_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int stl_ioctl(struct tty_struct *tty, unsigned int cmd, unsigned long arg)
static void stl_start(struct tty_struct *tty)
static void stl_settermios(struct tty_struct *tty, struct ktermios *old)
static void stl_throttle(struct tty_struct *tty)
static void stl_unthrottle(struct tty_struct *tty)
static void stl_stop(struct tty_struct *tty)
static void stl_hangup(struct tty_struct *tty)
static int stl_breakctl(struct tty_struct *tty, int state)
static void stl_sendxchar(struct tty_struct *tty, char ch)
static void stl_portinfo(struct seq_file *m, struct stlport *portp, int portnr)
static int stl_proc_show(struct seq_file *m, void *v)
static int stl_proc_open(struct inode *inode, struct file *file)
static const struct file_operations stl_proc_fops = ;
static irqreturn_t stl_intr(int irq, void *dev_id)
static int stl_eiointr(struct stlbrd *brdp)
static int stl_echatintr(struct stlbrd *brdp)
static int stl_echmcaintr(struct stlbrd *brdp)
static int stl_echpciintr(struct stlbrd *brdp)
static int stl_echpci64intr(struct stlbrd *brdp)
static int __devinit stl_initports(struct stlbrd *brdp, struct stlpanel *panelp)
static void stl_cleanup_panels(struct stlbrd *brdp)
static int __devinit stl_initeio(struct stlbrd *brdp)
static int __devinit stl_initech(struct stlbrd *brdp)
static int __devinit stl_brdinit(struct stlbrd *brdp)
static int __devinit stl_getbrdnr(void)
static int __devinit stl_pciprobe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit stl_pciremove(struct pci_dev *pdev)
static struct pci_driver stl_pcidriver = ;
static int stl_getbrdstats(combrd_t __user *bp)
static struct stlport *stl_getport(int brdnr, int panelnr, int portnr)
static int stl_getportstats(struct tty_struct *tty, struct stlport *portp, comstats_t __user *cp)
static int stl_clrportstats(struct stlport *portp, comstats_t __user *cp)
static int stl_getportstruct(struct stlport __user *arg)
static int stl_getbrdstruct(struct stlbrd __user *arg)
static long stl_memioctl(struct file *fp, unsigned int cmd, unsigned long arg)
static const struct tty_operations stl_ops = ;
static const struct tty_port_operations stl_port_ops = ;
static int stl_cd1400getreg(struct stlport *portp, int regnr)
static void stl_cd1400setreg(struct stlport *portp, int regnr, int value)
static int stl_cd1400updatereg(struct stlport *portp, int regnr, int value)
static int stl_cd1400panelinit(struct stlbrd *brdp, struct stlpanel *panelp)
static void stl_cd1400portinit(struct stlbrd *brdp, struct stlpanel *panelp, struct stlport *portp)
static void stl_cd1400ccrwait(struct stlport *portp)
static void stl_cd1400setport(struct stlport *portp, struct ktermios *tiosp)
static void stl_cd1400setsignals(struct stlport *portp, int dtr, int rts)
static int stl_cd1400getsignals(struct stlport *portp)
static void stl_cd1400enablerxtx(struct stlport *portp, int rx, int tx)
static void stl_cd1400startrxtx(struct stlport *portp, int rx, int tx)
static void stl_cd1400disableintrs(struct stlport *portp)
static void stl_cd1400sendbreak(struct stlport *portp, int len)
static void stl_cd1400flowctrl(struct stlport *portp, int state)
static void stl_cd1400sendflow(struct stlport *portp, int state)
static void stl_cd1400flush(struct stlport *portp)
static int stl_cd1400datastate(struct stlport *portp)
static void stl_cd1400eiointr(struct stlpanel *panelp, unsigned int iobase)
static void stl_cd1400echintr(struct stlpanel *panelp, unsigned int iobase)
static int stl_cd1400breakisr(struct stlport *portp, int ioaddr)
static void stl_cd1400txisr(struct stlpanel *panelp, int ioaddr)
static void stl_cd1400rxisr(struct stlpanel *panelp, int ioaddr)
static void stl_cd1400mdmisr(struct stlpanel *panelp, int ioaddr)
static int stl_sc26198getreg(struct stlport *portp, int regnr)
static void stl_sc26198setreg(struct stlport *portp, int regnr, int value)
static int stl_sc26198updatereg(struct stlport *portp, int regnr, int value)
static int stl_sc26198getglobreg(struct stlport *portp, int regnr)
static int stl_sc26198panelinit(struct stlbrd *brdp, struct stlpanel *panelp)
static void stl_sc26198portinit(struct stlbrd *brdp, struct stlpanel *panelp, struct stlport *portp)
static void stl_sc26198setport(struct stlport *portp, struct ktermios *tiosp)
static void stl_sc26198setsignals(struct stlport *portp, int dtr, int rts)
static int stl_sc26198getsignals(struct stlport *portp)
static void stl_sc26198enablerxtx(struct stlport *portp, int rx, int tx)
static void stl_sc26198startrxtx(struct stlport *portp, int rx, int tx)
static void stl_sc26198disableintrs(struct stlport *portp)
static void stl_sc26198sendbreak(struct stlport *portp, int len)
static void stl_sc26198flowctrl(struct stlport *portp, int state)
static void stl_sc26198sendflow(struct stlport *portp, int state)
static void stl_sc26198flush(struct stlport *portp)
static int stl_sc26198datastate(struct stlport *portp)
static void stl_sc26198wait(struct stlport *portp)
static void stl_sc26198txunflow(struct stlport *portp, struct tty_struct *tty)
static void stl_sc26198intr(struct stlpanel *panelp, unsigned int iobase)
static void stl_sc26198txisr(struct stlport *portp)
static void stl_sc26198rxisr(struct stlport *portp, unsigned int iack)
static void stl_sc26198rxbadch(struct stlport *portp, unsigned char status, char ch)
static void stl_sc26198rxbadchars(struct stlport *portp)
static void stl_sc26198otherisr(struct stlport *portp, unsigned int iack)
static void stl_free_isabrds(void)
static int __init stallion_module_init(void)
static void __exit stallion_module_exit(void)
module_init(stallion_module_init);
module_exit(stallion_module_exit);
MODULE_AUTHOR("Greg Ungerer");
MODULE_DESCRIPTION("Stallion Multiport Serial Driver");
MODULE_LICENSE("GPL");
