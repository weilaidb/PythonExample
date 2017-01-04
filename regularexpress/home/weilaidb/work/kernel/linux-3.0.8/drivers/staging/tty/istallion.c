#define	BRD_UNKNOWN	0
#define	BRD_STALLION	1
#define	BRD_BRUMBY4	2
#define	BRD_ONBOARD2	3
#define	BRD_ONBOARD	4
#define	BRD_ONBOARDE	7
#define	BRD_ECP		23
#define BRD_ECPE	24
#define	BRD_ECPMC	25
#define	BRD_ECPPCI	29
#define	BRD_BRUMBY	BRD_BRUMBY4
struct stlconf ;
static unsigned int stli_nrbrds;
static spinlock_t stli_lock;
static spinlock_t brd_lock;
#define	STLI_EISAPROBE	0
#define	STL_SIOMEMMAJOR		28
#define	STL_SERIALMAJOR		24
#define	STL_CALLOUTMAJOR	25
static char	*stli_drvtitle = "Stallion Intelligent Multiport Serial Driver";
static char	*stli_drvname = "istallion";
static char	*stli_drvversion = "5.6.0";
static char	*stli_serialname = "ttyE";
static struct tty_driver	*stli_serial;
static const struct tty_port_operations stli_port_ops;
#define	STLI_TXBUFSIZE		4096
static char			*stli_txcookbuf;
static int			stli_txcooksize;
static int			stli_txcookrealsize;
static struct tty_struct	*stli_txcooktty;
static struct ktermios		stli_deftermios = ;
static comstats_t	stli_comstats;
static struct asystats	stli_cdkstats;
static DEFINE_MUTEX(stli_brdslock);
static struct stlibrd	*stli_brds[STL_MAXBRDS];
static int		stli_shared;
#define	BST_FOUND	0
#define	BST_STARTED	1
#define	BST_PROBED	2
#define	ST_OPENING	2
#define	ST_CLOSING	3
#define	ST_CMDING	4
#define	ST_TXBUSY	5
#define	ST_RXING	6
#define	ST_DOFLUSHRX	7
#define	ST_DOFLUSHTX	8
#define	ST_DOSIGS	9
#define	ST_RXSTOP	10
#define	ST_GETSIGS	11
static char	*stli_brdnames[] = ;
static char	*board0[8];
static char	*board1[8];
static char	*board2[8];
static char	*board3[8];
static char	**stli_brdsp[] = ;
static struct stlibrdtype  stli_brdstr[] = ;
MODULE_AUTHOR("Greg Ungerer");
MODULE_DESCRIPTION("Stallion Intelligent Multiport Serial Driver");
MODULE_LICENSE("GPL");
module_param_array(board0, charp, NULL, 0);
MODULE_PARM_DESC(board0, "Board 0 config -> name[,ioaddr[,memaddr]");
module_param_array(board1, charp, NULL, 0);
MODULE_PARM_DESC(board1, "Board 1 config -> name[,ioaddr[,memaddr]");
module_param_array(board2, charp, NULL, 0);
MODULE_PARM_DESC(board2, "Board 2 config -> name[,ioaddr[,memaddr]");
module_param_array(board3, charp, NULL, 0);
MODULE_PARM_DESC(board3, "Board 3 config -> name[,ioaddr[,memaddr]");
#if STLI_EISAPROBE != 0
static unsigned long	stli_eisamemprobeaddrs[] = ;
static int	stli_eisamempsize = ARRAY_SIZE(stli_eisamemprobeaddrs);
#define	PCI_DEVICE_ID_ECRA		0x0004
static struct pci_device_id istallion_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, istallion_pci_tbl);
static struct pci_driver stli_pcidriver;
#define	ECP_IOSIZE	4
#define	ECP_MEMSIZE	(128 * 1024)
#define	ECP_PCIMEMSIZE	(256 * 1024)
#define	ECP_ATPAGESIZE	(4 * 1024)
#define	ECP_MCPAGESIZE	(4 * 1024)
#define	ECP_EIPAGESIZE	(64 * 1024)
#define	ECP_PCIPAGESIZE	(64 * 1024)
#define	STL_EISAID	0x8c4e
#define	ECP_ATIREG	0
#define	ECP_ATCONFR	1
#define	ECP_ATMEMAR	2
#define	ECP_ATMEMPR	3
#define	ECP_ATSTOP	0x1
#define	ECP_ATINTENAB	0x10
#define	ECP_ATENABLE	0x20
#define	ECP_ATDISABLE	0x00
#define	ECP_ATADDRMASK	0x3f000
#define	ECP_ATADDRSHFT	12
#define	ECP_EIIREG	0
#define	ECP_EIMEMARL	1
#define	ECP_EICONFR	2
#define	ECP_EIMEMARH	3
#define	ECP_EIENABLE	0x1
#define	ECP_EIDISABLE	0x0
#define	ECP_EISTOP	0x4
#define	ECP_EIEDGE	0x00
#define	ECP_EILEVEL	0x80
#define	ECP_EIADDRMASKL	0x00ff0000
#define	ECP_EIADDRSHFTL	16
#define	ECP_EIADDRMASKH	0xff000000
#define	ECP_EIADDRSHFTH	24
#define	ECP_EIBRDENAB	0xc84
#define	ECP_EISAID	0x4
#define	ECP_MCIREG	0
#define	ECP_MCCONFR	1
#define	ECP_MCSTOP	0x20
#define	ECP_MCENABLE	0x80
#define	ECP_MCDISABLE	0x00
#define	ECP_PCIIREG	0
#define	ECP_PCICONFR	1
#define	ECP_PCISTOP	0x01
#define	ONB_IOSIZE	16
#define	ONB_MEMSIZE	(64 * 1024)
#define	ONB_ATPAGESIZE	(64 * 1024)
#define	ONB_MCPAGESIZE	(64 * 1024)
#define	ONB_EIMEMSIZE	(128 * 1024)
#define	ONB_EIPAGESIZE	(64 * 1024)
#define	ONB_ATIREG	0
#define	ONB_ATMEMAR	1
#define	ONB_ATCONFR	2
#define	ONB_ATSTOP	0x4
#define	ONB_ATENABLE	0x01
#define	ONB_ATDISABLE	0x00
#define	ONB_ATADDRMASK	0xff0000
#define	ONB_ATADDRSHFT	16
#define	ONB_MEMENABLO	0
#define	ONB_MEMENABHI	0x02
#define	ONB_EIIREG	0
#define	ONB_EIMEMARL	1
#define	ONB_EICONFR	2
#define	ONB_EIMEMARH	3
#define	ONB_EIENABLE	0x1
#define	ONB_EIDISABLE	0x0
#define	ONB_EISTOP	0x4
#define	ONB_EIEDGE	0x00
#define	ONB_EILEVEL	0x80
#define	ONB_EIADDRMASKL	0x00ff0000
#define	ONB_EIADDRSHFTL	16
#define	ONB_EIADDRMASKH	0xff000000
#define	ONB_EIADDRSHFTH	24
#define	ONB_EIBRDENAB	0xc84
#define	ONB_EISAID	0x1
#define	BBY_IOSIZE	16
#define	BBY_MEMSIZE	(64 * 1024)
#define	BBY_PAGESIZE	(16 * 1024)
#define	BBY_ATIREG	0
#define	BBY_ATCONFR	1
#define	BBY_ATSTOP	0x4
#define	STAL_IOSIZE	16
#define	STAL_MEMSIZE	(64 * 1024)
#define	STAL_PAGESIZE	(64 * 1024)
#define	ECH_PNLSTATUS	2
#define	ECH_PNL16PORT	0x20
#define	ECH_PNLIDMASK	0x07
#define	ECH_PNLXPID	0x40
#define	ECH_PNLINTRPEND	0x80
#define	EBRDINIT(brdp)						\
if (brdp->init != NULL)					\
(* brdp->init)(brdp)
#define	EBRDENABLE(brdp)					\
if (brdp->enable != NULL)				\
(* brdp->enable)(brdp);
#define	EBRDDISABLE(brdp)					\
if (brdp->disable != NULL)				\
(* brdp->disable)(brdp);
#define	EBRDINTR(brdp)						\
if (brdp->intr != NULL)					\
(* brdp->intr)(brdp);
#define	EBRDRESET(brdp)						\
if (brdp->reset != NULL)				\
(* brdp->reset)(brdp);
#define	EBRDGETMEMPTR(brdp,offset)				\
(* brdp->getmemptr)(brdp, offset, __LINE__)
#define	STL_MAXBAUD	460800
#define	STL_BAUDBASE	115200
#define	STL_CLOSEDELAY	(5 * HZ / 10)
#define	MINOR2BRD(min)		(((min) & 0xc0) >> 6)
#define	MINOR2PORT(min)		((min) & 0x3f)
static int	stli_parsebrd(struct stlconf *confp, char **argp);
static int	stli_open(struct tty_struct *tty, struct file *filp);
static void	stli_close(struct tty_struct *tty, struct file *filp);
static int	stli_write(struct tty_struct *tty, const unsigned char *buf, int count);
static int	stli_putchar(struct tty_struct *tty, unsigned char ch);
static void	stli_flushchars(struct tty_struct *tty);
static int	stli_writeroom(struct tty_struct *tty);
static int	stli_charsinbuffer(struct tty_struct *tty);
static int	stli_ioctl(struct tty_struct *tty, unsigned int cmd, unsigned long arg);
static void	stli_settermios(struct tty_struct *tty, struct ktermios *old);
static void	stli_throttle(struct tty_struct *tty);
static void	stli_unthrottle(struct tty_struct *tty);
static void	stli_stop(struct tty_struct *tty);
static void	stli_start(struct tty_struct *tty);
static void	stli_flushbuffer(struct tty_struct *tty);
static int	stli_breakctl(struct tty_struct *tty, int state);
static void	stli_waituntilsent(struct tty_struct *tty, int timeout);
static void	stli_sendxchar(struct tty_struct *tty, char ch);
static void	stli_hangup(struct tty_struct *tty);
static int	stli_brdinit(struct stlibrd *brdp);
static int	stli_startbrd(struct stlibrd *brdp);
static ssize_t	stli_memread(struct file *fp, char __user *buf, size_t count, loff_t *offp);
static ssize_t	stli_memwrite(struct file *fp, const char __user *buf, size_t count, loff_t *offp);
static long	stli_memioctl(struct file *fp, unsigned int cmd, unsigned long arg);
static void	stli_brdpoll(struct stlibrd *brdp, cdkhdr_t __iomem *hdrp);
static void	stli_poll(unsigned long arg);
static int	stli_hostcmd(struct stlibrd *brdp, struct stliport *portp);
static int	stli_initopen(struct tty_struct *tty, struct stlibrd *brdp, struct stliport *portp);
static int	stli_rawopen(struct stlibrd *brdp, struct stliport *portp, unsigned long arg, int wait);
static int	stli_rawclose(struct stlibrd *brdp, struct stliport *portp, unsigned long arg, int wait);
static int	stli_setport(struct tty_struct *tty);
static int	stli_cmdwait(struct stlibrd *brdp, struct stliport *portp, unsigned long cmd, void *arg, int size, int copyback);
static void	stli_sendcmd(struct stlibrd *brdp, struct stliport *portp, unsigned long cmd, void *arg, int size, int copyback);
static void	__stli_sendcmd(struct stlibrd *brdp, struct stliport *portp, unsigned long cmd, void *arg, int size, int copyback);
static void	stli_dodelaycmd(struct stliport *portp, cdkctrl_t __iomem *cp);
static void	stli_mkasyport(struct tty_struct *tty, struct stliport *portp, asyport_t *pp, struct ktermios *tiosp);
static void	stli_mkasysigs(asysigs_t *sp, int dtr, int rts);
static long	stli_mktiocm(unsigned long sigvalue);
static void	stli_read(struct stlibrd *brdp, struct stliport *portp);
static int	stli_getserial(struct stliport *portp, struct serial_struct __user *sp);
static int	stli_setserial(struct tty_struct *tty, struct serial_struct __user *sp);
static int	stli_getbrdstats(combrd_t __user *bp);
static int	stli_getportstats(struct tty_struct *tty, struct stliport *portp, comstats_t __user *cp);
static int	stli_portcmdstats(struct tty_struct *tty, struct stliport *portp);
static int	stli_clrportstats(struct stliport *portp, comstats_t __user *cp);
static int	stli_getportstruct(struct stliport __user *arg);
static int	stli_getbrdstruct(struct stlibrd __user *arg);
static struct stlibrd *stli_allocbrd(void);
static void	stli_ecpinit(struct stlibrd *brdp);
static void	stli_ecpenable(struct stlibrd *brdp);
static void	stli_ecpdisable(struct stlibrd *brdp);
static void __iomem *stli_ecpgetmemptr(struct stlibrd *brdp, unsigned long offset, int line);
static void	stli_ecpreset(struct stlibrd *brdp);
static void	stli_ecpintr(struct stlibrd *brdp);
static void	stli_ecpeiinit(struct stlibrd *brdp);
static void	stli_ecpeienable(struct stlibrd *brdp);
static void	stli_ecpeidisable(struct stlibrd *brdp);
static void __iomem *stli_ecpeigetmemptr(struct stlibrd *brdp, unsigned long offset, int line);
static void	stli_ecpeireset(struct stlibrd *brdp);
static void	stli_ecpmcenable(struct stlibrd *brdp);
static void	stli_ecpmcdisable(struct stlibrd *brdp);
static void __iomem *stli_ecpmcgetmemptr(struct stlibrd *brdp, unsigned long offset, int line);
static void	stli_ecpmcreset(struct stlibrd *brdp);
static void	stli_ecppciinit(struct stlibrd *brdp);
static void __iomem *stli_ecppcigetmemptr(struct stlibrd *brdp, unsigned long offset, int line);
static void	stli_ecppcireset(struct stlibrd *brdp);
static void	stli_onbinit(struct stlibrd *brdp);
static void	stli_onbenable(struct stlibrd *brdp);
static void	stli_onbdisable(struct stlibrd *brdp);
static void __iomem *stli_onbgetmemptr(struct stlibrd *brdp, unsigned long offset, int line);
static void	stli_onbreset(struct stlibrd *brdp);
static void	stli_onbeinit(struct stlibrd *brdp);
static void	stli_onbeenable(struct stlibrd *brdp);
static void	stli_onbedisable(struct stlibrd *brdp);
static void __iomem *stli_onbegetmemptr(struct stlibrd *brdp, unsigned long offset, int line);
static void	stli_onbereset(struct stlibrd *brdp);
static void	stli_bbyinit(struct stlibrd *brdp);
static void __iomem *stli_bbygetmemptr(struct stlibrd *brdp, unsigned long offset, int line);
static void	stli_bbyreset(struct stlibrd *brdp);
static void	stli_stalinit(struct stlibrd *brdp);
static void __iomem *stli_stalgetmemptr(struct stlibrd *brdp, unsigned long offset, int line);
static void	stli_stalreset(struct stlibrd *brdp);
static struct stliport *stli_getport(unsigned int brdnr, unsigned int panelnr, unsigned int portnr);
static int	stli_initecp(struct stlibrd *brdp);
static int	stli_initonb(struct stlibrd *brdp);
#if STLI_EISAPROBE != 0
static int	stli_eisamemprobe(struct stlibrd *brdp);
static int	stli_initports(struct stlibrd *brdp);
static const struct file_operations	stli_fsiomem = ;
static DEFINE_TIMER(stli_timerlist, stli_poll, 0, 0);
static int	stli_timeron;
#define	STLI_TIMEOUT	(jiffies + 1)
static struct class *istallion_class;
static void stli_cleanup_ports(struct stlibrd *brdp)
static int stli_parsebrd(struct stlconf *confp, char **argp)
static int stli_activate(struct tty_port *port, struct tty_struct *tty)
static int stli_open(struct tty_struct *tty, struct file *filp)
static void stli_shutdown(struct tty_port *port)
static void stli_close(struct tty_struct *tty, struct file *filp)
static int stli_initopen(struct tty_struct *tty,
struct stlibrd *brdp, struct stliport *portp)
static int stli_rawopen(struct stlibrd *brdp, struct stliport *portp, unsigned long arg, int wait)
static int stli_rawclose(struct stlibrd *brdp, struct stliport *portp, unsigned long arg, int wait)
static int stli_cmdwait(struct stlibrd *brdp, struct stliport *portp, unsigned long cmd, void *arg, int size, int copyback)
static int stli_setport(struct tty_struct *tty)
static int stli_carrier_raised(struct tty_port *port)
static void stli_dtr_rts(struct tty_port *port, int on)
static int stli_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int stli_putchar(struct tty_struct *tty, unsigned char ch)
static void stli_flushchars(struct tty_struct *tty)
static int stli_writeroom(struct tty_struct *tty)
static int stli_charsinbuffer(struct tty_struct *tty)
static int stli_getserial(struct stliport *portp, struct serial_struct __user *sp)
static int stli_setserial(struct tty_struct *tty, struct serial_struct __user *sp)
static int stli_tiocmget(struct tty_struct *tty)
static int stli_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int stli_ioctl(struct tty_struct *tty, unsigned int cmd, unsigned long arg)
static void stli_settermios(struct tty_struct *tty, struct ktermios *old)
static void stli_throttle(struct tty_struct *tty)
static void stli_unthrottle(struct tty_struct *tty)
static void stli_stop(struct tty_struct *tty)
static void stli_start(struct tty_struct *tty)
static void stli_hangup(struct tty_struct *tty)
static void stli_flushbuffer(struct tty_struct *tty)
static int stli_breakctl(struct tty_struct *tty, int state)
static void stli_waituntilsent(struct tty_struct *tty, int timeout)
static void stli_sendxchar(struct tty_struct *tty, char ch)
static void stli_portinfo(struct seq_file *m, struct stlibrd *brdp, struct stliport *portp, int portnr)
static int stli_proc_show(struct seq_file *m, void *v)
static int stli_proc_open(struct inode *inode, struct file *file)
static const struct file_operations stli_proc_fops = ;
static void __stli_sendcmd(struct stlibrd *brdp, struct stliport *portp, unsigned long cmd, void *arg, int size, int copyback)
static void stli_sendcmd(struct stlibrd *brdp, struct stliport *portp, unsigned long cmd, void *arg, int size, int copyback)
static void stli_read(struct stlibrd *brdp, struct stliport *portp)
static void stli_dodelaycmd(struct stliport *portp, cdkctrl_t __iomem *cp)
static int stli_hostcmd(struct stlibrd *brdp, struct stliport *portp)
static void stli_brdpoll(struct stlibrd *brdp, cdkhdr_t __iomem *hdrp)
static void stli_poll(unsigned long arg)
static void stli_mkasyport(struct tty_struct *tty, struct stliport *portp,
asyport_t *pp, struct ktermios *tiosp)
static void stli_mkasysigs(asysigs_t *sp, int dtr, int rts)
static long stli_mktiocm(unsigned long sigvalue)
static int stli_initports(struct stlibrd *brdp)
static void stli_ecpinit(struct stlibrd *brdp)
static void stli_ecpenable(struct stlibrd *brdp)
static void stli_ecpdisable(struct stlibrd *brdp)
static void __iomem *stli_ecpgetmemptr(struct stlibrd *brdp, unsigned long offset, int line)
static void stli_ecpreset(struct stlibrd *brdp)
static void stli_ecpintr(struct stlibrd *brdp)
static void stli_ecpeiinit(struct stlibrd *brdp)
static void stli_ecpeienable(struct stlibrd *brdp)
static void stli_ecpeidisable(struct stlibrd *brdp)
static void __iomem *stli_ecpeigetmemptr(struct stlibrd *brdp, unsigned long offset, int line)
static void stli_ecpeireset(struct stlibrd *brdp)
static void stli_ecpmcenable(struct stlibrd *brdp)
static void stli_ecpmcdisable(struct stlibrd *brdp)
static void __iomem *stli_ecpmcgetmemptr(struct stlibrd *brdp, unsigned long offset, int line)
static void stli_ecpmcreset(struct stlibrd *brdp)
static void stli_ecppciinit(struct stlibrd *brdp)
static void __iomem *stli_ecppcigetmemptr(struct stlibrd *brdp, unsigned long offset, int line)
static void stli_ecppcireset(struct stlibrd *brdp)
static void stli_onbinit(struct stlibrd *brdp)
static void stli_onbenable(struct stlibrd *brdp)
static void stli_onbdisable(struct stlibrd *brdp)
static void __iomem *stli_onbgetmemptr(struct stlibrd *brdp, unsigned long offset, int line)
static void stli_onbreset(struct stlibrd *brdp)
static void stli_onbeinit(struct stlibrd *brdp)
static void stli_onbeenable(struct stlibrd *brdp)
static void stli_onbedisable(struct stlibrd *brdp)
static void __iomem *stli_onbegetmemptr(struct stlibrd *brdp, unsigned long offset, int line)
static void stli_onbereset(struct stlibrd *brdp)
static void stli_bbyinit(struct stlibrd *brdp)
static void __iomem *stli_bbygetmemptr(struct stlibrd *brdp, unsigned long offset, int line)
static void stli_bbyreset(struct stlibrd *brdp)
static void stli_stalinit(struct stlibrd *brdp)
static void __iomem *stli_stalgetmemptr(struct stlibrd *brdp, unsigned long offset, int line)
static void stli_stalreset(struct stlibrd *brdp)
static int stli_initecp(struct stlibrd *brdp)
static int stli_initonb(struct stlibrd *brdp)
static int stli_startbrd(struct stlibrd *brdp)
static int __devinit stli_brdinit(struct stlibrd *brdp)
#if STLI_EISAPROBE != 0
static int stli_eisamemprobe(struct stlibrd *brdp)
static int stli_getbrdnr(void)
#if STLI_EISAPROBE != 0
static int __init stli_findeisabrds(void)
static inline int stli_findeisabrds(void)
static int __devinit stli_pciprobe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit stli_pciremove(struct pci_dev *pdev)
static struct pci_driver stli_pcidriver = ;
static struct stlibrd *stli_allocbrd(void)
static int __init stli_initbrds(void)
static ssize_t stli_memread(struct file *fp, char __user *buf, size_t count, loff_t *offp)
static ssize_t stli_memwrite(struct file *fp, const char __user *buf, size_t count, loff_t *offp)
static int stli_getbrdstats(combrd_t __user *bp)
static struct stliport *stli_getport(unsigned int brdnr, unsigned int panelnr,
unsigned int portnr)
static int stli_portcmdstats(struct tty_struct *tty, struct stliport *portp)
static int stli_getportstats(struct tty_struct *tty, struct stliport *portp,
comstats_t __user *cp)
static int stli_clrportstats(struct stliport *portp, comstats_t __user *cp)
static int stli_getportstruct(struct stliport __user *arg)
static int stli_getbrdstruct(struct stlibrd __user *arg)
static long stli_memioctl(struct file *fp, unsigned int cmd, unsigned long arg)
static const struct tty_operations stli_ops = ;
static const struct tty_port_operations stli_port_ops = ;
static void istallion_cleanup_isa(void)
static int __init istallion_module_init(void)
static void __exit istallion_module_exit(void)
module_init(istallion_module_init);
module_exit(istallion_module_exit);
