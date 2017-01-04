#define _ASM_POWERPC_IMMAP_QE_H
#define QE_IMMAP_SIZE	(1024 * 1024)
struct qe_iram  __attribute__ ((packed));
struct qe_ic_regs  __attribute__ ((packed));
struct cp_qe  __attribute__ ((packed));
struct qe_mux  __attribute__ ((packed));
struct qe_timers  __attribute__ ((packed));
struct qe_brg  __attribute__ ((packed));
struct spi  __attribute__ ((packed));
struct si1  __attribute__ ((packed));
struct sir  __attribute__ ((packed));
struct qe_usb_ctlr  __attribute__ ((packed));
struct qe_mcc  __attribute__ ((packed));
struct ucc_slow  __attribute__ ((packed));
struct ucc_fast  __attribute__ ((packed));
struct ucc  __attribute__ ((packed));
struct upc  __attribute__ ((packed));
struct sdma  __attribute__ ((packed));
struct dbg  __attribute__ ((packed));
struct rsp  __attribute__ ((packed));
struct qe_immap  __attribute__ ((packed));
extern struct qe_immap __iomem *qe_immr;
extern phys_addr_t get_qe_base(void);
static inline phys_addr_t immrbar_virt_to_phys(void *address)
