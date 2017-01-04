#define __VIAFBDEV_H__
#define VERSION_MAJOR       2
#define VERSION_KERNEL      6
#define VERSION_OS          0
#define VERSION_MINOR       4
#define VIAFB_NUM_I2C		5
struct viafb_shared ;
struct viafb_par ;
extern int viafb_SAMM_ON;
extern int viafb_dual_fb;
extern int viafb_LCD2_ON;
extern int viafb_LCD_ON;
extern int viafb_DVI_ON;
extern int viafb_hotplug;
u8 viafb_gpio_i2c_read_lvds(struct lvds_setting_information
*plvds_setting_info, struct lvds_chip_information
*plvds_chip_info, u8 index);
void viafb_gpio_i2c_write_mask_lvds(struct lvds_setting_information
*plvds_setting_info, struct lvds_chip_information
*plvds_chip_info, struct IODATA io_data);
int via_fb_pci_probe(struct viafb_dev *vdev);
void via_fb_pci_remove(struct pci_dev *pdev);
int viafb_init(void);
void viafb_exit(void);
