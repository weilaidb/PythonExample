#define __VIA_CLOCK_H__
enum via_clksrc ;
struct via_pll_config ;
struct via_clock ;
static inline u32 get_pll_internal_frequency(u32 ref_freq,
struct via_pll_config pll)
static inline u32 get_pll_output_frequency(u32 ref_freq,
struct via_pll_config pll)
void via_clock_init(struct via_clock *clock, int gfx_chip);
