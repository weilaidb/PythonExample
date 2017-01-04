#define __PLAT_SHIRQ_H
struct shirq_dev_config ;
struct shirq_regs ;
struct spear_shirq ;
int spear_shirq_register(struct spear_shirq *shirq);
