#define MD(x)	    (1 << (x))
#define MODE_COMMON (1 << 31)
#define MODE_0_7    (0xFF)
static const struct lseq_cio_regs  LSEQmCIOREGS[] = ;
#define STR_8BIT   "   %30s[0x%04x]:0x%02x\n"
#define STR_16BIT  "   %30s[0x%04x]:0x%04x\n"
#define STR_32BIT  "   %30s[0x%04x]:0x%08x\n"
#define STR_64BIT  "   %30s[0x%04x]:0x%llx\n"
#define PRINT_REG_8bit(_ha, _n, _r) asd_printk(STR_8BIT, #_n, _n,      \
asd_read_reg_byte(_ha, _r))
#define PRINT_REG_16bit(_ha, _n, _r) asd_printk(STR_16BIT, #_n, _n,     \
asd_read_reg_word(_ha, _r))
#define PRINT_REG_32bit(_ha, _n, _r) asd_printk(STR_32BIT, #_n, _n,      \
asd_read_reg_dword(_ha, _r))
#define PRINT_CREG_8bit(_ha, _n) asd_printk(STR_8BIT, #_n, _n,      \
asd_read_reg_byte(_ha, C##_n))
#define PRINT_CREG_16bit(_ha, _n) asd_printk(STR_16BIT, #_n, _n,     \
asd_read_reg_word(_ha, C##_n))
#define PRINT_CREG_32bit(_ha, _n) asd_printk(STR_32BIT, #_n, _n,      \
asd_read_reg_dword(_ha, C##_n))
#define MSTR_8BIT   "   Mode:%02d %30s[0x%04x]:0x%02x\n"
#define MSTR_16BIT  "   Mode:%02d %30s[0x%04x]:0x%04x\n"
#define MSTR_32BIT  "   Mode:%02d %30s[0x%04x]:0x%08x\n"
#define PRINT_MREG_8bit(_ha, _m, _n, _r) asd_printk(MSTR_8BIT, _m, #_n, _n,   \
asd_read_reg_byte(_ha, _r))
#define PRINT_MREG_16bit(_ha, _m, _n, _r) asd_printk(MSTR_16BIT, _m, #_n, _n, \
asd_read_reg_word(_ha, _r))
#define PRINT_MREG_32bit(_ha, _m, _n, _r) asd_printk(MSTR_32BIT, _m, #_n, _n, \
asd_read_reg_dword(_ha, _r))
#define PRINT_MIS_byte(_ha, _n) asd_printk(STR_8BIT, #_n,CSEQ_##_n-CMAPPEDSCR,\
asd_read_reg_byte(_ha, CSEQ_##_n))
#define PRINT_MIS_word(_ha, _n) asd_printk(STR_16BIT,#_n,CSEQ_##_n-CMAPPEDSCR,\
asd_read_reg_word(_ha, CSEQ_##_n))
#define PRINT_MIS_dword(_ha, _n)                      \
asd_printk(STR_32BIT,#_n,CSEQ_##_n-CMAPPEDSCR,\
asd_read_reg_dword(_ha, CSEQ_##_n))
#define PRINT_MIS_qword(_ha, _n)                                       \
asd_printk(STR_64BIT, #_n,CSEQ_##_n-CMAPPEDSCR,                \
(unsigned long long)(((u64)asd_read_reg_dword(_ha, CSEQ_##_n))     \
| (((u64)asd_read_reg_dword(_ha, (CSEQ_##_n)+4))<<32)))
#define CMDP_REG(_n, _m) (_m*(CSEQ_PAGE_SIZE*2)+CSEQ_##_n)
#define PRINT_CMDP_word(_ha, _n) \
asd_printk("%20s 0x%04x 0x%04x 0x%04x 0x%04x 0x%04x 0x%04x 0x%04x 0x%04x\n", \
#_n, \
asd_read_reg_word(_ha, CMDP_REG(_n, 0)), \
asd_read_reg_word(_ha, CMDP_REG(_n, 1)), \
asd_read_reg_word(_ha, CMDP_REG(_n, 2)), \
asd_read_reg_word(_ha, CMDP_REG(_n, 3)), \
asd_read_reg_word(_ha, CMDP_REG(_n, 4)), \
asd_read_reg_word(_ha, CMDP_REG(_n, 5)), \
asd_read_reg_word(_ha, CMDP_REG(_n, 6)), \
asd_read_reg_word(_ha, CMDP_REG(_n, 7)))
#define PRINT_CMDP_byte(_ha, _n) \
asd_printk("%20s 0x%04x 0x%04x 0x%04x 0x%04x 0x%04x 0x%04x 0x%04x 0x%04x\n", \
#_n, \
asd_read_reg_byte(_ha, CMDP_REG(_n, 0)), \
asd_read_reg_byte(_ha, CMDP_REG(_n, 1)), \
asd_read_reg_byte(_ha, CMDP_REG(_n, 2)), \
asd_read_reg_byte(_ha, CMDP_REG(_n, 3)), \
asd_read_reg_byte(_ha, CMDP_REG(_n, 4)), \
asd_read_reg_byte(_ha, CMDP_REG(_n, 5)), \
asd_read_reg_byte(_ha, CMDP_REG(_n, 6)), \
asd_read_reg_byte(_ha, CMDP_REG(_n, 7)))
static void asd_dump_cseq_state(struct asd_ha_struct *asd_ha)
#define PRINT_LREG_8bit(_h, _lseq, _n) \
asd_printk(STR_8BIT, #_n, _n, asd_read_reg_byte(_h, Lm##_n(_lseq)))
#define PRINT_LREG_16bit(_h, _lseq, _n) \
asd_printk(STR_16BIT, #_n, _n, asd_read_reg_word(_h, Lm##_n(_lseq)))
#define PRINT_LREG_32bit(_h, _lseq, _n) \
asd_printk(STR_32BIT, #_n, _n, asd_read_reg_dword(_h, Lm##_n(_lseq)))
#define PRINT_LMIP_byte(_h, _lseq, _n)                              \
asd_printk(STR_8BIT, #_n, LmSEQ_##_n(_lseq)-LmSCRATCH(_lseq), \
asd_read_reg_byte(_h, LmSEQ_##_n(_lseq)))
#define PRINT_LMIP_word(_h, _lseq, _n)                              \
asd_printk(STR_16BIT, #_n, LmSEQ_##_n(_lseq)-LmSCRATCH(_lseq), \
asd_read_reg_word(_h, LmSEQ_##_n(_lseq)))
#define PRINT_LMIP_dword(_h, _lseq, _n)                             \
asd_printk(STR_32BIT, #_n, LmSEQ_##_n(_lseq)-LmSCRATCH(_lseq), \
asd_read_reg_dword(_h, LmSEQ_##_n(_lseq)))
#define PRINT_LMIP_qword(_h, _lseq, _n)                                \
asd_printk(STR_64BIT, #_n, LmSEQ_##_n(_lseq)-LmSCRATCH(_lseq), \
(unsigned long long)(((unsigned long long) \
asd_read_reg_dword(_h, LmSEQ_##_n(_lseq))) \
| (((unsigned long long) \
asd_read_reg_dword(_h, LmSEQ_##_n(_lseq)+4))<<32)))
static void asd_print_lseq_cio_reg(struct asd_ha_struct *asd_ha,
u32 lseq_cio_addr, int i)
static void asd_dump_lseq_state(struct asd_ha_struct *asd_ha, int lseq)
void asd_dump_seq_state(struct asd_ha_struct *asd_ha, u8 lseq_mask)
void asd_dump_frame_rcvd(struct asd_phy *phy,
struct done_list_struct *dl)
