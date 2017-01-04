#define ROM_INT15_PHY_ADDR		0x0FF859
#define READ_EV				0xD8A4
#define WRITE_EV			0xD8A5
struct register_foo  __attribute__ ((packed));
struct all_reg  __attribute__ ((packed));
struct ev_hrt_header ;
struct ev_hrt_ctrl ;
static u8 evbuffer_init;
static u8 evbuffer_length;
static u8 evbuffer[1024];
static void __iomem *compaq_int15_entry_point;
static spinlock_t int15_lock;
static u32 add_byte( u32 **p_buffer, u8 value, u32 *used, u32 *avail)
static u32 add_dword( u32 **p_buffer, u32 value, u32 *used, u32 *avail)
static int check_for_compaq_ROM (void __iomem *rom_start)
static u32 access_EV (u16 operation, u8 *ev_name, u8 *buffer, u32 *buf_size)
static int load_HRT (void __iomem *rom_start)
static u32 store_HRT (void __iomem *rom_start)
void compaq_nvram_init (void __iomem *rom_start)
int compaq_nvram_load (void __iomem *rom_start, struct controller *ctrl)
int compaq_nvram_store (void __iomem *rom_start)
