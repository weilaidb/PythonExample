#define __S390_ETR_H
struct etr_eacr  __attribute__ ((packed));
enum etr_psc ;
enum etr_lpsc ;
struct etr_esw  __attribute__ ((packed));
struct etr_slsw  __attribute__ ((packed));
struct etr_edf1  __attribute__ ((packed));
struct etr_edf2  __attribute__ ((packed));
struct etr_edf3  __attribute__ ((packed));
struct etr_edf4  __attribute__ ((packed));
struct etr_aib  __attribute__ ((packed,aligned(8)));
struct etr_irq_parm  __attribute__ ((packed));
struct etr_ptff_qto  __attribute__ ((packed));
static inline int etr_setr(struct etr_eacr *ctrl)
static inline int etr_stetr(struct etr_aib *aib)
static inline int etr_steai(struct etr_aib *aib, unsigned int func)
#define ETR_STEAI_STEPPING_PORT		0x10
#define ETR_STEAI_ALTERNATE_PORT	0x11
#define ETR_STEAI_PORT_0		0x12
#define ETR_STEAI_PORT_1		0x13
static inline int etr_ptff(void *ptff_block, unsigned int func)
#define ETR_PTFF_QAF	0x00
#define ETR_PTFF_QTO	0x01
#define ETR_PTFF_QSI	0x02
#define ETR_PTFF_ATO	0x40
#define ETR_PTFF_STO	0x41
#define ETR_PTFF_SFS	0x42
#define ETR_PTFF_SGS	0x43
void etr_switch_to_local(void);
void etr_sync_check(void);
struct stp_irq_parm  __attribute__ ((packed));
#define STP_OP_SYNC	1
#define STP_OP_CTRL	3
struct stp_sstpi  __attribute__ ((packed));
void stp_sync_check(void);
void stp_island_check(void);
