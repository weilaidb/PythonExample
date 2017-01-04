#define STICORE_H
#define MAX_STI_ROMS 4
#define STI_REGION_MAX 8
#define STI_DEV_NAME_LENGTH 32
#define STI_MONITOR_MAX 256
#define STI_FONT_HPROMAN8 1
#define STI_FONT_KANA8 2
#define STI_WAIT 1
#define STI_PTR(p)	( virt_to_phys(p) )
#define PTR_STI(p)	( phys_to_virt((unsigned long)p) )
#define STI_CALL(func, flags, inptr, outptr, glob_cfg)	\
()
#define sti_onscreen_x(sti) (sti->glob_cfg->onscreen_x)
#define sti_onscreen_y(sti) (sti->glob_cfg->onscreen_y)
#define sti_font_x(sti) (PTR_STI(sti->font)->width)
#define sti_font_y(sti) (PTR_STI(sti->font)->height)
typedef union region  region_t;
#define REGION_OFFSET_TO_PHYS( rt, hpa ) \
(((rt).region_desc.offset << 12) + (hpa))
struct sti_glob_cfg_ext ;
struct sti_glob_cfg ;
struct sti_init_flags ;
struct sti_init_inptr_ext ;
struct sti_init_inptr ;
struct sti_init_outptr ;
struct sti_conf_flags ;
struct sti_conf_inptr ;
struct sti_conf_outptr_ext ;
struct sti_conf_outptr ;
struct sti_rom ;
struct sti_rom_font ;
struct sti_cooked_font ;
struct sti_cooked_rom ;
struct sti_font_inptr ;
struct sti_font_flags ;
struct sti_font_outptr ;
struct sti_blkmv_flags ;
struct sti_blkmv_inptr ;
struct sti_blkmv_outptr ;
struct sti_struct ;
struct sti_struct *sti_get_rom(unsigned int index);
void sti_putc(struct sti_struct *sti, int c, int y, int x);
void sti_set(struct sti_struct *sti, int src_y, int src_x,
int height, int width, u8 color);
void sti_clear(struct sti_struct *sti, int src_y, int src_x,
int height, int width, int c);
void sti_bmove(struct sti_struct *sti, int src_y, int src_x,
int dst_y, int dst_x, int height, int width);
