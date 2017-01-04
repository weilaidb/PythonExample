#define ALTERA_JTAG_H
enum altera_jtag_state ;
struct altera_jtag ;
#define ALTERA_STACK_SIZE 128
#define ALTERA_MESSAGE_LENGTH 1024
struct altera_state ;
int altera_jinit(struct altera_state *astate);
int altera_set_drstop(struct altera_jtag *js, enum altera_jtag_state state);
int altera_set_irstop(struct altera_jtag *js, enum altera_jtag_state state);
int altera_set_dr_pre(struct altera_jtag *js, u32 count, u32 start_index,
u8 *preamble_data);
int altera_set_ir_pre(struct altera_jtag *js, u32 count, u32 start_index,
u8 *preamble_data);
int altera_set_dr_post(struct altera_jtag *js, u32 count, u32 start_index,
u8 *postamble_data);
int altera_set_ir_post(struct altera_jtag *js, u32 count, u32 start_index,
u8 *postamble_data);
int altera_goto_jstate(struct altera_state *astate,
enum altera_jtag_state state);
int altera_wait_cycles(struct altera_state *astate, s32 cycles,
enum altera_jtag_state wait_state);
int altera_wait_msecs(struct altera_state *astate, s32 microseconds,
enum altera_jtag_state wait_state);
int altera_irscan(struct altera_state *astate, u32 count,
u8 *tdi_data, u32 start_index);
int altera_swap_ir(struct altera_state *astate,
u32 count, u8 *in_data,
u32 in_index, u8 *out_data,
u32 out_index);
int altera_drscan(struct altera_state *astate, u32 count,
u8 *tdi_data, u32 start_index);
int altera_swap_dr(struct altera_state *astate, u32 count,
u8 *in_data, u32 in_index,
u8 *out_data, u32 out_index);
void altera_free_buffers(struct altera_state *astate);
