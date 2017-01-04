int saa7164_cmd_alloc_seqno(struct saa7164_dev *dev)
void saa7164_cmd_free_seqno(struct saa7164_dev *dev, u8 seqno)
void saa7164_cmd_timeout_seqno(struct saa7164_dev *dev, u8 seqno)
u32 saa7164_cmd_timeout_get(struct saa7164_dev *dev, u8 seqno)
int saa7164_irq_dequeue(struct saa7164_dev *dev)
int saa7164_cmd_dequeue(struct saa7164_dev *dev)
int saa7164_cmd_set(struct saa7164_dev *dev, struct tmComResInfo *msg,
void *buf)
int saa7164_cmd_wait(struct saa7164_dev *dev, u8 seqno)
void saa7164_cmd_signal(struct saa7164_dev *dev, u8 seqno)
int saa7164_cmd_send(struct saa7164_dev *dev, u8 id, enum tmComResCmd command,
u16 controlselector, u16 size, void *buf)
