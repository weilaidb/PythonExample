#define __BUDGET_DVB__
extern int budget_debug;
#undef dprintk
#define dprintk(level,args...) \
do  while (0)
struct budget_info ;
struct budget ;
#define MAKE_BUDGET_INFO(x_var,x_name,x_type) \
static struct budget_info x_var ## _info = ;	\
static struct saa7146_pci_extension_data x_var = ;
#define BUDGET_TT		   0
#define BUDGET_TT_HW_DISEQC	   1
#define BUDGET_PATCH		   3
#define BUDGET_FS_ACTIVY	   4
#define BUDGET_CIN1200S		   5
#define BUDGET_CIN1200C		   6
#define BUDGET_CIN1200T		   7
#define BUDGET_KNC1S		   8
#define BUDGET_KNC1C		   9
#define BUDGET_KNC1T		   10
#define BUDGET_KNC1SP		   11
#define BUDGET_KNC1CP		   12
#define BUDGET_KNC1TP		   13
#define BUDGET_TVSTAR		   14
#define BUDGET_CIN1200C_MK3	   15
#define BUDGET_KNC1C_MK3	   16
#define BUDGET_KNC1CP_MK3	   17
#define BUDGET_KNC1S2              18
#define BUDGET_VIDEO_PORTA         0
#define BUDGET_VIDEO_PORTB         1
extern int ttpci_budget_init(struct budget *budget, struct saa7146_dev *dev,
struct saa7146_pci_extension_data *info,
struct module *owner, short *adapter_nums);
extern void ttpci_budget_init_hooks(struct budget *budget);
extern int ttpci_budget_deinit(struct budget *budget);
extern void ttpci_budget_irq10_handler(struct saa7146_dev *dev, u32 * isr);
extern void ttpci_budget_set_video_port(struct saa7146_dev *dev, int video_port);
extern int ttpci_budget_debiread(struct budget *budget, u32 config, int addr, int count,
int uselocks, int nobusyloop);
extern int ttpci_budget_debiwrite(struct budget *budget, u32 config, int addr, int count, u32 value,
int uselocks, int nobusyloop);
