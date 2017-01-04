#define	alt_jtag_io(a, b, c)\
astate->config->jtag_io(astate->config->dev, a, b, c);
#define	alt_malloc(a)	kzalloc(a, GFP_KERNEL);
struct altera_jtag_machine ;
static const struct altera_jtag_machine altera_transitions[] = ;
static const u16 altera_jtag_path_map[16] = ;
#define TMS_HIGH   1
#define TMS_LOW    0
#define TDI_HIGH   1
#define TDI_LOW    0
#define READ_TDO   1
#define IGNORE_TDO 0
int altera_jinit(struct altera_state *astate)
int altera_set_drstop(struct altera_jtag *js, enum altera_jtag_state state)
int altera_set_irstop(struct altera_jtag *js, enum altera_jtag_state state)
int altera_set_dr_pre(struct altera_jtag *js,
u32 count, u32 start_index,
u8 *preamble_data)
int altera_set_ir_pre(struct altera_jtag *js, u32 count, u32 start_index,
u8 *preamble_data)
int altera_set_dr_post(struct altera_jtag *js, u32 count, u32 start_index,
u8 *postamble_data)
int altera_set_ir_post(struct altera_jtag *js, u32 count, u32 start_index,
u8 *postamble_data)
static void altera_jreset_idle(struct altera_state *astate)
int altera_goto_jstate(struct altera_state *astate,
enum altera_jtag_state state)
int altera_wait_cycles(struct altera_state *astate,
s32 cycles,
enum altera_jtag_state wait_state)
int altera_wait_msecs(struct altera_state *astate,
s32 microseconds, enum altera_jtag_state wait_state)
static void altera_concatenate_data(u8 *buffer,
u8 *preamble_data,
u32 preamble_count,
u8 *target_data,
u32 start_index,
u32 target_count,
u8 *postamble_data,
u32 postamble_count)
static int alt_jtag_drscan(struct altera_state *astate,
int start_state,
int count,
u8 *tdi,
u8 *tdo)
static int alt_jtag_irscan(struct altera_state *astate,
int start_state,
int count,
u8 *tdi,
u8 *tdo)
static void altera_extract_target_data(u8 *buffer,
u8 *target_data,
u32 start_index,
u32 preamble_count,
u32 target_count)
int altera_irscan(struct altera_state *astate,
u32 count,
u8 *tdi_data,
u32 start_index)
int altera_swap_ir(struct altera_state *astate,
u32 count,
u8 *in_data,
u32 in_index,
u8 *out_data,
u32 out_index)
int altera_drscan(struct altera_state *astate,
u32 count,
u8 *tdi_data,
u32 start_index)
int altera_swap_dr(struct altera_state *astate, u32 count,
u8 *in_data, u32 in_index,
u8 *out_data, u32 out_index)
void altera_free_buffers(struct altera_state *astate)
