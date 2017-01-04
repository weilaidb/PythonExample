#define _CTCM_DBUG_H_
#define do_debug 1
#define do_debug 0
#define do_debug_ccw 1
#define DEBUGDATA 1
#define do_debug_ccw 0
#define do_debug_data 1
#define do_debug_data 0
#define	CTC_DBF_ALWAYS	0
#define	CTC_DBF_EMERG	0
#define	CTC_DBF_ALERT	1
#define	CTC_DBF_CRIT	2
#define	CTC_DBF_ERROR	3
#define	CTC_DBF_WARN	4
#define	CTC_DBF_NOTICE	5
#define	CTC_DBF_INFO	5
#define	CTC_DBF_DEBUG	6
enum ctcm_dbf_names ;
struct ctcm_dbf_info ;
extern struct ctcm_dbf_info ctcm_dbf[CTCM_DBF_INFOS];
int ctcm_register_dbf_views(void);
void ctcm_unregister_dbf_views(void);
void ctcm_dbf_longtext(enum ctcm_dbf_names dbf_nix, int level, char *text, ...);
static inline const char *strtail(const char *s, int n)
#define CTCM_FUNTAIL strtail((char *)__func__, 16)
#define CTCM_DBF_TEXT(name, level, text) \
do  while (0)
#define CTCM_DBF_HEX(name, level, addr, len) \
do  while (0)
#define CTCM_DBF_TEXT_(name, level, text...) \
ctcm_dbf_longtext(CTCM_DBF_##name, level, text)
#define CTCM_DBF_DEV_NAME(cat, dev, text) \
do  while (0)
#define MPC_DBF_DEV_NAME(cat, dev, text) \
do  while (0)
#define CTCMY_DBF_DEV_NAME(cat, dev, text) \
do  while (0)
#define CTCM_DBF_DEV(cat, dev, text) \
do  while (0)
#define MPC_DBF_DEV(cat, dev, text) \
do  while (0)
#define CTCMY_DBF_DEV(cat, dev, text) \
do  while (0)
