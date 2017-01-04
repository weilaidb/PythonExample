#define __LINUX_MTD_QINFO_H
struct lpddr_private ;
struct qinfo_query_info ;
struct qinfo_chip ;
#define LPDDR_MFR_ANY		0xffff
#define LPDDR_ID_ANY		0xffff
#define NUMONYX_MFGR_ID		0x0089
#define R18_DEVICE_ID_1G	0x893c
static inline map_word lpddr_build_cmd(u_long cmd, struct map_info *map)
#define CMD(x) lpddr_build_cmd(x, map)
#define CMDVAL(cmd) cmd.x[0]
struct mtd_info *lpddr_cmdset(struct map_info *);
