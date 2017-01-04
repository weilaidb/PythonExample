#define __BFA_PORTLOG_H__
#define BFA_PL_NLOG_ENTS 256
#define BFA_PL_LOG_REC_INCR(_x) ((_x)++, (_x) %= BFA_PL_NLOG_ENTS)
#define BFA_PL_STRING_LOG_SZ   32
#define BFA_PL_INT_LOG_SZ      8
enum bfa_plog_log_type ;
struct bfa_plog_rec_s ;
enum bfa_plog_mid ;
#define BFA_PL_MID_STRLEN    8
struct bfa_plog_mid_strings_s ;
enum bfa_plog_eid ;
#define BFA_PL_ENAME_STRLEN	8
struct bfa_plog_eid_strings_s ;
#define BFA_PL_SIG_LEN	8
#define BFA_PL_SIG_STR  "12pl123"
struct bfa_plog_s ;
void bfa_plog_init(struct bfa_plog_s *plog);
void bfa_plog_str(struct bfa_plog_s *plog, enum bfa_plog_mid mid,
enum bfa_plog_eid event, u16 misc, char *log_str);
void bfa_plog_intarr(struct bfa_plog_s *plog, enum bfa_plog_mid mid,
enum bfa_plog_eid event, u16 misc,
u32 *intarr, u32 num_ints);
void bfa_plog_fchdr(struct bfa_plog_s *plog, enum bfa_plog_mid mid,
enum bfa_plog_eid event, u16 misc, struct fchs_s *fchdr);
void bfa_plog_fchdr_and_pl(struct bfa_plog_s *plog, enum bfa_plog_mid mid,
enum bfa_plog_eid event, u16 misc,
struct fchs_s *fchdr, u32 pld_w0);
