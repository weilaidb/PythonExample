void saa7164_buffer_display(struct saa7164_buffer *buf)
struct saa7164_buffer *saa7164_buffer_alloc(struct saa7164_port *port,
u32 len)
int saa7164_buffer_dealloc(struct saa7164_buffer *buf)
int saa7164_buffer_zero_offsets(struct saa7164_port *port, int i)
int saa7164_buffer_activate(struct saa7164_buffer *buf, int i)
int saa7164_buffer_cfg_port(struct saa7164_port *port)
struct saa7164_user_buffer *saa7164_buffer_alloc_user(struct saa7164_dev *dev,
u32 len)
void saa7164_buffer_dealloc_user(struct saa7164_user_buffer *buf)
