#define __ETHERNET_DEFINES_H__
#define OCTEON_ETHERNET_VERSION "1.9"
#define CONFIG_CAVIUM_RESERVE32 0
#define USE_SKBUFFS_IN_HW           1
#define REUSE_SKBUFFS_WITHOUT_FREE  0
#define REUSE_SKBUFFS_WITHOUT_FREE  1
#define USE_HW_TCPUDP_CHECKSUM      1
#define USE_RED                     1
#define USE_ASYNC_IOBDMA            (CONFIG_CAVIUM_OCTEON_CVMSEG_SIZE > 0)
#define USE_10MBPS_PREAMBLE_WORKAROUND 1
#define DONT_WRITEBACK(x)           (x)
#define MAX_OUT_QUEUE_DEPTH 1000
#define FAU_TOTAL_TX_TO_CLEAN (CVMX_FAU_REG_END - sizeof(uint32_t))
#define FAU_NUM_PACKET_BUFFERS_TO_FREE (FAU_TOTAL_TX_TO_CLEAN - sizeof(uint32_t))
#define TOTAL_NUMBER_OF_PORTS       (CVMX_PIP_NUM_INPUT_PORTS+1)