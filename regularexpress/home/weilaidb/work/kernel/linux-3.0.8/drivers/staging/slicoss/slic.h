#define __SLIC_DRIVER_H__
#define OASIS_UCODE_VERS_STRING	"1.2"
#define OASIS_UCODE_VERS_DATE  	"2006/03/27 15:10:37"
#define OASIS_UCODE_HOSTIF_ID  	3
#define MOJAVE_UCODE_VERS_STRING	"1.2"
#define MOJAVE_UCODE_VERS_DATE  	"2006/03/27 15:12:22"
#define MOJAVE_UCODE_HOSTIF_ID  	3
#define GB_RCVUCODE_VERS_STRING	"1.2"
#define GB_RCVUCODE_VERS_DATE  	"2006/03/27 15:12:15"
static u32 OasisRcvUCodeLen = 512;
static u32 GBRcvUCodeLen = 512;
#define SECTION_SIZE 65536
struct slic_spinlock ;
#define SLIC_RSPQ_PAGES_GB        10
#define SLIC_RSPQ_BUFSINPAGE      (PAGE_SIZE / SLIC_RSPBUF_SIZE)
struct slic_rspqueue ;
#define SLIC_RCVQ_EXPANSION         1
#define SLIC_RCVQ_ENTRIES           (256 * SLIC_RCVQ_EXPANSION)
#define SLIC_RCVQ_MINENTRIES        (SLIC_RCVQ_ENTRIES / 2)
#define SLIC_RCVQ_MAX_PROCESS_ISR   ((SLIC_RCVQ_ENTRIES * 4))
#define SLIC_RCVQ_RCVBUFSIZE        2048
#define SLIC_RCVQ_FILLENTRIES       (16 * SLIC_RCVQ_EXPANSION)
#define SLIC_RCVQ_FILLTHRESH        (SLIC_RCVQ_ENTRIES - SLIC_RCVQ_FILLENTRIES)
struct slic_rcvqueue ;
struct slic_rcvbuf_info ;
struct slic_handle_word ;
struct slic_handle ;
#define SLIC_HANDLE_FREE        0x0000
#define SLIC_HANDLE_DATA        0x0001
#define SLIC_HANDLE_CMD         0x0002
#define SLIC_HANDLE_CONTEXT     0x0003
#define SLIC_HANDLE_TEAM        0x0004
#define handle_index        handle.parts.index
#define handle_bottom       handle.parts.bottombits
#define handle_token        handle.whole
#define SLIC_HOSTCMD_SIZE    512
struct slic_hostcmd ;
#define SLIC_CMDQ_CMDSINPAGE    (PAGE_SIZE / SLIC_HOSTCMD_SIZE)
#define SLIC_CMD_DUMB            3
#define SLIC_CMDQ_INITCMDS       256
#define SLIC_CMDQ_MAXCMDS        256
#define SLIC_CMDQ_MAXOUTSTAND    SLIC_CMDQ_MAXCMDS
#define SLIC_CMDQ_MAXPAGES       (SLIC_CMDQ_MAXCMDS / SLIC_CMDQ_CMDSINPAGE)
#define SLIC_CMDQ_INITPAGES      (SLIC_CMDQ_INITCMDS / SLIC_CMDQ_CMDSINPAGE)
struct slic_cmdqmem ;
struct slic_cmdqueue ;
#define SLIC_MAX_CARDS              32
#define SLIC_MAX_PORTS              4
struct mcast_address ;
#define CARD_DOWN        0x00000000
#define CARD_UP          0x00000001
#define CARD_FAIL        0x00000002
#define CARD_DIAG        0x00000003
#define CARD_SLEEP       0x00000004
#define ADAPT_DOWN             0x00
#define ADAPT_UP               0x01
#define ADAPT_FAIL             0x02
#define ADAPT_RESET            0x03
#define ADAPT_SLEEP            0x04
#define ADAPT_FLAGS_BOOTTIME            0x0001
#define ADAPT_FLAGS_IS64BIT             0x0002
#define ADAPT_FLAGS_PENDINGLINKDOWN     0x0004
#define ADAPT_FLAGS_FIBERMEDIA          0x0008
#define ADAPT_FLAGS_LOCKS_ALLOCED       0x0010
#define ADAPT_FLAGS_INT_REGISTERED      0x0020
#define ADAPT_FLAGS_LOAD_TIMER_SET      0x0040
#define ADAPT_FLAGS_STATS_TIMER_SET     0x0080
#define ADAPT_FLAGS_RESET_TIMER_SET     0x0100
#define LINK_DOWN              0x00
#define LINK_CONFIG            0x01
#define LINK_UP                0x02
#define LINK_10MB              0x00
#define LINK_100MB             0x01
#define LINK_AUTOSPEED         0x02
#define LINK_1000MB            0x03
#define LINK_10000MB           0x04
#define LINK_HALFD             0x00
#define LINK_FULLD             0x01
#define LINK_AUTOD             0x02
#define MAC_DIRECTED     0x00000001
#define MAC_BCAST        0x00000002
#define MAC_MCAST        0x00000004
#define MAC_PROMISC      0x00000008
#define MAC_LOOPBACK     0x00000010
#define MAC_ALLMCAST     0x00000020
#define SLIC_DUPLEX(x)    ((x == LINK_FULLD) ? "FDX" : "HDX")
#define SLIC_SPEED(x)     ((x == LINK_100MB) ? "100Mb" : ((x == LINK_1000MB) ?\
"1000Mb" : " 10Mb"))
#define SLIC_LINKSTATE(x) ((x == LINK_DOWN) ? "Down" : "Up  ")
#define SLIC_ADAPTER_STATE(x) ((x == ADAPT_UP) ? "UP" : "Down")
#define SLIC_CARD_STATE(x)    ((x == CARD_UP) ? "UP" : "Down")
struct slic_iface_stats ;
struct sliccp_stats ;
struct slicnet_stats ;
#define SLIC_LOADTIMER_PERIOD     1
#define SLIC_INTAGG_DEFAULT       200
#define SLIC_LOAD_0               0
#define SLIC_INTAGG_0             0
#define SLIC_LOAD_1               8000
#define SLIC_LOAD_2               10000
#define SLIC_LOAD_3               12000
#define SLIC_LOAD_4               14000
#define SLIC_LOAD_5               16000
#define SLIC_INTAGG_1             50
#define SLIC_INTAGG_2             100
#define SLIC_INTAGG_3             150
#define SLIC_INTAGG_4             200
#define SLIC_INTAGG_5             250
#define SLIC_LOAD_1GB             3000
#define SLIC_LOAD_2GB             6000
#define SLIC_LOAD_3GB             12000
#define SLIC_LOAD_4GB             24000
#define SLIC_LOAD_5GB             48000
#define SLIC_INTAGG_1GB           50
#define SLIC_INTAGG_2GB           75
#define SLIC_INTAGG_3GB           100
#define SLIC_INTAGG_4GB           100
#define SLIC_INTAGG_5GB           100
struct ether_header ;
struct sliccard ;
#define NUM_CFG_SPACES      2
#define NUM_CFG_REGS        64
#define NUM_CFG_REG_ULONGS  (NUM_CFG_REGS / sizeof(u32))
struct physcard ;
struct base_driver ;
struct slic_shmem ;
struct slic_reg_params ;
struct slic_upr ;
struct slic_ifevents ;
struct adapter ;
#define UPDATE_STATS(largestat, newstat, oldstat)                        \
#define UPDATE_STATS_GB(largestat, newstat, oldstat)                     \
#if BITS_PER_LONG == 64
#define   SLIC_GET_ADDR_LOW(_addr)  (u32)((u64)(_addr) & \
0x00000000FFFFFFFF)
#define   SLIC_GET_ADDR_HIGH(_addr)  (u32)(((u64)(_addr) >> 32) & \
0x00000000FFFFFFFF)
#elif BITS_PER_LONG == 32
#define   SLIC_GET_ADDR_LOW(_addr)   (u32)(_addr)
#define   SLIC_GET_ADDR_HIGH(_addr)  (u32)0
#error BITS_PER_LONG must be 32 or 64
#define FLUSH		true
#define DONT_FLUSH	false
#define SIOCSLICDUMPCARD         (SIOCDEVPRIVATE+9)
#define SIOCSLICSETINTAGG        (SIOCDEVPRIVATE+10)
#define SIOCSLICTRACEDUMP        (SIOCDEVPRIVATE+11)
