struct bt431_regs ;
static inline u16 bt431_set_value(u8 val)
static inline u8 bt431_get_value(u16 val)
#define BT431_REG_CMD		0x0000
#define BT431_REG_CXLO		0x0001
#define BT431_REG_CXHI		0x0002
#define BT431_REG_CYLO		0x0003
#define BT431_REG_CYHI		0x0004
#define BT431_REG_WXLO		0x0005
#define BT431_REG_WXHI		0x0006
#define BT431_REG_WYLO		0x0007
#define BT431_REG_WYHI		0x0008
#define BT431_REG_WWLO		0x0009
#define BT431_REG_WWHI		0x000a
#define BT431_REG_WHLO		0x000b
#define BT431_REG_WHHI		0x000c
#define BT431_REG_CRAM_BASE	0x0000
#define BT431_REG_CRAM_END	0x01ff
#define BT431_CMD_CURS_ENABLE	0x40
#define BT431_CMD_XHAIR_ENABLE	0x20
#define BT431_CMD_OR_CURSORS	0x10
#define BT431_CMD_AND_CURSORS	0x00
#define BT431_CMD_1_1_MUX	0x00
#define BT431_CMD_4_1_MUX	0x04
#define BT431_CMD_5_1_MUX	0x08
#define BT431_CMD_xxx_MUX	0x0c
#define BT431_CMD_THICK_1	0x00
#define BT431_CMD_THICK_3	0x01
#define BT431_CMD_THICK_5	0x02
#define BT431_CMD_THICK_7	0x03
static inline void bt431_select_reg(struct bt431_regs *regs, int ir)
static inline u8 bt431_read_reg_inc(struct bt431_regs *regs)
static inline void bt431_write_reg_inc(struct bt431_regs *regs, u8 value)
static inline u8 bt431_read_reg(struct bt431_regs *regs, int ir)
static inline void bt431_write_reg(struct bt431_regs *regs, int ir, u8 value)
static inline u16 bt431_read_cmap_inc(struct bt431_regs *regs)
static inline void bt431_write_cmap_inc(struct bt431_regs *regs, u16 value)
static inline u16 bt431_read_cmap(struct bt431_regs *regs, int cr)
static inline void bt431_write_cmap(struct bt431_regs *regs, int cr, u16 value)
static inline void bt431_enable_cursor(struct bt431_regs *regs)
static inline void bt431_erase_cursor(struct bt431_regs *regs)
static inline void bt431_position_cursor(struct bt431_regs *regs, u16 x, u16 y)
static inline void bt431_set_font(struct bt431_regs *regs, u8 fgc,
u16 width, u16 height)
static inline void bt431_init_cursor(struct bt431_regs *regs)
