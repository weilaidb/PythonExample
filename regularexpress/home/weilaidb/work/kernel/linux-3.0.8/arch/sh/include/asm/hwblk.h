#define __ASM_SH_HWBLK_H
#define HWBLK_CNT_USAGE 0
#define HWBLK_CNT_IDLE 1
#define HWBLK_CNT_DEVICES 2
#define HWBLK_CNT_NR 3
#define HWBLK_AREA_FLAG_PARENT (1 << 0)
#define HWBLK_AREA(_flags, _parent)		\
struct hwblk_area ;
#define HWBLK(_mstp, _bit, _area)		\
struct hwblk ;
struct hwblk_info ;
int arch_hwblk_init(void);
int arch_hwblk_sleep_mode(void);
int hwblk_register(struct hwblk_info *info);
int hwblk_init(void);
void hwblk_enable(struct hwblk_info *info, int hwblk);
void hwblk_disable(struct hwblk_info *info, int hwblk);
void hwblk_cnt_inc(struct hwblk_info *info, int hwblk, int cnt);
void hwblk_cnt_dec(struct hwblk_info *info, int hwblk, int cnt);
#define SH_HWBLK_CLK(_hwblk, _parent, _flags)	\
[_hwblk] =
int sh_hwblk_clk_register(struct clk *clks, int nr);
