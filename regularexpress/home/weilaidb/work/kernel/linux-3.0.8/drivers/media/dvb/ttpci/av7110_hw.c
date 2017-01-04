#define _NOHANDSHAKE
int av7110_debiwrite(struct av7110 *av7110, u32 config,
int addr, u32 val, int count)
u32 av7110_debiread(struct av7110 *av7110, u32 config, int addr, int count)
static int waitdebi(struct av7110 *av7110, int adr, int state)
static int load_dram(struct av7110 *av7110, u32 *data, int len)
int av7110_bootarm(struct av7110 *av7110)
MODULE_FIRMWARE("av7110/bootcode.bin");
int av7110_wait_msgstate(struct av7110 *av7110, u16 flags)
static int __av7110_send_fw_cmd(struct av7110 *av7110, u16* buf, int length)
static int av7110_send_fw_cmd(struct av7110 *av7110, u16* buf, int length)
int av7110_fw_cmd(struct av7110 *av7110, int type, int com, int num, ...)
int av7110_fw_request(struct av7110 *av7110, u16 *request_buf,
int request_buf_len, u16 *reply_buf, int reply_buf_len)
static int av7110_fw_query(struct av7110 *av7110, u16 tag, u16* buf, s16 length)
int av7110_firmversion(struct av7110 *av7110)
int av7110_diseqc_send(struct av7110 *av7110, int len, u8 *msg, unsigned long burst)
static inline int SetColorBlend(struct av7110 *av7110, u8 windownr)
static inline int SetBlend_(struct av7110 *av7110, u8 windownr,
enum av7110_osd_palette_type colordepth, u16 index, u8 blending)
static inline int SetColor_(struct av7110 *av7110, u8 windownr,
enum av7110_osd_palette_type colordepth, u16 index, u16 colorhi, u16 colorlo)
static inline int SetFont(struct av7110 *av7110, u8 windownr, u8 fontsize,
u16 colorfg, u16 colorbg)
static int FlushText(struct av7110 *av7110)
static int WriteText(struct av7110 *av7110, u8 win, u16 x, u16 y, char *buf)
static inline int DrawLine(struct av7110 *av7110, u8 windownr,
u16 x, u16 y, u16 dx, u16 dy, u16 color)
static inline int DrawBlock(struct av7110 *av7110, u8 windownr,
u16 x, u16 y, u16 dx, u16 dy, u16 color)
static inline int HideWindow(struct av7110 *av7110, u8 windownr)
static inline int MoveWindowRel(struct av7110 *av7110, u8 windownr, u16 x, u16 y)
static inline int MoveWindowAbs(struct av7110 *av7110, u8 windownr, u16 x, u16 y)
static inline int DestroyOSDWindow(struct av7110 *av7110, u8 windownr)
static inline int CreateOSDWindow(struct av7110 *av7110, u8 windownr,
osd_raw_window_t disptype,
u16 width, u16 height)
static enum av7110_osd_palette_type bpp2pal[8] = ;
static osd_raw_window_t bpp2bit[8] = ;
static inline int WaitUntilBmpLoaded(struct av7110 *av7110)
static inline int LoadBitmap(struct av7110 *av7110,
u16 dx, u16 dy, int inc, u8 __user * data)
static int BlitBitmap(struct av7110 *av7110, u16 x, u16 y)
static inline int ReleaseBitmap(struct av7110 *av7110)
static u32 RGB2YUV(u16 R, u16 G, u16 B)
static int OSDSetColor(struct av7110 *av7110, u8 color, u8 r, u8 g, u8 b, u8 blend)
static int OSDSetPalette(struct av7110 *av7110, u32 __user * colors, u8 first, u8 last)
static int OSDSetBlock(struct av7110 *av7110, int x0, int y0,
int x1, int y1, int inc, u8 __user * data)
int av7110_osd_cmd(struct av7110 *av7110, osd_cmd_t *dc)
int av7110_osd_capability(struct av7110 *av7110, osd_cap_t *cap)
