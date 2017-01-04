#define CBE_REGS_H
#define HID0_CBE_THERM_WAKEUP	0x0000020000000000ul
#define HID0_CBE_SYSERR_WAKEUP	0x0000008000000000ul
#define HID0_CBE_THERM_INT_EN	0x0000000400000000ul
#define HID0_CBE_SYSERR_INT_EN	0x0000000200000000ul
#define MAX_CBE		2
union spe_reg ;
union ppe_spe_reg ;
struct cbe_pmd_regs ;
extern struct cbe_pmd_regs __iomem *cbe_get_pmd_regs(struct device_node *np);
extern struct cbe_pmd_regs __iomem *cbe_get_cpu_pmd_regs(int cpu);
struct cbe_pmd_shadow_regs ;
extern struct cbe_pmd_shadow_regs *cbe_get_pmd_shadow_regs(struct device_node *np);
extern struct cbe_pmd_shadow_regs *cbe_get_cpu_pmd_shadow_regs(int cpu);
struct cbe_iic_pending_bits ;
#define CBE_IIC_IRQ_VALID	0x80
#define CBE_IIC_IRQ_IPI		0x40
struct cbe_iic_thread_regs ;
struct cbe_iic_regs ;
extern struct cbe_iic_regs __iomem *cbe_get_iic_regs(struct device_node *np);
extern struct cbe_iic_regs __iomem *cbe_get_cpu_iic_regs(int cpu);
struct cbe_mic_tm_regs ;
extern struct cbe_mic_tm_regs __iomem *cbe_get_mic_tm_regs(struct device_node *np);
extern struct cbe_mic_tm_regs __iomem *cbe_get_cpu_mic_tm_regs(int cpu);
#define CBE_IOPTE_PP_W		0x8000000000000000ul
#define CBE_IOPTE_PP_R		0x4000000000000000ul
#define CBE_IOPTE_M		0x2000000000000000ul
#define CBE_IOPTE_SO_R		0x1000000000000000ul
#define CBE_IOPTE_SO_RW		0x1800000000000000ul
#define CBE_IOPTE_RPN_Mask	0x07fffffffffff000ul
#define CBE_IOPTE_H		0x0000000000000800ul
#define CBE_IOPTE_IOID_Mask	0x00000000000007fful
extern u32 cbe_get_hw_thread_id(int cpu);
extern u32 cbe_cpu_to_node(int cpu);
extern u32 cbe_node_to_cpu(int node);
extern void cbe_regs_init(void);
