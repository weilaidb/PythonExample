struct map_desc;
struct sys_timer;
extern void nuc93x_init_irq(void);
extern struct sys_timer nuc93x_timer;
extern void nuc932_board_init(void);
extern void nuc932_init_clocks(void);
extern void nuc932_map_io(void);
extern void nuc932_init_uartclk(void);
