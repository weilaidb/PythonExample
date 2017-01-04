#define ATOM_DEBUG
#define ATOM_COND_ABOVE		0
#define ATOM_COND_ABOVEOREQUAL	1
#define ATOM_COND_ALWAYS	2
#define ATOM_COND_BELOW		3
#define ATOM_COND_BELOWOREQUAL	4
#define ATOM_COND_EQUAL		5
#define ATOM_COND_NOTEQUAL	6
#define ATOM_PORT_ATI	0
#define ATOM_PORT_PCI	1
#define ATOM_PORT_SYSIO	2
#define ATOM_UNIT_MICROSEC	0
#define ATOM_UNIT_MILLISEC	1
#define PLL_INDEX	2
#define PLL_DATA	3
typedef struct  atom_exec_context;
int atom_debug = 0;
static int atom_execute_table_locked(struct atom_context *ctx, int index, uint32_t * params);
int atom_execute_table(struct atom_context *ctx, int index, uint32_t * params);
static uint32_t atom_arg_mask[8] =
;
static int atom_arg_shift[8] = ;
static int atom_dst_to_src[8][4] = ;
static int atom_def_dst[8] = ;
static int debug_depth = 0;
static void debug_print_spaces(int n)
#define DEBUG(...) do if (atom_debug)  while (0)
#define SDEBUG(...) do if (atom_debug)  while (0)
#define DEBUG(...) do  while (0)
#define SDEBUG(...) do  while (0)
static uint32_t atom_iio_execute(struct atom_context *ctx, int base,
uint32_t index, uint32_t data)
static uint32_t atom_get_src_int(atom_exec_context *ctx, uint8_t attr,
int *ptr, uint32_t *saved, int print)
static void atom_skip_src_int(atom_exec_context *ctx, uint8_t attr, int *ptr)
static uint32_t atom_get_src(atom_exec_context *ctx, uint8_t attr, int *ptr)
static uint32_t atom_get_src_direct(atom_exec_context *ctx, uint8_t align, int *ptr)
static uint32_t atom_get_dst(atom_exec_context *ctx, int arg, uint8_t attr,
int *ptr, uint32_t *saved, int print)
static void atom_skip_dst(atom_exec_context *ctx, int arg, uint8_t attr, int *ptr)
static void atom_put_dst(atom_exec_context *ctx, int arg, uint8_t attr,
int *ptr, uint32_t val, uint32_t saved)
static void atom_op_add(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_and(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_beep(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_calltable(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_clear(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_compare(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_delay(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_div(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_eot(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_jump(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_mask(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_move(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_mul(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_nop(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_or(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_postcard(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_repeat(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_restorereg(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_savereg(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_setdatablock(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_setfbbase(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_setport(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_setregblock(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_shift_left(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_shift_right(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_shl(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_shr(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_sub(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_switch(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_test(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_xor(atom_exec_context *ctx, int *ptr, int arg)
static void atom_op_debug(atom_exec_context *ctx, int *ptr, int arg)
static struct  opcode_table[ATOM_OP_CNT] = ;
static int atom_execute_table_locked(struct atom_context *ctx, int index, uint32_t * params)
int atom_execute_table(struct atom_context *ctx, int index, uint32_t * params)
static int atom_iio_len[] = ;
static void atom_index_iio(struct atom_context *ctx, int base)
struct atom_context *atom_parse(struct card_info *card, void *bios)
int atom_asic_init(struct atom_context *ctx)
void atom_destroy(struct atom_context *ctx)
bool atom_parse_data_header(struct atom_context *ctx, int index,
uint16_t * size, uint8_t * frev, uint8_t * crev,
uint16_t * data_start)
bool atom_parse_cmd_header(struct atom_context *ctx, int index, uint8_t * frev,
uint8_t * crev)
int atom_allocate_fb_scratch(struct atom_context *ctx)
