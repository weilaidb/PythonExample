#define _FC_ENCODE_H_
#define FC_FCTL_REQ	(FC_FC_FIRST_SEQ | FC_FC_END_SEQ | FC_FC_SEQ_INIT)
#define FC_FCTL_RESP	(FC_FC_EX_CTX | FC_FC_LAST_SEQ | \
FC_FC_END_SEQ | FC_FC_SEQ_INIT)
struct fc_ns_rft ;
struct fc_ct_req ;
static inline void __fc_fill_fc_hdr(struct fc_frame_header *fh,
enum fc_rctl r_ctl,
u32 did, u32 sid, enum fc_fh_type type,
u32 f_ctl, u32 parm_offset)
static inline void fc_fill_fc_hdr(struct fc_frame *fp, enum fc_rctl r_ctl,
u32 did, u32 sid, enum fc_fh_type type,
u32 f_ctl, u32 parm_offset)
static inline void fc_adisc_fill(struct fc_lport *lport, struct fc_frame *fp)
static inline struct fc_ct_req *fc_ct_hdr_fill(const struct fc_frame *fp,
unsigned int op, size_t req_size)
static inline int fc_ct_fill(struct fc_lport *lport,
u32 fc_id, struct fc_frame *fp,
unsigned int op, enum fc_rctl *r_ctl,
enum fc_fh_type *fh_type)
static inline void fc_plogi_fill(struct fc_lport *lport, struct fc_frame *fp,
unsigned int op)
static inline void fc_flogi_fill(struct fc_lport *lport, struct fc_frame *fp)
static inline void fc_fdisc_fill(struct fc_lport *lport, struct fc_frame *fp)
static inline void fc_logo_fill(struct fc_lport *lport, struct fc_frame *fp)
static inline void fc_rtv_fill(struct fc_lport *lport, struct fc_frame *fp)
static inline void fc_rec_fill(struct fc_lport *lport, struct fc_frame *fp)
static inline void fc_prli_fill(struct fc_lport *lport, struct fc_frame *fp)
static inline void fc_scr_fill(struct fc_lport *lport, struct fc_frame *fp)
static inline int fc_els_fill(struct fc_lport *lport,
u32 did,
struct fc_frame *fp, unsigned int op,
enum fc_rctl *r_ctl, enum fc_fh_type *fh_type)
