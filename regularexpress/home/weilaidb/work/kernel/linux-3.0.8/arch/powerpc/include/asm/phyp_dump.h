#define _PPC64_PHYP_DUMP_H
#define PHYP_DUMP_RMR_START 0x0
#define PHYP_DUMP_RMR_END   (1UL<<28)
struct phyp_dump ;
extern struct phyp_dump *phyp_dump_info;
int early_init_dt_scan_phyp_dump(unsigned long node,
const char *uname, int depth, void *data);
