#define _HGPK_H
#define HGPK_GS		0xff
#define HGPK_PT		0xcf
enum hgpk_model_t ;
enum hgpk_spew_flag ;
#define SPEW_WATCH_COUNT 42
enum hgpk_mode ;
struct hgpk_data ;
#define hgpk_dbg(psmouse, format, arg...)		\
dev_dbg(&(psmouse)->ps2dev.serio->dev, format, ## arg)
#define hgpk_err(psmouse, format, arg...)		\
dev_err(&(psmouse)->ps2dev.serio->dev, format, ## arg)
#define hgpk_info(psmouse, format, arg...)		\
dev_info(&(psmouse)->ps2dev.serio->dev, format, ## arg)
#define hgpk_warn(psmouse, format, arg...)		\
dev_warn(&(psmouse)->ps2dev.serio->dev, format, ## arg)
#define hgpk_notice(psmouse, format, arg...)		\
dev_notice(&(psmouse)->ps2dev.serio->dev, format, ## arg)
void hgpk_module_init(void);
int hgpk_detect(struct psmouse *psmouse, bool set_properties);
int hgpk_init(struct psmouse *psmouse);
static inline void hgpk_module_init(void)
static inline int hgpk_detect(struct psmouse *psmouse, bool set_properties)
static inline int hgpk_init(struct psmouse *psmouse)
