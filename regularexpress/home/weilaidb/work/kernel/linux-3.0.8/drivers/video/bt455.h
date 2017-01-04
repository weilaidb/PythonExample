struct bt455_regs ;
static inline void bt455_select_reg(struct bt455_regs *regs, int ir)
static inline void bt455_read_cmap_entry(struct bt455_regs *regs, int cr,
u8* red, u8* green, u8* blue)
static inline void bt455_write_cmap_entry(struct bt455_regs *regs, int cr,
u8 red, u8 green, u8 blue)
static inline void bt455_write_ovly_entry(struct bt455_regs *regs, int cr,
u8 red, u8 green, u8 blue)
static inline void bt455_set_cursor(struct bt455_regs *regs)
static inline void bt455_erase_cursor(struct bt455_regs *regs)
