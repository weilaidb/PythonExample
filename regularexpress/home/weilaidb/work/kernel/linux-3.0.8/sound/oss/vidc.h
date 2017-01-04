extern unsigned long vidc_fill_1x8_u(unsigned long ibuf, unsigned long iend,
unsigned long obuf, int mask);
extern unsigned long vidc_fill_2x8_u(unsigned long ibuf, unsigned long iend,
unsigned long obuf, int mask);
extern unsigned long vidc_fill_1x8_s(unsigned long ibuf, unsigned long iend,
unsigned long obuf, int mask);
extern unsigned long vidc_fill_2x8_s(unsigned long ibuf, unsigned long iend,
unsigned long obuf, int mask);
extern unsigned long vidc_fill_1x16_s(unsigned long ibuf, unsigned long iend,
unsigned long obuf, int mask);
extern unsigned long vidc_fill_2x16_s(unsigned long ibuf, unsigned long iend,
unsigned long obuf, int mask);
extern irqreturn_t vidc_sound_dma_irq(int irqnr, void *ref);
extern unsigned long (*vidc_filler) (unsigned long ibuf, unsigned long iend,
unsigned long obuf, int mask);
extern irqreturn_t (*dma_interrupt) (void);
extern unsigned long dma_start, dma_count, dma_bufsize;
extern unsigned long dma_buf[2], dma_pbuf[2];
extern void     vidc_synth_init(struct address_info *hw_config);
extern void	vidc_synth_exit(struct address_info *hw_config);
extern int      vidc_synth_get_volume(void);
extern int      vidc_synth_set_volume(int vol);
