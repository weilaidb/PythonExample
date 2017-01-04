#define _NGENE_H_
#define DEVICE_NAME "ngene"
#define NGENE_VID       0x18c3
#define NGENE_PID       0x0720
#define VIDEO_CAP_AVC   128
#define VIDEO_CAP_H264  128
#define VIDEO_CAP_VC1   256
#define VIDEO_CAP_WMV9  256
#define VIDEO_CAP_MPEG4 512
enum STREAM ;
enum SMODE_BITS ;
enum STREAM_FLAG_BITS ;
#define PROGRAM_ROM     0x0000
#define PROGRAM_SRAM    0x1000
#define PERIPHERALS0    0x8000
#define PERIPHERALS1    0x9000
#define SHARED_BUFFER   0xC000
#define HOST_TO_NGENE    (SHARED_BUFFER+0x0000)
#define NGENE_TO_HOST    (SHARED_BUFFER+0x0100)
#define NGENE_COMMAND    (SHARED_BUFFER+0x0200)
#define NGENE_COMMAND_HI (SHARED_BUFFER+0x0204)
#define NGENE_STATUS     (SHARED_BUFFER+0x0208)
#define NGENE_STATUS_HI  (SHARED_BUFFER+0x020C)
#define NGENE_EVENT      (SHARED_BUFFER+0x0210)
#define NGENE_EVENT_HI   (SHARED_BUFFER+0x0214)
#define VARIABLES        (SHARED_BUFFER+0x0210)
#define NGENE_INT_COUNTS       (SHARED_BUFFER+0x0260)
#define NGENE_INT_ENABLE       (SHARED_BUFFER+0x0264)
#define NGENE_VBI_LINE_COUNT   (SHARED_BUFFER+0x0268)
#define BUFFER_GP_XMIT  (SHARED_BUFFER+0x0800)
#define BUFFER_GP_RECV  (SHARED_BUFFER+0x0900)
#define EEPROM_AREA     (SHARED_BUFFER+0x0A00)
#define SG_V_IN_1       (SHARED_BUFFER+0x0A80)
#define SG_VBI_1        (SHARED_BUFFER+0x0B00)
#define SG_A_IN_1       (SHARED_BUFFER+0x0B80)
#define SG_V_IN_2       (SHARED_BUFFER+0x0C00)
#define SG_VBI_2        (SHARED_BUFFER+0x0C80)
#define SG_A_IN_2       (SHARED_BUFFER+0x0D00)
#define SG_V_OUT        (SHARED_BUFFER+0x0D80)
#define SG_A_OUT2       (SHARED_BUFFER+0x0E00)
#define DATA_A_IN_1     (SHARED_BUFFER+0x0E80)
#define DATA_A_IN_2     (SHARED_BUFFER+0x0F00)
#define DATA_A_OUT      (SHARED_BUFFER+0x0F80)
#define DATA_V_IN_1     (SHARED_BUFFER+0x1000)
#define DATA_V_IN_2     (SHARED_BUFFER+0x2000)
#define DATA_V_OUT      (SHARED_BUFFER+0x3000)
#define DATA_FIFO_AREA  (SHARED_BUFFER+0x1000)
#define TIMESTAMPS      0xA000
#define SCRATCHPAD      0xA080
#define FORCE_INT       0xA088
#define FORCE_NMI       0xA090
#define INT_STATUS      0xA0A0
#define DEV_VER         0x9004
#define FW_DEBUG_DEFAULT (PROGRAM_SRAM+0x00FF)
struct SG_ADDR  __attribute__ ((__packed__));
struct SHARED_MEMORY  __attribute__ ((__packed__));
struct BUFFER_STREAM_RESULTS  __attribute__ ((__packed__));
struct HW_SCATTER_GATHER_ELEMENT  __attribute__ ((__packed__));
struct BUFFER_HEADER  __attribute__ ((__packed__));
struct EVENT_BUFFER  __attribute__ ((__packed__));
enum OPCODES ;
enum RESPONSES ;
struct FW_HEADER  __attribute__ ((__packed__));
struct FW_I2C_WRITE  __attribute__ ((__packed__));
struct FW_I2C_CONTINUE_WRITE  __attribute__ ((__packed__));
struct FW_I2C_READ  __attribute__ ((__packed__));
struct FW_SPI_WRITE  __attribute__ ((__packed__));
struct FW_SPI_READ  __attribute__ ((__packed__));
struct FW_FWLOAD_PREPARE  __attribute__ ((__packed__));
struct FW_FWLOAD_FINISH  __attribute__ ((__packed__));
enum FSC_MODE_BITS ;
struct FW_STREAM_CONTROL  __attribute__((__packed__));
#define AUDIO_BLOCK_SIZE    256
#define TS_BLOCK_SIZE       256
struct FW_MEM_READ  __attribute__ ((__packed__));
struct FW_MEM_WRITE  __attribute__ ((__packed__));
struct FW_SFR_IRAM_READ  __attribute__ ((__packed__));
struct FW_SFR_IRAM_WRITE  __attribute__ ((__packed__));
struct FW_SET_GPIO_PIN  __attribute__ ((__packed__));
struct FW_SET_GPIO_INT  __attribute__ ((__packed__));
struct FW_SET_DEBUGMODE  __attribute__ ((__packed__));
struct FW_CONFIGURE_BUFFERS  __attribute__ ((__packed__));
enum _BUFFER_CONFIGS ;
struct FW_CONFIGURE_FREE_BUFFERS  __attribute__ ((__packed__));
struct FW_CONFIGURE_UART  __attribute__ ((__packed__));
enum _UART_CONFIG ;
struct FW_WRITE_UART  __attribute__ ((__packed__));
struct ngene_command  __attribute__ ((__packed__));
#define NGENE_INTERFACE_VERSION 0x103
#define MAX_VIDEO_BUFFER_SIZE   (417792)
#define MAX_AUDIO_BUFFER_SIZE     (8192)
#define MAX_VBI_BUFFER_SIZE      (28672)
#define MAX_TS_BUFFER_SIZE       (98304)
#define MAX_HDTV_BUFFER_SIZE   (2080768)
#define OVERFLOW_BUFFER_SIZE    (8192)
#define RING_SIZE_VIDEO     4
#define RING_SIZE_AUDIO     8
#define RING_SIZE_TS        8
#define NUM_SCATTER_GATHER_ENTRIES  8
#define MAX_DMA_LENGTH (((MAX_VIDEO_BUFFER_SIZE + MAX_VBI_BUFFER_SIZE) * \
RING_SIZE_VIDEO * 2) + \
(MAX_AUDIO_BUFFER_SIZE * RING_SIZE_AUDIO * 2) + \
(MAX_TS_BUFFER_SIZE * RING_SIZE_TS * 4) + \
(RING_SIZE_VIDEO * PAGE_SIZE * 2) + \
(RING_SIZE_AUDIO * PAGE_SIZE * 2) + \
(RING_SIZE_TS    * PAGE_SIZE * 4) + \
8 * PAGE_SIZE + OVERFLOW_BUFFER_SIZE + PAGE_SIZE)
#define EVENT_QUEUE_SIZE    16
struct SBufferHeader ;
#define SIZEOF_SBufferHeader ((sizeof(struct SBufferHeader) + 63) & ~63)
enum HWSTATE ;
enum KSSTATE ;
struct SRingBufferDescriptor ;
enum STREAMMODEFLAGS ;
enum BufferExchangeFlags ;
typedef void *(IBufferExchange)(void *, void *, u32, u32, u32);
struct MICI_STREAMINFO ;
#define MIXER_ADDR_TVTUNER      0
#define MIXER_ADDR_LAST         0
struct ngene_channel;
struct mychip ;
struct ngene_overlay ;
struct ngene_tvnorm ;
struct ngene_vopen ;
struct ngene_channel ;
struct ngene_ci ;
struct ngene;
typedef void (rx_cb_t)(struct ngene *, u32, u8);
typedef void (tx_cb_t)(struct ngene *, u32);
struct ngene ;
struct ngene_info ;
struct ngene_format;
#define RESOURCE_OVERLAY       1
#define RESOURCE_VIDEO         2
#define RESOURCE_VBI           4
struct ngene_buffer ;
int __devinit ngene_probe(struct pci_dev *pci_dev,
const struct pci_device_id *id);
void __devexit ngene_remove(struct pci_dev *pdev);
void ngene_shutdown(struct pci_dev *pdev);
int ngene_command(struct ngene *dev, struct ngene_command *com);
int ngene_command_gpio_set(struct ngene *dev, u8 select, u8 level);
void set_transfer(struct ngene_channel *chan, int state);
void FillTSBuffer(void *Buffer, int Length, u32 Flags);
int ngene_i2c_init(struct ngene *dev, int dev_nr);
extern struct dvb_device ngene_dvbdev_ci;
void *tsout_exchange(void *priv, void *buf, u32 len, u32 clock, u32 flags);
void *tsin_exchange(void *priv, void *buf, u32 len, u32 clock, u32 flags);
int ngene_start_feed(struct dvb_demux_feed *dvbdmxfeed);
int ngene_stop_feed(struct dvb_demux_feed *dvbdmxfeed);
int my_dvb_dmx_ts_card_init(struct dvb_demux *dvbdemux, char *id,
int (*start_feed)(struct dvb_demux_feed *),
int (*stop_feed)(struct dvb_demux_feed *),
void *priv);
int my_dvb_dmxdev_ts_card_init(struct dmxdev *dmxdev,
struct dvb_demux *dvbdemux,
struct dmx_frontend *hw_frontend,
struct dmx_frontend *mem_frontend,
struct dvb_adapter *dvb_adapter);
