void at32_clk_register(struct clk *clk);
struct clk ;
unsigned long pba_clk_get_rate(struct clk *clk);
void pba_clk_mode(struct clk *clk, int enabled);
