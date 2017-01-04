static struct nls_table *p_nls;
#define IS_SJIS_LOW_BYTE(l)	((0x40 <= (l)) && ((l) <= 0xFC) && ((l) != 0x7F))
#define IS_SJIS_JISX0208(h, l)	((((0x81 <= (h)) && ((h) <= 0x9F))	\
|| ((0xE0 <= (h)) && ((h) <= 0xEA)))	\
&& IS_SJIS_LOW_BYTE(l))
#define IS_SJIS_JISX0201KANA(c)	((0xA1 <= (c)) && ((c) <= 0xDF))
#define IS_SJIS_UDC_LOW(h, l)	(((0xF0 <= (h)) && ((h) <= 0xF4))	\
&& IS_SJIS_LOW_BYTE(l))
#define IS_SJIS_UDC_HI(h, l)	(((0xF5 <= (h)) && ((h) <= 0xF9))	\
&& IS_SJIS_LOW_BYTE(l))
#define IS_SJIS_IBM(h, l)	(((0xFA <= (h)) && ((h) <= 0xFC))	\
&& IS_SJIS_LOW_BYTE(l))
#define IS_SJIS_NECIBM(h, l)	(((0xED <= (h)) && ((h) <= 0xEE))	\
&& IS_SJIS_LOW_BYTE(l))
#define MAP_SJIS2EUC(sjis_hi, sjis_lo, sjis_p, euc_hi, euc_lo, euc_p)  while(0)
#define SS2		(0x8E)
#define SS3		(0x8F)
#define IS_EUC_BYTE(c)		((0xA1 <= (c)) && ((c) <= 0xFE))
#define IS_EUC_JISX0208(h, l)	(IS_EUC_BYTE(h) && IS_EUC_BYTE(l))
#define IS_EUC_JISX0201KANA(h, l)	(((h) == SS2) && (0xA1 <= (l) && (l) <= 0xDF))
#define IS_EUC_UDC_LOW(h, l)	(((0xF5 <= (h)) && ((h) <= 0xFE))	\
&& IS_EUC_BYTE(l))
#define IS_EUC_UDC_HI(h, l)	IS_EUC_UDC_LOW(h, l)
#define MAP_EUC2SJIS(euc_hi, euc_lo, euc_p, sjis_hi, sjis_lo, sjis_p)  while(0)
static const unsigned char sjisibm2euc_map[][2] = ;
#define IS_EUC_IBM2JISX0208(h, l) \
(((h) == 0xA2 && (l) == 0xCC) || ((h) == 0xA2 && (l) == 0xE8))
static struct  euc2sjisibm_jisx0212_map[] = ;
static const unsigned char euc2sjisibm_g3upper_map[][2] = ;
static inline int sjisibm2euc(unsigned char *euc, const unsigned char sjis_hi,
const unsigned char sjis_lo);
static inline int euc2sjisibm_jisx0212(unsigned char *sjis, const unsigned char euc_hi,
const unsigned char euc_lo);
static inline int euc2sjisibm_g3upper(unsigned char *sjis, const unsigned char euc_hi,
const unsigned char euc_lo);
static inline int euc2sjisibm(unsigned char *sjis, const unsigned char euc_hi,
const unsigned char euc_lo);
static inline int sjisnec2sjisibm(unsigned char *sjisibm,
const unsigned char sjisnec_hi,
const unsigned char sjisnec_lo);
static inline int sjisibm2euc(unsigned char *euc, const unsigned char sjis_hi,
const unsigned char sjis_lo)
static inline int euc2sjisibm_jisx0212(unsigned char *sjis, const unsigned char euc_hi,
const unsigned char euc_lo)
static inline int euc2sjisibm_g3upper(unsigned char *sjis, const unsigned char euc_hi,
const unsigned char euc_lo)
static inline int euc2sjisibm(unsigned char *sjis, const unsigned char euc_hi,
const unsigned char euc_lo)
static inline int sjisnec2sjisibm(unsigned char *sjisibm,
const unsigned char sjisnec_hi,
const unsigned char sjisnec_lo)
static int uni2char(const wchar_t uni,
unsigned char *out, int boundlen)
static int char2uni(const unsigned char *rawstring, int boundlen,
wchar_t *uni)
static struct nls_table table = ;
static int __init init_nls_euc_jp(void)
static void __exit exit_nls_euc_jp(void)
module_init(init_nls_euc_jp)
module_exit(exit_nls_euc_jp)
MODULE_LICENSE("Dual BSD/GPL");
