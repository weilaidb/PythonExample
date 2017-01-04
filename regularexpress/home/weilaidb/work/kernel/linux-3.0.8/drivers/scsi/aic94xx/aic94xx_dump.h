#define _AIC94XX_DUMP_H_
void asd_dump_seq_state(struct asd_ha_struct *asd_ha, u8 lseq_mask);
void asd_dump_frame_rcvd(struct asd_phy *phy,
struct done_list_struct *dl);
static inline void asd_dump_seq_state(struct asd_ha_struct *asd_ha,
u8 lseq_mask)
static inline void asd_dump_frame_rcvd(struct asd_phy *phy,
struct done_list_struct *dl)
