#define FILE_ "CAPIDTMF.C"
#define trace(a)
static short capidtmf_expand_table_alaw[0x0100] =
;
static short capidtmf_expand_table_ulaw[0x0100] =
;
static short capidtmf_recv_window_function[CAPIDTMF_RECV_ACCUMULATE_CYCLES] =
;
static byte capidtmf_leading_zeroes_table[0x100] =
;
#define capidtmf_byte_leading_zeroes(b)  (capidtmf_leading_zeroes_table[(BYTE)(b)])
#define capidtmf_word_leading_zeroes(w)  (((w) & 0xff00) ? capidtmf_leading_zeroes_table[(w) >> 8] : 8 + capidtmf_leading_zeroes_table[(w)])
#define capidtmf_dword_leading_zeroes(d)  (((d) & 0xffff0000L) ?    (((d) & 0xff000000L) ? capidtmf_leading_zeroes_table[(d) >> 24] : 8 + capidtmf_leading_zeroes_table[(d) >> 16]) :    (((d) & 0xff00) ? 16 + capidtmf_leading_zeroes_table[(d) >> 8] : 24 + capidtmf_leading_zeroes_table[(d)]))
static void capidtmf_goertzel_loop (long *buffer, long *coeffs, short *sample, long count)
static void capidtmf_goertzel_result (long *buffer, long *coeffs)
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_697     0
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_770     1
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_852     2
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_941     3
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_1209    4
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_1336    5
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_1477    6
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_1633    7
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_635     8
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_1010    9
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_1140    10
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_1272    11
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_1405    12
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_1555    13
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_1715    14
#define CAPIDTMF_RECV_GUARD_SNR_INDEX_1875    15
#define CAPIDTMF_RECV_GUARD_SNR_DONTCARE      0xc000
#define CAPIDTMF_RECV_NO_DIGIT                0xff
#define CAPIDTMF_RECV_TIME_GRANULARITY        (CAPIDTMF_RECV_ACCUMULATE_CYCLES + 1)
#define CAPIDTMF_RECV_INDICATION_DIGIT        0x0001
static long capidtmf_recv_goertzel_coef_table[CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT] =
;
static word capidtmf_recv_guard_snr_low_table[CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT] =
;
static word capidtmf_recv_guard_snr_high_table[CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT] =
;
static void capidtmf_recv_init (t_capidtmf_state   *p_state)
void capidtmf_recv_enable (t_capidtmf_state   *p_state, word min_digit_duration, word min_gap_duration)
void capidtmf_recv_disable (t_capidtmf_state   *p_state)
word capidtmf_recv_indication (t_capidtmf_state   *p_state, byte *buffer)
#define CAPIDTMF_RECV_WINDOWED_SAMPLES  32
void capidtmf_recv_block (t_capidtmf_state   *p_state, byte   *buffer, word length)
void capidtmf_init (t_capidtmf_state   *p_state, byte ulaw)
