#define RIO_NBOARDS        4
#define RIO_PORTSPERBOARD 128
#define RIO_NPORTS        (RIO_NBOARDS * RIO_PORTSPERBOARD)
#define MODEM_SUPPORT
#define RIO_MAGIC 0x12345678
struct vpd_prom ;
#define RIO_DEBUG_ALL           0xffffffff
#define O_OTHER(tty)    \
((O_OLCUC(tty))  ||\
(O_ONLCR(tty))   ||\
(O_OCRNL(tty))   ||\
(O_ONOCR(tty))   ||\
(O_ONLRET(tty))  ||\
(O_OFILL(tty))   ||\
(O_OFDEL(tty))   ||\
(O_NLDLY(tty))   ||\
(O_CRDLY(tty))   ||\
(O_TABDLY(tty))  ||\
(O_BSDLY(tty))   ||\
(O_VTDLY(tty))   ||\
(O_FFDLY(tty)))
#define I_OTHER(tty)    \
((I_INLCR(tty))  ||\
(I_IGNCR(tty))   ||\
(I_ICRNL(tty))   ||\
(I_IUCLC(tty))   ||\
(L_ISIG(tty)))
#define RIO_BOARD_INTR_LOCK  1
#define RIOCTL_MISC_MINOR    169
#if 1
#define rio_spin_lock_irqsave(sem, flags) do  while (0)
#define rio_spin_unlock_irqrestore(sem, flags) do  while (0)
#define rio_spin_lock(sem) do  while (0)
#define rio_spin_unlock(sem) do  while (0)
#define rio_spin_lock_irqsave(sem, flags) \
spin_lock_irqsave(sem, flags)
#define rio_spin_unlock_irqrestore(sem, flags) \
spin_unlock_irqrestore(sem, flags)
#define rio_spin_lock(sem) \
spin_lock(sem)
#define rio_spin_unlock(sem) \
spin_unlock(sem)
static inline void __iomem *rio_memcpy_toio(void __iomem *dummy, void __iomem *dest, void *source, int n)
static inline void __iomem *rio_copy_toio(void __iomem *dest, void *source, int n)
static inline void *rio_memcpy_fromio(void *dest, void __iomem *source, int n)
#define rio_memcpy_toio(dummy,dest,source,n)   memcpy_toio(dest, source, n)
#define rio_copy_toio   		       memcpy_toio
#define rio_memcpy_fromio                      memcpy_fromio
#define DEBUG 1
#define rio_dprintk(f, str...) do  while (0)
#define func_enter() rio_dprintk (RIO_DEBUG_FLOW, "rio: enter %s\n", __func__)
#define func_exit()  rio_dprintk (RIO_DEBUG_FLOW, "rio: exit  %s\n", __func__)
#define func_enter2() rio_dprintk (RIO_DEBUG_FLOW, "rio: enter %s (port %d)\n",__func__, port->line)
#define rio_dprintk(f, str...)
#define func_enter()
#define func_exit()
#define func_enter2()
