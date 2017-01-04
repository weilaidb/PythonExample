#define _ASM_POWERPC_QE_IC_H
struct device_node;
struct qe_ic;
#define NUM_OF_QE_IC_GROUPS	6
#define QE_IC_SPREADMODE_GRP_W			0x00000001
#define QE_IC_SPREADMODE_GRP_X			0x00000002
#define QE_IC_SPREADMODE_GRP_Y			0x00000004
#define QE_IC_SPREADMODE_GRP_Z			0x00000008
#define QE_IC_SPREADMODE_GRP_RISCA		0x00000010
#define QE_IC_SPREADMODE_GRP_RISCB		0x00000020
#define QE_IC_LOW_SIGNAL			0x00000100
#define QE_IC_HIGH_SIGNAL			0x00000200
#define QE_IC_GRP_W_PRI0_DEST_SIGNAL_HIGH	0x00001000
#define QE_IC_GRP_W_PRI1_DEST_SIGNAL_HIGH	0x00002000
#define QE_IC_GRP_X_PRI0_DEST_SIGNAL_HIGH	0x00004000
#define QE_IC_GRP_X_PRI1_DEST_SIGNAL_HIGH	0x00008000
#define QE_IC_GRP_Y_PRI0_DEST_SIGNAL_HIGH	0x00010000
#define QE_IC_GRP_Y_PRI1_DEST_SIGNAL_HIGH	0x00020000
#define QE_IC_GRP_Z_PRI0_DEST_SIGNAL_HIGH	0x00040000
#define QE_IC_GRP_Z_PRI1_DEST_SIGNAL_HIGH	0x00080000
#define QE_IC_GRP_RISCA_PRI0_DEST_SIGNAL_HIGH	0x00100000
#define QE_IC_GRP_RISCA_PRI1_DEST_SIGNAL_HIGH	0x00200000
#define QE_IC_GRP_RISCB_PRI0_DEST_SIGNAL_HIGH	0x00400000
#define QE_IC_GRP_RISCB_PRI1_DEST_SIGNAL_HIGH	0x00800000
#define QE_IC_GRP_W_DEST_SIGNAL_SHIFT		(12)
enum qe_ic_grp_id ;
void qe_ic_init(struct device_node *node, unsigned int flags,
void (*low_handler)(unsigned int irq, struct irq_desc *desc),
void (*high_handler)(unsigned int irq, struct irq_desc *desc));
unsigned int qe_ic_get_low_irq(struct qe_ic *qe_ic);
unsigned int qe_ic_get_high_irq(struct qe_ic *qe_ic);
static inline void qe_ic_init(struct device_node *node, unsigned int flags,
void (*low_handler)(unsigned int irq, struct irq_desc *desc),
void (*high_handler)(unsigned int irq, struct irq_desc *desc))
static inline unsigned int qe_ic_get_low_irq(struct qe_ic *qe_ic)
static inline unsigned int qe_ic_get_high_irq(struct qe_ic *qe_ic)
void qe_ic_set_highest_priority(unsigned int virq, int high);
int qe_ic_set_priority(unsigned int virq, unsigned int priority);
int qe_ic_set_high_priority(unsigned int virq, unsigned int priority, int high);
static inline void qe_ic_cascade_low_ipic(unsigned int irq,
struct irq_desc *desc)
static inline void qe_ic_cascade_high_ipic(unsigned int irq,
struct irq_desc *desc)
static inline void qe_ic_cascade_low_mpic(unsigned int irq,
struct irq_desc *desc)
static inline void qe_ic_cascade_high_mpic(unsigned int irq,
struct irq_desc *desc)
static inline void qe_ic_cascade_muxed_mpic(unsigned int irq,
struct irq_desc *desc)
