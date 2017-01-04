#define __CVMX_PKO_DEFS_H__
#define CVMX_PKO_MEM_COUNT0 \
CVMX_ADD_IO_SEG(0x0001180050001080ull)
#define CVMX_PKO_MEM_COUNT1 \
CVMX_ADD_IO_SEG(0x0001180050001088ull)
#define CVMX_PKO_MEM_DEBUG0 \
CVMX_ADD_IO_SEG(0x0001180050001100ull)
#define CVMX_PKO_MEM_DEBUG1 \
CVMX_ADD_IO_SEG(0x0001180050001108ull)
#define CVMX_PKO_MEM_DEBUG10 \
CVMX_ADD_IO_SEG(0x0001180050001150ull)
#define CVMX_PKO_MEM_DEBUG11 \
CVMX_ADD_IO_SEG(0x0001180050001158ull)
#define CVMX_PKO_MEM_DEBUG12 \
CVMX_ADD_IO_SEG(0x0001180050001160ull)
#define CVMX_PKO_MEM_DEBUG13 \
CVMX_ADD_IO_SEG(0x0001180050001168ull)
#define CVMX_PKO_MEM_DEBUG14 \
CVMX_ADD_IO_SEG(0x0001180050001170ull)
#define CVMX_PKO_MEM_DEBUG2 \
CVMX_ADD_IO_SEG(0x0001180050001110ull)
#define CVMX_PKO_MEM_DEBUG3 \
CVMX_ADD_IO_SEG(0x0001180050001118ull)
#define CVMX_PKO_MEM_DEBUG4 \
CVMX_ADD_IO_SEG(0x0001180050001120ull)
#define CVMX_PKO_MEM_DEBUG5 \
CVMX_ADD_IO_SEG(0x0001180050001128ull)
#define CVMX_PKO_MEM_DEBUG6 \
CVMX_ADD_IO_SEG(0x0001180050001130ull)
#define CVMX_PKO_MEM_DEBUG7 \
CVMX_ADD_IO_SEG(0x0001180050001138ull)
#define CVMX_PKO_MEM_DEBUG8 \
CVMX_ADD_IO_SEG(0x0001180050001140ull)
#define CVMX_PKO_MEM_DEBUG9 \
CVMX_ADD_IO_SEG(0x0001180050001148ull)
#define CVMX_PKO_MEM_PORT_PTRS \
CVMX_ADD_IO_SEG(0x0001180050001010ull)
#define CVMX_PKO_MEM_PORT_QOS \
CVMX_ADD_IO_SEG(0x0001180050001018ull)
#define CVMX_PKO_MEM_PORT_RATE0 \
CVMX_ADD_IO_SEG(0x0001180050001020ull)
#define CVMX_PKO_MEM_PORT_RATE1 \
CVMX_ADD_IO_SEG(0x0001180050001028ull)
#define CVMX_PKO_MEM_QUEUE_PTRS \
CVMX_ADD_IO_SEG(0x0001180050001000ull)
#define CVMX_PKO_MEM_QUEUE_QOS \
CVMX_ADD_IO_SEG(0x0001180050001008ull)
#define CVMX_PKO_REG_BIST_RESULT \
CVMX_ADD_IO_SEG(0x0001180050000080ull)
#define CVMX_PKO_REG_CMD_BUF \
CVMX_ADD_IO_SEG(0x0001180050000010ull)
#define CVMX_PKO_REG_CRC_CTLX(offset) \
CVMX_ADD_IO_SEG(0x0001180050000028ull + (((offset) & 1) * 8))
#define CVMX_PKO_REG_CRC_ENABLE \
CVMX_ADD_IO_SEG(0x0001180050000020ull)
#define CVMX_PKO_REG_CRC_IVX(offset) \
CVMX_ADD_IO_SEG(0x0001180050000038ull + (((offset) & 1) * 8))
#define CVMX_PKO_REG_DEBUG0 \
CVMX_ADD_IO_SEG(0x0001180050000098ull)
#define CVMX_PKO_REG_DEBUG1 \
CVMX_ADD_IO_SEG(0x00011800500000A0ull)
#define CVMX_PKO_REG_DEBUG2 \
CVMX_ADD_IO_SEG(0x00011800500000A8ull)
#define CVMX_PKO_REG_DEBUG3 \
CVMX_ADD_IO_SEG(0x00011800500000B0ull)
#define CVMX_PKO_REG_ENGINE_INFLIGHT \
CVMX_ADD_IO_SEG(0x0001180050000050ull)
#define CVMX_PKO_REG_ENGINE_THRESH \
CVMX_ADD_IO_SEG(0x0001180050000058ull)
#define CVMX_PKO_REG_ERROR \
CVMX_ADD_IO_SEG(0x0001180050000088ull)
#define CVMX_PKO_REG_FLAGS \
CVMX_ADD_IO_SEG(0x0001180050000000ull)
#define CVMX_PKO_REG_GMX_PORT_MODE \
CVMX_ADD_IO_SEG(0x0001180050000018ull)
#define CVMX_PKO_REG_INT_MASK \
CVMX_ADD_IO_SEG(0x0001180050000090ull)
#define CVMX_PKO_REG_QUEUE_MODE \
CVMX_ADD_IO_SEG(0x0001180050000048ull)
#define CVMX_PKO_REG_QUEUE_PTRS1 \
CVMX_ADD_IO_SEG(0x0001180050000100ull)
#define CVMX_PKO_REG_READ_IDX \
CVMX_ADD_IO_SEG(0x0001180050000008ull)
union cvmx_pko_mem_count0 ;
union cvmx_pko_mem_count1 ;
union cvmx_pko_mem_debug0 ;
union cvmx_pko_mem_debug1 ;
union cvmx_pko_mem_debug10 ;
union cvmx_pko_mem_debug11 ;
union cvmx_pko_mem_debug12 ;
union cvmx_pko_mem_debug13 ;
union cvmx_pko_mem_debug14 ;
union cvmx_pko_mem_debug2 ;
union cvmx_pko_mem_debug3 ;
union cvmx_pko_mem_debug4 ;
union cvmx_pko_mem_debug5 ;
union cvmx_pko_mem_debug6 ;
union cvmx_pko_mem_debug7 ;
union cvmx_pko_mem_debug8 ;
union cvmx_pko_mem_debug9 ;
union cvmx_pko_mem_port_ptrs ;
union cvmx_pko_mem_port_qos ;
union cvmx_pko_mem_port_rate0 ;
union cvmx_pko_mem_port_rate1 ;
union cvmx_pko_mem_queue_ptrs ;
union cvmx_pko_mem_queue_qos ;
union cvmx_pko_reg_bist_result ;
union cvmx_pko_reg_cmd_buf ;
union cvmx_pko_reg_crc_ctlx ;
union cvmx_pko_reg_crc_enable ;
union cvmx_pko_reg_crc_ivx ;
union cvmx_pko_reg_debug0 ;
union cvmx_pko_reg_debug1 ;
union cvmx_pko_reg_debug2 ;
union cvmx_pko_reg_debug3 ;
union cvmx_pko_reg_engine_inflight ;
union cvmx_pko_reg_engine_thresh ;
union cvmx_pko_reg_error ;
union cvmx_pko_reg_flags ;
union cvmx_pko_reg_gmx_port_mode ;
union cvmx_pko_reg_int_mask ;
union cvmx_pko_reg_queue_mode ;
union cvmx_pko_reg_queue_ptrs1 ;
union cvmx_pko_reg_read_idx ;
