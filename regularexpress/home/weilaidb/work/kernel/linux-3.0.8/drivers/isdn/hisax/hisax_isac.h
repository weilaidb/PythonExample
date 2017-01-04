#define __HISAX_ISAC_H__
#define TIMER3_VALUE 7000
#define MAX_DFRAME_LEN_L1 300
#define ISAC_IOM1	0
struct isac ;
void isac_init(struct isac *isac);
void isac_d_l2l1(struct hisax_if *hisax_d_if, int pr, void *arg);
void isac_setup(struct isac *isac);
void isac_irq(struct isac *isac);
void isacsx_setup(struct isac *isac);
void isacsx_irq(struct isac *isac);
