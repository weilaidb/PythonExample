#define bootrom_set_bit(sc, reg, bit)				\
bootrom_write((sc), (reg),				\
bootrom_read((sc), (reg)) | (bit))
#define bootrom_clear_bit(sc, reg, bit)				\
bootrom_write((sc), (reg),				\
bootrom_read((sc), (reg)) & ~(bit))
static inline void cpld_set_bit(struct channel *channel, unsigned reg, u32 bit)
static inline void cpld_clear_bit(struct channel *channel, unsigned reg, u32 bit)
void cpld_init(struct channel *sc)
void cpld_start_intr(struct channel *sc)
void cpld_stop_intr(struct channel *sc)
void cpld_set_frame_mode(struct channel *sc, u32 mode)
void cpld_set_frame_type(struct channel *sc, u32 type)
void cpld_set_scrambler(struct channel *sc, u32 mode)
void cpld_set_crc(struct channel *sc, u32 crc)
void cpld_select_panel(struct channel *sc, u32 panel)
extern void cpld_set_clock(struct channel *sc, u32 mode)
void cpld_set_pad_count(struct channel *sc, u32 count)
void cpld_LOS_update(struct channel *sc)
void cpld_set_fractional_mode(struct channel *sc, u32 mode,
u32 start, u32 stop)
