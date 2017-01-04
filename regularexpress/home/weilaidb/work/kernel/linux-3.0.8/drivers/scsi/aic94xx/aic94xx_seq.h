#define _AIC94XX_SEQ_H_
#define CSEQ_NUM_VECS	3
#define LSEQ_NUM_VECS	11
#define SAS_RAZOR_SEQUENCER_FW_FILE "aic94xx-seq.fw"
#define SAS_RAZOR_SEQUENCER_FW_MAJOR	1
struct sequencer_file_header  __attribute__((packed));
int asd_init_seqs(struct asd_ha_struct *asd_ha);
int asd_start_seqs(struct asd_ha_struct *asd_ha);
int asd_release_firmware(void);
void asd_update_port_links(struct asd_ha_struct *asd_ha, struct asd_phy *phy);
