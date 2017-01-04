#define __INC_MACH_MUX_H
struct mux_config ;
enum davinci_dm644x_index ;
enum davinci_dm646x_index ;
enum davinci_dm355_index ;
enum davinci_dm365_index ;
enum da830_index ;
enum davinci_da850_index ;
enum davinci_tnetv107x_index ;
#define PINMUX(x)		(4 * (x))
extern int davinci_cfg_reg(unsigned long reg_cfg);
extern int davinci_cfg_reg_list(const short pins[]);
static inline int davinci_cfg_reg(unsigned long reg_cfg)
static inline int davinci_cfg_reg_list(const short pins[])
