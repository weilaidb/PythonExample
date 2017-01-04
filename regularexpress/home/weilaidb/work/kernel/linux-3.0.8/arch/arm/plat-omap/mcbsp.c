struct omap_mcbsp **mcbsp_ptr;
int omap_mcbsp_count, omap_mcbsp_cache_size;
static void omap_mcbsp_write(struct omap_mcbsp *mcbsp, u16 reg, u32 val)
static int omap_mcbsp_read(struct omap_mcbsp *mcbsp, u16 reg, bool from_cache)
static void omap_mcbsp_st_write(struct omap_mcbsp *mcbsp, u16 reg, u32 val)
static int omap_mcbsp_st_read(struct omap_mcbsp *mcbsp, u16 reg)
#define MCBSP_READ(mcbsp, reg) \
omap_mcbsp_read(mcbsp, OMAP_MCBSP_REG_##reg, 0)
#define MCBSP_WRITE(mcbsp, reg, val) \
omap_mcbsp_write(mcbsp, OMAP_MCBSP_REG_##reg, val)
#define MCBSP_READ_CACHE(mcbsp, reg) \
omap_mcbsp_read(mcbsp, OMAP_MCBSP_REG_##reg, 1)
#define MCBSP_ST_READ(mcbsp, reg) \
omap_mcbsp_st_read(mcbsp, OMAP_ST_REG_##reg)
#define MCBSP_ST_WRITE(mcbsp, reg, val) \
omap_mcbsp_st_write(mcbsp, OMAP_ST_REG_##reg, val)
static void omap_mcbsp_dump_reg(u8 id)
static irqreturn_t omap_mcbsp_tx_irq_handler(int irq, void *dev_id)
static irqreturn_t omap_mcbsp_rx_irq_handler(int irq, void *dev_id)
static void omap_mcbsp_tx_dma_callback(int lch, u16 ch_status, void *data)
static void omap_mcbsp_rx_dma_callback(int lch, u16 ch_status, void *data)
void omap_mcbsp_config(unsigned int id, const struct omap_mcbsp_reg_cfg *config)
EXPORT_SYMBOL(omap_mcbsp_config);
int omap_mcbsp_dma_ch_params(unsigned int id, unsigned int stream)
EXPORT_SYMBOL(omap_mcbsp_dma_ch_params);
int omap_mcbsp_dma_reg_params(unsigned int id, unsigned int stream)
EXPORT_SYMBOL(omap_mcbsp_dma_reg_params);
static struct omap_device *find_omap_device_by_dev(struct device *dev)
static void omap_st_on(struct omap_mcbsp *mcbsp)
static void omap_st_off(struct omap_mcbsp *mcbsp)
static void omap_st_fir_write(struct omap_mcbsp *mcbsp, s16 *fir)
static void omap_st_chgain(struct omap_mcbsp *mcbsp)
int omap_st_set_chgain(unsigned int id, int channel, s16 chgain)
EXPORT_SYMBOL(omap_st_set_chgain);
int omap_st_get_chgain(unsigned int id, int channel, s16 *chgain)
EXPORT_SYMBOL(omap_st_get_chgain);
static int omap_st_start(struct omap_mcbsp *mcbsp)
int omap_st_enable(unsigned int id)
EXPORT_SYMBOL(omap_st_enable);
static int omap_st_stop(struct omap_mcbsp *mcbsp)
int omap_st_disable(unsigned int id)
EXPORT_SYMBOL(omap_st_disable);
int omap_st_is_enabled(unsigned int id)
EXPORT_SYMBOL(omap_st_is_enabled);
void omap_mcbsp_set_tx_threshold(unsigned int id, u16 threshold)
EXPORT_SYMBOL(omap_mcbsp_set_tx_threshold);
void omap_mcbsp_set_rx_threshold(unsigned int id, u16 threshold)
EXPORT_SYMBOL(omap_mcbsp_set_rx_threshold);
u16 omap_mcbsp_get_max_tx_threshold(unsigned int id)
EXPORT_SYMBOL(omap_mcbsp_get_max_tx_threshold);
u16 omap_mcbsp_get_max_rx_threshold(unsigned int id)
EXPORT_SYMBOL(omap_mcbsp_get_max_rx_threshold);
u16 omap_mcbsp_get_fifo_size(unsigned int id)
EXPORT_SYMBOL(omap_mcbsp_get_fifo_size);
u16 omap_mcbsp_get_tx_delay(unsigned int id)
EXPORT_SYMBOL(omap_mcbsp_get_tx_delay);
u16 omap_mcbsp_get_rx_delay(unsigned int id)
EXPORT_SYMBOL(omap_mcbsp_get_rx_delay);
int omap_mcbsp_get_dma_op_mode(unsigned int id)
EXPORT_SYMBOL(omap_mcbsp_get_dma_op_mode);
static inline void omap34xx_mcbsp_request(struct omap_mcbsp *mcbsp)
static inline void omap34xx_mcbsp_free(struct omap_mcbsp *mcbsp)
static inline void omap34xx_mcbsp_request(struct omap_mcbsp *mcbsp)
static inline void omap34xx_mcbsp_free(struct omap_mcbsp *mcbsp)
static inline void omap_st_start(struct omap_mcbsp *mcbsp)
static inline void omap_st_stop(struct omap_mcbsp *mcbsp)
int omap_mcbsp_set_io_type(unsigned int id, omap_mcbsp_io_type_t io_type)
EXPORT_SYMBOL(omap_mcbsp_set_io_type);
int omap_mcbsp_request(unsigned int id)
EXPORT_SYMBOL(omap_mcbsp_request);
void omap_mcbsp_free(unsigned int id)
EXPORT_SYMBOL(omap_mcbsp_free);
void omap_mcbsp_start(unsigned int id, int tx, int rx)
EXPORT_SYMBOL(omap_mcbsp_start);
void omap_mcbsp_stop(unsigned int id, int tx, int rx)
EXPORT_SYMBOL(omap_mcbsp_stop);
int omap_mcbsp_pollwrite(unsigned int id, u16 buf)
EXPORT_SYMBOL(omap_mcbsp_pollwrite);
int omap_mcbsp_pollread(unsigned int id, u16 *buf)
EXPORT_SYMBOL(omap_mcbsp_pollread);
void omap_mcbsp_xmit_word(unsigned int id, u32 word)
EXPORT_SYMBOL(omap_mcbsp_xmit_word);
u32 omap_mcbsp_recv_word(unsigned int id)
EXPORT_SYMBOL(omap_mcbsp_recv_word);
int omap_mcbsp_spi_master_xmit_word_poll(unsigned int id, u32 word)
EXPORT_SYMBOL(omap_mcbsp_spi_master_xmit_word_poll);
int omap_mcbsp_spi_master_recv_word_poll(unsigned int id, u32 *word)
EXPORT_SYMBOL(omap_mcbsp_spi_master_recv_word_poll);
int omap_mcbsp_xmit_buffer(unsigned int id, dma_addr_t buffer,
unsigned int length)
EXPORT_SYMBOL(omap_mcbsp_xmit_buffer);
int omap_mcbsp_recv_buffer(unsigned int id, dma_addr_t buffer,
unsigned int length)
EXPORT_SYMBOL(omap_mcbsp_recv_buffer);
void omap_mcbsp_set_spi_mode(unsigned int id,
const struct omap_mcbsp_spi_cfg *spi_cfg)
EXPORT_SYMBOL(omap_mcbsp_set_spi_mode);
#define max_thres(m)			(mcbsp->pdata->buffer_size)
#define valid_threshold(m, val)		((val) <= max_thres(m))
#define THRESHOLD_PROP_BUILDER(prop)					\
static ssize_t prop##_show(struct device *dev,				\
struct device_attribute *attr, char *buf)	\
\
\
static ssize_t prop##_store(struct device *dev,				\
struct device_attribute *attr,		\
const char *buf, size_t size)		\
\
\
static DEVICE_ATTR(prop, 0644, prop##_show, prop##_store);
THRESHOLD_PROP_BUILDER(max_tx_thres);
THRESHOLD_PROP_BUILDER(max_rx_thres);
static const char *dma_op_modes[] = ;
static ssize_t dma_op_mode_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t dma_op_mode_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(dma_op_mode, 0644, dma_op_mode_show, dma_op_mode_store);
static ssize_t st_taps_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t st_taps_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(st_taps, 0644, st_taps_show, st_taps_store);
static const struct attribute *additional_attrs[] = ;
static const struct attribute_group additional_attr_group = ;
static inline int __devinit omap_additional_add(struct device *dev)
static inline void __devexit omap_additional_remove(struct device *dev)
static const struct attribute *sidetone_attrs[] = ;
static const struct attribute_group sidetone_attr_group = ;
static int __devinit omap_st_add(struct omap_mcbsp *mcbsp)
static void __devexit omap_st_remove(struct omap_mcbsp *mcbsp)
static inline void __devinit omap34xx_device_init(struct omap_mcbsp *mcbsp)
static inline void __devexit omap34xx_device_exit(struct omap_mcbsp *mcbsp)
static inline void __devinit omap34xx_device_init(struct omap_mcbsp *mcbsp)
static inline void __devexit omap34xx_device_exit(struct omap_mcbsp *mcbsp)
static int __devinit omap_mcbsp_probe(struct platform_device *pdev)
static int __devexit omap_mcbsp_remove(struct platform_device *pdev)
static struct platform_driver omap_mcbsp_driver = ;
int __init omap_mcbsp_init(void)
