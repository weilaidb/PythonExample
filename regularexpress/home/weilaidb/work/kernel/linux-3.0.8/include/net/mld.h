#define LINUX_MLD_H
struct mld_msg ;
#define mld_type		mld_hdr.icmp6_type
#define mld_code		mld_hdr.icmp6_code
#define mld_cksum		mld_hdr.icmp6_cksum
#define mld_maxdelay		mld_hdr.icmp6_maxdelay
#define mld_reserved		mld_hdr.icmp6_dataun.un_data16[1]
struct mld2_grec ;
struct mld2_report ;
#define mld2r_type		mld2r_hdr.icmp6_type
#define mld2r_resv1		mld2r_hdr.icmp6_code
#define mld2r_cksum		mld2r_hdr.icmp6_cksum
#define mld2r_resv2		mld2r_hdr.icmp6_dataun.un_data16[0]
#define mld2r_ngrec		mld2r_hdr.icmp6_dataun.un_data16[1]
struct mld2_query ;
#define mld2q_type		mld2q_hdr.icmp6_type
#define mld2q_code		mld2q_hdr.icmp6_code
#define mld2q_cksum		mld2q_hdr.icmp6_cksum
#define mld2q_mrc		mld2q_hdr.icmp6_maxdelay
#define mld2q_resv1		mld2q_hdr.icmp6_dataun.un_data16[1]
#define MLDV2_MASK(value, nb) ((nb)>=32 ? (value) : ((1<<(nb))-1) & (value))
#define MLDV2_EXP(thresh, nbmant, nbexp, value) \
((value) < (thresh) ? (value) : \
((MLDV2_MASK(value, nbmant) | (1<<(nbmant))) << \
(MLDV2_MASK((value) >> (nbmant), nbexp) + (nbexp))))
#define MLDV2_MRC(value) MLDV2_EXP(0x8000, 12, 3, value)
