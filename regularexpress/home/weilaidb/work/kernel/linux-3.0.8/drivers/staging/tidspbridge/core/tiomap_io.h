#define _TIOMAP_IO_
#define SHMBASENAME "SHM_BEG"
#define EXTBASE     "EXT_BEG"
#define EXTEND      "_EXT_END"
#define DYNEXTBASE  "_DYNEXT_BEG"
#define DYNEXTEND   "_DYNEXT_END"
#define IVAEXTMEMBASE   "_IVAEXTMEM_BEG"
#define IVAEXTMEMEND   "_IVAEXTMEM_END"
#define DSP_TRACESEC_BEG  "_BRIDGE_TRACE_BEG"
#define DSP_TRACESEC_END  "_BRIDGE_TRACE_END"
#define SYS_PUTCBEG               "_SYS_PUTCBEG"
#define SYS_PUTCEND               "_SYS_PUTCEND"
#define BRIDGE_SYS_PUTC_CURRENT   "_BRIDGE_SYS_PUTC_current"
#define WORDSWAP_ENABLE 0x3
extern int read_ext_dsp_data(struct bridge_dev_context *dev_ctxt,
u8 *host_buff, u32 dsp_addr,
u32 ul_num_bytes, u32 mem_type);
extern int write_dsp_data(struct bridge_dev_context *dev_context,
u8 *host_buff, u32 dsp_addr,
u32 ul_num_bytes, u32 mem_type);
extern int write_ext_dsp_data(struct bridge_dev_context *dev_context,
u8 *host_buff, u32 dsp_addr,
u32 ul_num_bytes, u32 mem_type,
bool dynamic_load);
extern inline void write_ext32_bit_dsp_data(const
struct bridge_dev_context *dev_context,
u32 dsp_addr, u32 val)
extern inline u32 read_ext32_bit_dsp_data(const struct bridge_dev_context
*dev_context, u32 dsp_addr)
