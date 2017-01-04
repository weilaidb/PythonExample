extern u32 bcom_ata_task[];
struct bcom_ata_var ;
struct bcom_ata_inc ;
struct bcom_task *
bcom_ata_init(int queue_len, int maxbufsize)
EXPORT_SYMBOL_GPL(bcom_ata_init);
void bcom_ata_rx_prepare(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_ata_rx_prepare);
void bcom_ata_tx_prepare(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_ata_tx_prepare);
void bcom_ata_reset_bd(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_ata_reset_bd);
void bcom_ata_release(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_ata_release);
MODULE_DESCRIPTION("BestComm ATA task driver");
MODULE_AUTHOR("John Rigby");
MODULE_LICENSE("GPL v2");
