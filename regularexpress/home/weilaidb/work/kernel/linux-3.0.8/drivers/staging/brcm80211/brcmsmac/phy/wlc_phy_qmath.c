u16 qm_mulu16(u16 op1, u16 op2)
s16 qm_muls16(s16 op1, s16 op2)
s32 qm_add32(s32 op1, s32 op2)
s16 qm_add16(s16 op1, s16 op2)
s16 qm_sub16(s16 op1, s16 op2)
s32 qm_shl32(s32 op, int shift)
s16 qm_shl16(s16 op, int shift)
s16 qm_shr16(s16 op, int shift)
s16 qm_norm32(s32 op)
static const s16 log_table[] = ;
#define LOG_TABLE_SIZE 32
#define LOG2_LOG_TABLE_SIZE 5
#define Q_LOG_TABLE 15
#define LOG10_2		19728
void qm_log10(s32 N, s16 qN, s16 *log10N, s16 *qLog10N)
