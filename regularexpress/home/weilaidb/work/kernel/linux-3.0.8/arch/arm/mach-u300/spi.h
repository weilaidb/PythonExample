#define SPI_H
void __init u300_spi_init(struct amba_device *adev);
void __init u300_spi_register_board_devices(void);
static inline void __init u300_spi_init(struct amba_device *adev)
static inline void __init u300_spi_register_board_devices(void)
