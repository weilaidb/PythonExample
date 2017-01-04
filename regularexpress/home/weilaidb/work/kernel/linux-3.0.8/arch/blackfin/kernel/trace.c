void decode_address(char *buf, unsigned long address)
#define EXPAND_LEN ((1 << CONFIG_DEBUG_BFIN_HWTRACE_EXPAND_LEN) * 256 - 1)
bool get_mem16(unsigned short *val, unsigned short *address)
bool get_instruction(unsigned int *val, unsigned short *address)
#if defined(CONFIG_DEBUG_BFIN_HWTRACE_ON)
#define ProgCtrl_opcode         0x0000
#define ProgCtrl_poprnd_bits    0
#define ProgCtrl_poprnd_mask    0xf
#define ProgCtrl_prgfunc_bits   4
#define ProgCtrl_prgfunc_mask   0xf
#define ProgCtrl_code_bits      8
#define ProgCtrl_code_mask      0xff
static void decode_ProgCtrl_0(unsigned int opcode)
#define BRCC_opcode             0x1000
#define BRCC_offset_bits        0
#define BRCC_offset_mask        0x3ff
#define BRCC_B_bits             10
#define BRCC_B_mask             0x1
#define BRCC_T_bits             11
#define BRCC_T_mask             0x1
#define BRCC_code_bits          12
#define BRCC_code_mask          0xf
static void decode_BRCC_0(unsigned int opcode)
#define CALLa_opcode    0xe2000000
#define CALLa_addr_bits 0
#define CALLa_addr_mask 0xffffff
#define CALLa_S_bits    24
#define CALLa_S_mask    0x1
#define CALLa_code_bits 25
#define CALLa_code_mask 0x7f
static void decode_CALLa_0(unsigned int opcode)
#define LoopSetup_opcode                0xe0800000
#define LoopSetup_eoffset_bits          0
#define LoopSetup_eoffset_mask          0x3ff
#define LoopSetup_dontcare_bits         10
#define LoopSetup_dontcare_mask         0x3
#define LoopSetup_reg_bits              12
#define LoopSetup_reg_mask              0xf
#define LoopSetup_soffset_bits          16
#define LoopSetup_soffset_mask          0xf
#define LoopSetup_c_bits                20
#define LoopSetup_c_mask                0x1
#define LoopSetup_rop_bits              21
#define LoopSetup_rop_mask              0x3
#define LoopSetup_code_bits             23
#define LoopSetup_code_mask             0x1ff
static void decode_LoopSetup_0(unsigned int opcode)
#define DspLDST_opcode          0x9c00
#define DspLDST_reg_bits        0
#define DspLDST_reg_mask        0x7
#define DspLDST_i_bits          3
#define DspLDST_i_mask          0x3
#define DspLDST_m_bits          5
#define DspLDST_m_mask          0x3
#define DspLDST_aop_bits        7
#define DspLDST_aop_mask        0x3
#define DspLDST_W_bits          9
#define DspLDST_W_mask          0x1
#define DspLDST_code_bits       10
#define DspLDST_code_mask       0x3f
static void decode_dspLDST_0(unsigned int opcode)
#define LDST_opcode             0x9000
#define LDST_reg_bits           0
#define LDST_reg_mask           0x7
#define LDST_ptr_bits           3
#define LDST_ptr_mask           0x7
#define LDST_Z_bits             6
#define LDST_Z_mask             0x1
#define LDST_aop_bits           7
#define LDST_aop_mask           0x3
#define LDST_W_bits             9
#define LDST_W_mask             0x1
#define LDST_sz_bits            10
#define LDST_sz_mask            0x3
#define LDST_code_bits          12
#define LDST_code_mask          0xf
static void decode_LDST_0(unsigned int opcode)
#define LDSTii_opcode           0xa000
#define LDSTii_reg_bit          0
#define LDSTii_reg_mask         0x7
#define LDSTii_ptr_bit          3
#define LDSTii_ptr_mask         0x7
#define LDSTii_offset_bit       6
#define LDSTii_offset_mask      0xf
#define LDSTii_op_bit           10
#define LDSTii_op_mask          0x3
#define LDSTii_W_bit            12
#define LDSTii_W_mask           0x1
#define LDSTii_code_bit         13
#define LDSTii_code_mask        0x7
static void decode_LDSTii_0(unsigned int opcode)
#define LDSTidxI_opcode         0xe4000000
#define LDSTidxI_offset_bits    0
#define LDSTidxI_offset_mask    0xffff
#define LDSTidxI_reg_bits       16
#define LDSTidxI_reg_mask       0x7
#define LDSTidxI_ptr_bits       19
#define LDSTidxI_ptr_mask       0x7
#define LDSTidxI_sz_bits        22
#define LDSTidxI_sz_mask        0x3
#define LDSTidxI_Z_bits         24
#define LDSTidxI_Z_mask         0x1
#define LDSTidxI_W_bits         25
#define LDSTidxI_W_mask         0x1
#define LDSTidxI_code_bits      26
#define LDSTidxI_code_mask      0x3f
static void decode_LDSTidxI_0(unsigned int opcode)
static void decode_opcode(unsigned int opcode)
#define BIT_MULTI_INS 0x08000000
static void decode_instruction(unsigned short *address)
void dump_bfin_trace_buffer(void)
EXPORT_SYMBOL(dump_bfin_trace_buffer);
void dump_bfin_process(struct pt_regs *fp)
void dump_bfin_mem(struct pt_regs *fp)
void show_regs(struct pt_regs *fp)
