#define __IBM_NEWEMAC_DEBUG_H
#if defined(CONFIG_IBM_NEW_EMAC_DEBUG)
struct emac_instance;
struct mal_instance;
extern void emac_dbg_register(struct emac_instance *dev);
extern void emac_dbg_unregister(struct emac_instance *dev);
extern void mal_dbg_register(struct mal_instance *mal);
extern void mal_dbg_unregister(struct mal_instance *mal);
extern int emac_init_debug(void) __init;
extern void emac_fini_debug(void) __exit;
extern void emac_dbg_dump_all(void);
# define DBG_LEVEL		1
# define emac_dbg_register(x)	do  while(0)
# define emac_dbg_unregister(x)	do  while(0)
# define mal_dbg_register(x)	do  while(0)
# define mal_dbg_unregister(x)	do  while(0)
# define emac_init_debug()	do  while(0)
# define emac_fini_debug()	do  while(0)
# define emac_dbg_dump_all()	do  while(0)
# define DBG_LEVEL		0
#define EMAC_DBG(d, name, fmt, arg...) \
printk(KERN_DEBUG #name "%s: " fmt, d->ofdev->dev.of_node->full_name, ## arg)
#if DBG_LEVEL > 0
#  define DBG(d,f,x...)		EMAC_DBG(d, emac, f, ##x)
#  define MAL_DBG(d,f,x...)	EMAC_DBG(d, mal, f, ##x)
#  define ZMII_DBG(d,f,x...)	EMAC_DBG(d, zmii, f, ##x)
#  define RGMII_DBG(d,f,x...)	EMAC_DBG(d, rgmii, f, ##x)
#  define NL			"\n"
#  define DBG(f,x...)		((void)0)
#  define MAL_DBG(d,f,x...)	((void)0)
#  define ZMII_DBG(d,f,x...)	((void)0)
#  define RGMII_DBG(d,f,x...)	((void)0)
#if DBG_LEVEL > 1
#  define DBG2(d,f,x...) 	DBG(d,f, ##x)
#  define MAL_DBG2(d,f,x...) 	MAL_DBG(d,f, ##x)
#  define ZMII_DBG2(d,f,x...) 	ZMII_DBG(d,f, ##x)
#  define RGMII_DBG2(d,f,x...) 	RGMII_DBG(d,f, ##x)
#  define DBG2(f,x...) 		((void)0)
#  define MAL_DBG2(d,f,x...) 	((void)0)
#  define ZMII_DBG2(d,f,x...) 	((void)0)
#  define RGMII_DBG2(d,f,x...) 	((void)0)
