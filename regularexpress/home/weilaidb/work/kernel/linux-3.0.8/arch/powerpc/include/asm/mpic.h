#define _ASM_POWERPC_MPIC_H
#define MPIC_GREG_BASE			0x01000
#define MPIC_GREG_FEATURE_0		0x00000
#define		MPIC_GREG_FEATURE_LAST_SRC_MASK		0x07ff0000
#define		MPIC_GREG_FEATURE_LAST_SRC_SHIFT	16
#define		MPIC_GREG_FEATURE_LAST_CPU_MASK		0x00001f00
#define		MPIC_GREG_FEATURE_LAST_CPU_SHIFT	8
#define		MPIC_GREG_FEATURE_VERSION_MASK		0xff
#define MPIC_GREG_FEATURE_1		0x00010
#define MPIC_GREG_GLOBAL_CONF_0		0x00020
#define		MPIC_GREG_GCONF_RESET			0x80000000
#define		MPIC_GREG_GCONF_COREINT			0x60000000
#define		MPIC_GREG_GCONF_8259_PTHROU_DIS		0x20000000
#define		MPIC_GREG_GCONF_NO_BIAS			0x10000000
#define		MPIC_GREG_GCONF_BASE_MASK		0x000fffff
#define		MPIC_GREG_GCONF_MCK			0x08000000
#define MPIC_GREG_GLOBAL_CONF_1		0x00030
#define		MPIC_GREG_GLOBAL_CONF_1_SIE		0x08000000
#define		MPIC_GREG_GLOBAL_CONF_1_CLK_RATIO_MASK	0x70000000
#define		MPIC_GREG_GLOBAL_CONF_1_CLK_RATIO(r)	\
(((r) << 28) & MPIC_GREG_GLOBAL_CONF_1_CLK_RATIO_MASK)
#define MPIC_GREG_VENDOR_0		0x00040
#define MPIC_GREG_VENDOR_1		0x00050
#define MPIC_GREG_VENDOR_2		0x00060
#define MPIC_GREG_VENDOR_3		0x00070
#define MPIC_GREG_VENDOR_ID		0x00080
#define 	MPIC_GREG_VENDOR_ID_STEPPING_MASK	0x00ff0000
#define 	MPIC_GREG_VENDOR_ID_STEPPING_SHIFT	16
#define 	MPIC_GREG_VENDOR_ID_DEVICE_ID_MASK	0x0000ff00
#define 	MPIC_GREG_VENDOR_ID_DEVICE_ID_SHIFT	8
#define 	MPIC_GREG_VENDOR_ID_VENDOR_ID_MASK	0x000000ff
#define MPIC_GREG_PROCESSOR_INIT	0x00090
#define MPIC_GREG_IPI_VECTOR_PRI_0	0x000a0
#define MPIC_GREG_IPI_VECTOR_PRI_1	0x000b0
#define MPIC_GREG_IPI_VECTOR_PRI_2	0x000c0
#define MPIC_GREG_IPI_VECTOR_PRI_3	0x000d0
#define MPIC_GREG_IPI_STRIDE		0x10
#define MPIC_GREG_SPURIOUS		0x000e0
#define MPIC_GREG_TIMER_FREQ		0x000f0
#define MPIC_TIMER_BASE			0x01100
#define MPIC_TIMER_STRIDE		0x40
#define MPIC_TIMER_CURRENT_CNT		0x00000
#define MPIC_TIMER_BASE_CNT		0x00010
#define MPIC_TIMER_VECTOR_PRI		0x00020
#define MPIC_TIMER_DESTINATION		0x00030
#define MPIC_CPU_THISBASE		0x00000
#define MPIC_CPU_BASE			0x20000
#define MPIC_CPU_STRIDE			0x01000
#define MPIC_CPU_IPI_DISPATCH_0		0x00040
#define MPIC_CPU_IPI_DISPATCH_1		0x00050
#define MPIC_CPU_IPI_DISPATCH_2		0x00060
#define MPIC_CPU_IPI_DISPATCH_3		0x00070
#define MPIC_CPU_IPI_DISPATCH_STRIDE	0x00010
#define MPIC_CPU_CURRENT_TASK_PRI	0x00080
#define 	MPIC_CPU_TASKPRI_MASK			0x0000000f
#define MPIC_CPU_WHOAMI			0x00090
#define 	MPIC_CPU_WHOAMI_MASK			0x0000001f
#define MPIC_CPU_INTACK			0x000a0
#define MPIC_CPU_EOI			0x000b0
#define MPIC_CPU_MCACK			0x000c0
#define MPIC_IRQ_BASE			0x10000
#define MPIC_IRQ_STRIDE			0x00020
#define MPIC_IRQ_VECTOR_PRI		0x00000
#define 	MPIC_VECPRI_MASK			0x80000000
#define 	MPIC_VECPRI_ACTIVITY			0x40000000
#define 	MPIC_VECPRI_PRIORITY_MASK		0x000f0000
#define 	MPIC_VECPRI_PRIORITY_SHIFT		16
#define 	MPIC_VECPRI_VECTOR_MASK			0x000007ff
#define 	MPIC_VECPRI_POLARITY_POSITIVE		0x00800000
#define 	MPIC_VECPRI_POLARITY_NEGATIVE		0x00000000
#define 	MPIC_VECPRI_POLARITY_MASK		0x00800000
#define 	MPIC_VECPRI_SENSE_LEVEL			0x00400000
#define 	MPIC_VECPRI_SENSE_EDGE			0x00000000
#define 	MPIC_VECPRI_SENSE_MASK			0x00400000
#define MPIC_IRQ_DESTINATION		0x00010
#define MPIC_MAX_IRQ_SOURCES	2048
#define MPIC_MAX_CPUS		32
#define MPIC_MAX_ISU		32
#define TSI108_GREG_BASE		0x00000
#define TSI108_GREG_FEATURE_0		0x00000
#define TSI108_GREG_GLOBAL_CONF_0	0x00004
#define TSI108_GREG_VENDOR_ID		0x0000c
#define TSI108_GREG_IPI_VECTOR_PRI_0	0x00204
#define TSI108_GREG_IPI_STRIDE		0x0c
#define TSI108_GREG_SPURIOUS		0x00010
#define TSI108_GREG_TIMER_FREQ		0x00014
#define TSI108_TIMER_BASE		0x0030
#define TSI108_TIMER_STRIDE		0x10
#define TSI108_TIMER_CURRENT_CNT	0x00000
#define TSI108_TIMER_BASE_CNT		0x00004
#define TSI108_TIMER_VECTOR_PRI		0x00008
#define TSI108_TIMER_DESTINATION	0x0000c
#define TSI108_CPU_BASE			0x00300
#define TSI108_CPU_STRIDE		0x00040
#define TSI108_CPU_IPI_DISPATCH_0	0x00200
#define TSI108_CPU_IPI_DISPATCH_STRIDE	0x00000
#define TSI108_CPU_CURRENT_TASK_PRI	0x00000
#define TSI108_CPU_WHOAMI		0xffffffff
#define TSI108_CPU_INTACK		0x00004
#define TSI108_CPU_EOI			0x00008
#define TSI108_CPU_MCACK		0x00004
#define TSI108_IRQ_BASE			0x00100
#define TSI108_IRQ_STRIDE		0x00008
#define TSI108_IRQ_VECTOR_PRI		0x00000
#define TSI108_VECPRI_VECTOR_MASK	0x000000ff
#define TSI108_VECPRI_POLARITY_POSITIVE	0x01000000
#define TSI108_VECPRI_POLARITY_NEGATIVE	0x00000000
#define TSI108_VECPRI_SENSE_LEVEL	0x02000000
#define TSI108_VECPRI_SENSE_EDGE	0x00000000
#define TSI108_VECPRI_POLARITY_MASK	0x01000000
#define TSI108_VECPRI_SENSE_MASK	0x02000000
#define TSI108_IRQ_DESTINATION		0x00004
enum ;
struct mpic_irq_fixup
;
enum mpic_reg_type ;
struct mpic_reg_bank ;
struct mpic_irq_save ;
struct mpic
;
#define MPIC_PRIMARY			0x00000001
#define MPIC_BIG_ENDIAN			0x00000002
#define MPIC_U3_HT_IRQS			0x00000004
#define MPIC_BROKEN_IPI			0x00000008
#define MPIC_WANTS_RESET		0x00000010
#define MPIC_SPV_EOI			0x00000020
#define MPIC_NO_PTHROU_DIS		0x00000040
#define MPIC_USES_DCR			0x00000080
#define MPIC_LARGE_VECTORS		0x00000100
#define MPIC_ENABLE_MCK			0x00000200
#define MPIC_NO_BIAS			0x00000400
#define MPIC_BROKEN_FRR_NIRQS		0x00000800
#define MPIC_SINGLE_DEST_CPU		0x00001000
#define MPIC_ENABLE_COREINT		0x00002000
#define MPIC_NO_RESET			0x00004000
#define MPIC_FSL			0x00008000
#define MPIC_REGSET_MASK		0xf0000000
#define MPIC_REGSET(val)		(((val) & 0xf ) << 28)
#define MPIC_GET_REGSET(flags)		(((flags) >> 28) & 0xf)
#define	MPIC_REGSET_STANDARD		MPIC_REGSET(0)
#define	MPIC_REGSET_TSI108		MPIC_REGSET(1)
extern struct mpic *mpic_alloc(struct device_node *node,
phys_addr_t phys_addr,
unsigned int flags,
unsigned int isu_size,
unsigned int irq_count,
const char *name);
extern void mpic_assign_isu(struct mpic *mpic, unsigned int isu_num,
phys_addr_t phys_addr);
extern void mpic_set_default_senses(struct mpic *mpic, u8 *senses, int count);
extern void mpic_init(struct mpic *mpic);
extern void mpic_irq_set_priority(unsigned int irq, unsigned int pri);
extern void mpic_setup_this_cpu(void);
extern void mpic_teardown_this_cpu(int secondary);
extern int mpic_cpu_get_priority(void);
extern void mpic_cpu_set_priority(int prio);
extern void mpic_request_ipis(void);
void smp_mpic_message_pass(int target, int msg);
extern void mpic_unmask_irq(struct irq_data *d);
extern void mpic_mask_irq(struct irq_data *d);
extern void mpic_end_irq(struct irq_data *d);
extern unsigned int mpic_get_one_irq(struct mpic *mpic);
extern unsigned int mpic_get_irq(void);
extern unsigned int mpic_get_coreint_irq(void);
extern unsigned int mpic_get_mcirq(void);
void mpic_set_clk_ratio(struct mpic *mpic, u32 clock_ratio);
void mpic_set_serial_int(struct mpic *mpic, int enable);
