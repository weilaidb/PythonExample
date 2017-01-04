#define __BESTCOMM_ATA_H__
struct bcom_ata_bd ;
extern struct bcom_task * bcom_ata_init(int queue_len, int maxbufsize);
extern void bcom_ata_rx_prepare(struct bcom_task *tsk);
extern void bcom_ata_tx_prepare(struct bcom_task *tsk);
extern void bcom_ata_reset_bd(struct bcom_task *tsk);
extern void bcom_ata_release(struct bcom_task *tsk);
