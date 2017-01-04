#define __I2SBUS_H
struct i2sbus_control ;
#define MAX_DBDMA_COMMANDS	32
struct dbdma_command_mem ;
struct pcm_info ;
enum ;
struct i2sbus_dev ;
#define soundbus_dev_to_i2sbus_dev(sdev) \
container_of(sdev, struct i2sbus_dev, sound)
extern int
i2sbus_attach_codec(struct soundbus_dev *dev, struct snd_card *card,
struct codec_info *ci, void *data);
extern void
i2sbus_detach_codec(struct soundbus_dev *dev, void *data);
extern irqreturn_t
i2sbus_tx_intr(int irq, void *devid);
extern irqreturn_t
i2sbus_rx_intr(int irq, void *devid);
extern void i2sbus_wait_for_stop_both(struct i2sbus_dev *i2sdev);
extern void i2sbus_pcm_prepare_both(struct i2sbus_dev *i2sdev);
extern int i2sbus_control_init(struct macio_dev* dev,
struct i2sbus_control **c);
extern void i2sbus_control_destroy(struct i2sbus_control *c);
extern int i2sbus_control_add_dev(struct i2sbus_control *c,
struct i2sbus_dev *i2sdev);
extern void i2sbus_control_remove_dev(struct i2sbus_control *c,
struct i2sbus_dev *i2sdev);
extern int i2sbus_control_enable(struct i2sbus_control *c,
struct i2sbus_dev *i2sdev);
extern int i2sbus_control_cell(struct i2sbus_control *c,
struct i2sbus_dev *i2sdev,
int enable);
extern int i2sbus_control_clock(struct i2sbus_control *c,
struct i2sbus_dev *i2sdev,
int enable);
