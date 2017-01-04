struct map_desc;
struct sys_timer;
extern void nuc900_init_irq(void);
extern struct sys_timer nuc900_timer;
extern void nuc960_board_init(void);
extern void nuc960_init_clocks(void);
extern void nuc960_map_io(void);
