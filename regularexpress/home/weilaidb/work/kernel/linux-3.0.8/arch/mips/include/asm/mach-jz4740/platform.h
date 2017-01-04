#define __JZ4740_PLATFORM_H
extern struct platform_device jz4740_usb_ohci_device;
extern struct platform_device jz4740_udc_device;
extern struct platform_device jz4740_mmc_device;
extern struct platform_device jz4740_rtc_device;
extern struct platform_device jz4740_i2c_device;
extern struct platform_device jz4740_nand_device;
extern struct platform_device jz4740_framebuffer_device;
extern struct platform_device jz4740_i2s_device;
extern struct platform_device jz4740_pcm_device;
extern struct platform_device jz4740_codec_device;
extern struct platform_device jz4740_adc_device;
extern struct platform_device jz4740_wdt_device;
void jz4740_serial_device_register(void);
