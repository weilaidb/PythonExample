unsigned int rtsx_stor_access_xfer_buf(unsigned char *buffer,
unsigned int buflen, struct scsi_cmnd *srb, unsigned int *index,
unsigned int *offset, enum xfer_buf_dir dir)
void rtsx_stor_set_xfer_buf(unsigned char *buffer,
unsigned int buflen, struct scsi_cmnd *srb)
void rtsx_stor_get_xfer_buf(unsigned char *buffer,
unsigned int buflen, struct scsi_cmnd *srb)
void rtsx_invoke_transport(struct scsi_cmnd *srb, struct rtsx_chip *chip)
void rtsx_add_cmd(struct rtsx_chip *chip,
u8 cmd_type, u16 reg_addr, u8 mask, u8 data)
void rtsx_send_cmd_no_wait(struct rtsx_chip *chip)
int rtsx_send_cmd(struct rtsx_chip *chip, u8 card, int timeout)
static inline void rtsx_add_sg_tbl(
struct rtsx_chip *chip, u32 addr, u32 len, u8 option)
static int rtsx_transfer_sglist_adma_partial(struct rtsx_chip *chip, u8 card,
struct scatterlist *sg, int num_sg, unsigned int *index,
unsigned int *offset, int size,
enum dma_data_direction dma_dir, int timeout)
static int rtsx_transfer_sglist_adma(struct rtsx_chip *chip, u8 card,
struct scatterlist *sg, int num_sg,
enum dma_data_direction dma_dir, int timeout)
static int rtsx_transfer_buf(struct rtsx_chip *chip, u8 card, void *buf, size_t len,
enum dma_data_direction dma_dir, int timeout)
int rtsx_transfer_data_partial(struct rtsx_chip *chip, u8 card,
void *buf, size_t len, int use_sg, unsigned int *index,
unsigned int *offset, enum dma_data_direction dma_dir,
int timeout)
int rtsx_transfer_data(struct rtsx_chip *chip, u8 card, void *buf, size_t len,
int use_sg, enum dma_data_direction dma_dir, int timeout)
