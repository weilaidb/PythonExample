#define _CLK_H
enum dsp_clk_id ;
extern void dsp_clk_exit(void);
extern void dsp_clk_init(void);
void dsp_gpt_wait_overflow(short int clk_id, unsigned int load);
extern int dsp_clk_enable(enum dsp_clk_id clk_id);
u32 dsp_clock_enable_all(u32 dsp_per_clocks);
extern int dsp_clk_disable(enum dsp_clk_id clk_id);
extern u32 dsp_clk_get_iva2_rate(void);
u32 dsp_clock_disable_all(u32 dsp_per_clocks);
extern void ssi_clk_prepare(bool FLAG);
