#define __CNS3XXX_PM_H
void cns3xxx_pwr_clk_en(unsigned int block);
void cns3xxx_pwr_clk_dis(unsigned int block);
void cns3xxx_pwr_power_up(unsigned int block);
void cns3xxx_pwr_power_down(unsigned int block);
extern atomic_t usb_pwr_ref;
