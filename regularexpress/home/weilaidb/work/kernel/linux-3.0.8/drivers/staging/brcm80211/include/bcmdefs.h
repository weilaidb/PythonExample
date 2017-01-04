#define	_bcmdefs_h_
#define	SI_BUS			0
#define	PCI_BUS			1
#define	PCMCIA_BUS		2
#define SDIO_BUS		3
#define JTAG_BUS		4
#define USB_BUS			5
#define SPI_BUS			6
#define	OFF	0
#define	ON	1
#define	AUTO	(-1)
#define	SI_BUS			0
#define	PCI_BUS			1
#define SDIO_BUS		3
#define JTAG_BUS		4
#define USB_BUS			5
#define SPI_BUS			6
#define RPC_BUS			7
#define DMADDR_MASK_32 0x0
#define DMADDR_MASK_30 0xc0000000
#define DMADDR_MASK_0  0xffffffff
#define	DMADDRWIDTH_30  30
#define	DMADDRWIDTH_32  32
#define	DMADDRWIDTH_63  63
#define	DMADDRWIDTH_64  64
typedef struct  dma64addr_t;
typedef dma64addr_t dmaaddr_t;
#define PHYSADDRHI(_pa) ((_pa).hiaddr)
#define PHYSADDRHISET(_pa, _val) \
do  while (0)
#define PHYSADDRLO(_pa) ((_pa).loaddr)
#define PHYSADDRLOSET(_pa, _val) \
do  while (0)
typedef unsigned long dmaaddr_t;
#define PHYSADDRHI(_pa) (0)
#define PHYSADDRHISET(_pa, _val)
#define PHYSADDRLO(_pa) ((_pa))
#define PHYSADDRLOSET(_pa, _val) \
do  while (0)
typedef struct  hnddma_seg_t;
#define MAX_DMA_SEGS 4
typedef struct  hnddma_seg_map_t;
#define BCMEXTRAHDROOM 172
#define BITFIELD_MASK(width) \
(((unsigned)1 << (width)) - 1)
#define GFIELD(val, field) \
(((val) >> field ## _S) & field ## _M)
#define SFIELD(val, field, bits) \
(((val) & (~(field ## _M << field ## _S))) | \
((unsigned)(bits) << field ## _S))
#define	PRIO_8021D_NONE		2
#define	PRIO_8021D_BK		1
#define	PRIO_8021D_BE		0
#define	PRIO_8021D_EE		3
#define	PRIO_8021D_CL		4
#define	PRIO_8021D_VI		5
#define	PRIO_8021D_VO		6
#define	PRIO_8021D_NC		7
#define	MAXPRIO			7
#define NUMPRIO			(MAXPRIO + 1)
#define	MAXSZ_NVRAM_VARS	4096
struct wl_info;
struct wlc_bsscfg;
