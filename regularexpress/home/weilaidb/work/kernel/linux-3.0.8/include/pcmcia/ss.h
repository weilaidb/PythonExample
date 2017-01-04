#define _LINUX_SS_H
#define SS_WRPROT	0x0001
#define SS_CARDLOCK	0x0002
#define SS_EJECTION	0x0004
#define SS_INSERTION	0x0008
#define SS_BATDEAD	0x0010
#define SS_BATWARN	0x0020
#define SS_READY	0x0040
#define SS_DETECT	0x0080
#define SS_POWERON	0x0100
#define SS_GPI		0x0200
#define SS_STSCHG	0x0400
#define SS_CARDBUS	0x0800
#define SS_3VCARD	0x1000
#define SS_XVCARD	0x2000
#define SS_PENDING	0x4000
#define SS_ZVCARD	0x8000
#define SS_CAP_PAGE_REGS	0x0001
#define SS_CAP_VIRTUAL_BUS	0x0002
#define SS_CAP_MEM_ALIGN	0x0004
#define SS_CAP_STATIC_MAP	0x0008
#define SS_CAP_PCCARD		0x4000
#define SS_CAP_CARDBUS		0x8000
typedef struct socket_state_t  socket_state_t;
extern socket_state_t dead_socket;
#define SS_PWR_AUTO	0x0010
#define SS_IOCARD	0x0020
#define SS_RESET	0x0040
#define SS_DMA_MODE	0x0080
#define SS_SPKR_ENA	0x0100
#define SS_OUTPUT_ENA	0x0200
#define MAP_ACTIVE	0x01
#define MAP_16BIT	0x02
#define MAP_AUTOSZ	0x04
#define MAP_0WS		0x08
#define MAP_WRPROT	0x10
#define MAP_ATTRIB	0x20
#define MAP_USE_WAIT	0x40
#define MAP_PREFETCH	0x80
#define MAP_IOSPACE	0x20
#define HOOK_POWER_PRE	0x01
#define HOOK_POWER_POST	0x02
typedef struct pccard_io_map  pccard_io_map;
typedef struct pccard_mem_map  pccard_mem_map;
typedef struct io_window_t  io_window_t;
#define MAX_IO_WIN 2
#define MAX_WIN 4
struct pcmcia_socket;
struct pccard_resource_ops;
struct config_t;
struct pcmcia_callback;
struct user_info_t;
struct pccard_operations ;
struct pcmcia_socket ;
extern struct pccard_resource_ops pccard_static_ops;
#if defined(CONFIG_PCMCIA) || defined(CONFIG_PCMCIA_MODULE)
extern struct pccard_resource_ops pccard_iodyn_ops;
extern struct pccard_resource_ops pccard_nonstatic_ops;
#define pccard_iodyn_ops pccard_static_ops
#define pccard_nonstatic_ops pccard_static_ops
extern void pcmcia_parse_events(struct pcmcia_socket *socket,
unsigned int events);
extern int pcmcia_register_socket(struct pcmcia_socket *socket);
extern void pcmcia_unregister_socket(struct pcmcia_socket *socket);
