#define __I810_H__
#define TILEWALK_X            (0 << 12)
#define TILEWALK_Y            (1 << 12)
#define COLOR_COPY_ROP        0xF0
#define PAT_COPY_ROP          0xCC
#define CLEAR_ROP             0x00
#define WHITE_ROP             0xFF
#define INVERT_ROP            0x55
#define XOR_ROP               0x5A
#define SOLIDPATTERN          0x80000000
#define NONSOLID              0x00000000
#define BPP8                  (0 << 24)
#define BPP16                 (1 << 24)
#define BPP24                 (2 << 24)
#define PIXCONF8              (2 << 16)
#define PIXCONF15             (4 << 16)
#define PIXCONF16             (5 << 16)
#define PIXCONF24             (6 << 16)
#define PIXCONF32             (7 << 16)
#define DYN_COLOR_EN          (1 << 26)
#define DYN_COLOR_DIS         (0 << 26)
#define INCREMENT             0x00000000
#define DECREMENT             (0x01 << 30)
#define ARB_ON                0x00000001
#define ARB_OFF               0x00000000
#define SYNC_FLIP             0x00000000
#define ASYNC_FLIP            0x00000040
#define OPTYPE_MASK           0xE0000000
#define PARSER_MASK           0x001F8000
#define D2_MASK               0x001FC000
#define PARSER                0x00000000
#define BLIT                  (0x02 << 29)
#define RENDER                (0x03 << 29)
#define NOP                   0x00
#define BP_INT                (0x01 << 23)
#define USR_INT               (0x02 << 23)
#define WAIT_FOR_EVNT         (0x03 << 23)
#define FLUSH                 (0x04 << 23)
#define CONTEXT_SEL           (0x05 << 23)
#define REPORT_HEAD           (0x07 << 23)
#define ARB_ON_OFF            (0x08 << 23)
#define OVERLAY_FLIP          (0x11 << 23)
#define LOAD_SCAN_INC         (0x12 << 23)
#define LOAD_SCAN_EX          (0x13 << 23)
#define FRONT_BUFFER          (0x14 << 23)
#define DEST_BUFFER           (0x15 << 23)
#define Z_BUFFER              (0x16 << 23)
#define STORE_DWORD_IMM       (0x20 << 23)
#define STORE_DWORD_IDX       (0x21 << 23)
#define BATCH_BUFFER          (0x30 << 23)
#define SETUP_BLIT                      0x00
#define SETUP_MONO_PATTERN_SL_BLT       (0x10 << 22)
#define PIXEL_BLT                       (0x20 << 22)
#define SCANLINE_BLT                    (0x21 << 22)
#define TEXT_BLT                        (0x22 << 22)
#define TEXT_IMM_BLT                    (0x30 << 22)
#define COLOR_BLT                       (0x40 << 22)
#define MONO_PAT_BLIT                   (0x42 << 22)
#define SOURCE_COPY_BLIT                (0x43 << 22)
#define MONO_SOURCE_COPY_BLIT           (0x44 << 22)
#define SOURCE_COPY_IMMEDIATE           (0x60 << 22)
#define MONO_SOURCE_COPY_IMMEDIATE      (0x61 << 22)
#define VERSION_MAJOR            0
#define VERSION_MINOR            9
#define VERSION_TEENIE           0
#define BRANCH_VERSION           ""
#define PCI_DEVICE_ID_INTEL_82815_100           0x1102
#define PCI_DEVICE_ID_INTEL_82815_NOAGP         0x1112
#define PCI_DEVICE_ID_INTEL_82815_FULL_CTRL     0x1130
#define I810_PAGESIZE               4096
#define MAX_DMA_SIZE                (1024 * 4096)
#define SAREA_SIZE                  4096
#define PCI_I810_MISCC              0x72
#define MMIO_SIZE                   (512*1024)
#define GTT_SIZE                    (16*1024)
#define RINGBUFFER_SIZE             (64*1024)
#define CURSOR_SIZE                 4096
#define OFF                         0
#define ON                          1
#define MAX_KEY                     256
#define WAIT_COUNT                  10000000
#define IRING_PAD                   8
#define FONTDATAMAX                 8192
#define FB_START_MASK               (0x3f << (32 - 6))
#define MMIO_ADDR_MASK              (0x1FFF << (32 - 13))
#define FREQ_MASK                   (1 << 4)
#define SCR_OFF                     0x20
#define DRAM_ON                     0x08
#define DRAM_OFF                    0xE7
#define PG_ENABLE_MASK              0x01
#define RING_SIZE_MASK              (RINGBUFFER_SIZE - 1);
#define ADDR_MAP_MASK               (0x07 << 5)
#define DISP_CTRL                   ~0
#define PIXCONF_0                   (0x64 << 8)
#define PIXCONF_2                   (0xF3 << 24)
#define PIXCONF_1                   (0xF0 << 16)
#define MN_MASK                     0x3FF03FF
#define P_OR                        (0x7 << 4)
#define DAC_BIT                     (1 << 16)
#define INTERLACE_BIT               (1 << 7)
#define IER_MASK                    (3 << 13)
#define IMR_MASK                    (3 << 13)
#define DPMS_MASK                   0xF0000
#define POWERON                     0x00000
#define STANDBY                     0x20000
#define SUSPEND                     0x80000
#define POWERDOWN                   0xA0000
#define EMR_MASK                    ~0x3F
#define FW_BLC_MASK                 ~(0x3F|(7 << 8)|(0x3F << 12)|(7 << 20))
#define RBUFFER_START_MASK          0xFFFFF000
#define RBUFFER_SIZE_MASK           0x001FF000
#define RBUFFER_HEAD_MASK           0x001FFFFC
#define RBUFFER_TAIL_MASK           0x001FFFF8
#define REF_FREQ                    24000000
#define TARGET_N_MAX                30
#define MAX_PIXELCLOCK              230000000
#define MIN_PIXELCLOCK               15000000
#define VFMAX                       60
#define VFMIN                       60
#define HFMAX                       30000
#define HFMIN                       29000
#define CURSOR_ENABLE_MASK          0x1000
#define CURSOR_MODE_64_TRANS        4
#define CURSOR_MODE_64_XOR	    5
#define CURSOR_MODE_64_3C	    6
#define COORD_INACTIVE              0
#define COORD_ACTIVE                (1 << 4)
#define EXTENDED_PALETTE	    1
#define AGP_NORMAL_MEMORY           0
#define AGP_DCACHE_MEMORY	    1
#define AGP_PHYSICAL_MEMORY         2
#define FRAMEBUFFER_REQ             1
#define MMIO_REQ                    2
#define PCI_DEVICE_ENABLED          4
#define HAS_FONTCACHE               8
#define HAS_MTRR                    1
#define HAS_ACCELERATION            2
#define ALWAYS_SYNC                 4
#define LOCKUP                      8
struct gtt_data ;
struct mode_registers ;
struct heap_data ;
struct state_registers ;
struct i810fb_par;
struct i810fb_i2c_chan ;
struct i810fb_par ;
#define i810_readb(where, mmio) readb(mmio + where)
#define i810_readw(where, mmio) readw(mmio + where)
#define i810_readl(where, mmio) readl(mmio + where)
#define i810_writeb(where, mmio, val) writeb(val, mmio + where)
#define i810_writew(where, mmio, val) writew(val, mmio + where)
#define i810_writel(where, mmio, val) writel(val, mmio + where)
