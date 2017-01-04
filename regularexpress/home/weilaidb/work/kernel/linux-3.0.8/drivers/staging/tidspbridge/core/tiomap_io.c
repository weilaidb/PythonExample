static u32 ul_ext_base;
static u32 ul_ext_end;
static u32 shm0_end;
static u32 ul_dyn_ext_base;
static u32 ul_trace_sec_beg;
static u32 ul_trace_sec_end;
static u32 ul_shm_base_virt;
bool symbols_reloaded = true;
int read_ext_dsp_data(struct bridge_dev_context *dev_ctxt,
u8 *host_buff, u32 dsp_addr,
u32 ul_num_bytes, u32 mem_type)
int write_dsp_data(struct bridge_dev_context *dev_context,
u8 *host_buff, u32 dsp_addr, u32 ul_num_bytes,
u32 mem_type)
int write_ext_dsp_data(struct bridge_dev_context *dev_context,
u8 *host_buff, u32 dsp_addr,
u32 ul_num_bytes, u32 mem_type,
bool dynamic_load)
int sm_interrupt_dsp(struct bridge_dev_context *dev_context, u16 mb_val)
