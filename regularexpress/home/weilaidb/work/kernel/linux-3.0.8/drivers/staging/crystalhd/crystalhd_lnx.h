#define _CRYSTALHD_LNX_H_
#define CRYSTAL_HD_NAME		"Broadcom Crystal HD Decoder (BCM70012) Driver"
struct crystalhd_adp ;
struct crystalhd_adp *chd_get_adp(void);
void chd_set_log_level(struct crystalhd_adp *adp, char *arg);
