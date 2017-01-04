#define _AU1100LCD_H
#define print_err(f, arg...) printk(KERN_ERR DRIVER_NAME ": " f "\n", ## arg)
#define print_warn(f, arg...) printk(KERN_WARNING DRIVER_NAME ": " f "\n", ## arg)
#define print_info(f, arg...) printk(KERN_INFO DRIVER_NAME ": " f "\n", ## arg)
#if DEBUG
#define print_dbg(f, arg...) printk(__FILE__ ": " f "\n", ## arg)
#define print_dbg(f, arg...) do  while (0)
#if defined(__BIG_ENDIAN)
#define LCD_CONTROL_DEFAULT_PO LCD_CONTROL_PO_11
#define LCD_CONTROL_DEFAULT_PO LCD_CONTROL_PO_00
#define LCD_CONTROL_DEFAULT_SBPPF LCD_CONTROL_SBPPF_565
#define AU1100_LCD_MAX_XRES	800
#define AU1100_LCD_MAX_YRES	600
#define AU1100_LCD_MAX_BPP	16
#define AU1100_LCD_MAX_CLK	48000000
#define AU1100_LCD_NBR_PALETTE_ENTRIES 256
#define AU1100FB_NBR_VIDEO_BUFFERS 4
struct au1100fb_panel
;
struct au1100fb_regs
;
struct au1100fb_device ;
#define LCD_CONTROL                (AU1100_LCD_BASE + 0x0)
#define LCD_CONTROL_SBB_BIT      21
#define LCD_CONTROL_SBB_MASK     (0x3 << LCD_CONTROL_SBB_BIT)
#define LCD_CONTROL_SBB_1        (0 << LCD_CONTROL_SBB_BIT)
#define LCD_CONTROL_SBB_2        (1 << LCD_CONTROL_SBB_BIT)
#define LCD_CONTROL_SBB_3        (2 << LCD_CONTROL_SBB_BIT)
#define LCD_CONTROL_SBB_4        (3 << LCD_CONTROL_SBB_BIT)
#define LCD_CONTROL_SBPPF_BIT    18
#define LCD_CONTROL_SBPPF_MASK   (0x7 << LCD_CONTROL_SBPPF_BIT)
#define LCD_CONTROL_SBPPF_655    (0 << LCD_CONTROL_SBPPF_BIT)
#define LCD_CONTROL_SBPPF_565    (1 << LCD_CONTROL_SBPPF_BIT)
#define LCD_CONTROL_SBPPF_556    (2 << LCD_CONTROL_SBPPF_BIT)
#define LCD_CONTROL_SBPPF_1555   (3 << LCD_CONTROL_SBPPF_BIT)
#define LCD_CONTROL_SBPPF_5551   (4 << LCD_CONTROL_SBPPF_BIT)
#define LCD_CONTROL_WP           (1<<17)
#define LCD_CONTROL_WD           (1<<16)
#define LCD_CONTROL_C            (1<<15)
#define LCD_CONTROL_SM_BIT       13
#define LCD_CONTROL_SM_MASK      (0x3 << LCD_CONTROL_SM_BIT)
#define LCD_CONTROL_SM_0         (0 << LCD_CONTROL_SM_BIT)
#define LCD_CONTROL_SM_90        (1 << LCD_CONTROL_SM_BIT)
#define LCD_CONTROL_SM_180       (2 << LCD_CONTROL_SM_BIT)
#define LCD_CONTROL_SM_270       (3 << LCD_CONTROL_SM_BIT)
#define LCD_CONTROL_DB           (1<<12)
#define LCD_CONTROL_CCO          (1<<11)
#define LCD_CONTROL_DP           (1<<10)
#define LCD_CONTROL_PO_BIT       8
#define LCD_CONTROL_PO_MASK      (0x3 << LCD_CONTROL_PO_BIT)
#define LCD_CONTROL_PO_00        (0 << LCD_CONTROL_PO_BIT)
#define LCD_CONTROL_PO_01        (1 << LCD_CONTROL_PO_BIT)
#define LCD_CONTROL_PO_10        (2 << LCD_CONTROL_PO_BIT)
#define LCD_CONTROL_PO_11        (3 << LCD_CONTROL_PO_BIT)
#define LCD_CONTROL_MPI          (1<<7)
#define LCD_CONTROL_PT           (1<<6)
#define LCD_CONTROL_PC           (1<<5)
#define LCD_CONTROL_BPP_BIT      1
#define LCD_CONTROL_BPP_MASK     (0x7 << LCD_CONTROL_BPP_BIT)
#define LCD_CONTROL_BPP_1        (0 << LCD_CONTROL_BPP_BIT)
#define LCD_CONTROL_BPP_2        (1 << LCD_CONTROL_BPP_BIT)
#define LCD_CONTROL_BPP_4        (2 << LCD_CONTROL_BPP_BIT)
#define LCD_CONTROL_BPP_8        (3 << LCD_CONTROL_BPP_BIT)
#define LCD_CONTROL_BPP_12       (4 << LCD_CONTROL_BPP_BIT)
#define LCD_CONTROL_BPP_16       (5 << LCD_CONTROL_BPP_BIT)
#define LCD_CONTROL_GO           (1<<0)
#define LCD_INTSTATUS              (AU1100_LCD_BASE + 0x4)
#define LCD_INTENABLE              (AU1100_LCD_BASE + 0x8)
#define LCD_INT_SD               (1<<7)
#define LCD_INT_OF               (1<<6)
#define LCD_INT_UF               (1<<5)
#define LCD_INT_SA               (1<<3)
#define LCD_INT_SS               (1<<2)
#define LCD_INT_S1               (1<<1)
#define LCD_INT_S0               (1<<0)
#define LCD_HORZTIMING             (AU1100_LCD_BASE + 0xC)
#define LCD_HORZTIMING_HN2_BIT   24
#define LCD_HORZTIMING_HN2_MASK  (0xFF << LCD_HORZTIMING_HN2_BIT)
#define LCD_HORZTIMING_HN2_N(N)  ((((N)-1) << LCD_HORZTIMING_HN2_BIT) & LCD_HORZTIMING_HN2_MASK)
#define LCD_HORZTIMING_HN1_BIT   16
#define LCD_HORZTIMING_HN1_MASK  (0xFF << LCD_HORZTIMING_HN1_BIT)
#define LCD_HORZTIMING_HN1_N(N)  ((((N)-1) << LCD_HORZTIMING_HN1_BIT) & LCD_HORZTIMING_HN1_MASK)
#define LCD_HORZTIMING_HPW_BIT   10
#define LCD_HORZTIMING_HPW_MASK  (0x3F << LCD_HORZTIMING_HPW_BIT)
#define LCD_HORZTIMING_HPW_N(N)  ((((N)-1) << LCD_HORZTIMING_HPW_BIT) & LCD_HORZTIMING_HPW_MASK)
#define LCD_HORZTIMING_PPL_BIT   0
#define LCD_HORZTIMING_PPL_MASK  (0x3FF << LCD_HORZTIMING_PPL_BIT)
#define LCD_HORZTIMING_PPL_N(N)  ((((N)-1) << LCD_HORZTIMING_PPL_BIT) & LCD_HORZTIMING_PPL_MASK)
#define LCD_VERTTIMING             (AU1100_LCD_BASE + 0x10)
#define LCD_VERTTIMING_VN2_BIT   24
#define LCD_VERTTIMING_VN2_MASK  (0xFF << LCD_VERTTIMING_VN2_BIT)
#define LCD_VERTTIMING_VN2_N(N)  ((((N)-1) << LCD_VERTTIMING_VN2_BIT) & LCD_VERTTIMING_VN2_MASK)
#define LCD_VERTTIMING_VN1_BIT   16
#define LCD_VERTTIMING_VN1_MASK  (0xFF << LCD_VERTTIMING_VN1_BIT)
#define LCD_VERTTIMING_VN1_N(N)  ((((N)-1) << LCD_VERTTIMING_VN1_BIT) & LCD_VERTTIMING_VN1_MASK)
#define LCD_VERTTIMING_VPW_BIT   10
#define LCD_VERTTIMING_VPW_MASK  (0x3F << LCD_VERTTIMING_VPW_BIT)
#define LCD_VERTTIMING_VPW_N(N)  ((((N)-1) << LCD_VERTTIMING_VPW_BIT) & LCD_VERTTIMING_VPW_MASK)
#define LCD_VERTTIMING_LPP_BIT   0
#define LCD_VERTTIMING_LPP_MASK  (0x3FF << LCD_VERTTIMING_LPP_BIT)
#define LCD_VERTTIMING_LPP_N(N)  ((((N)-1) << LCD_VERTTIMING_LPP_BIT) & LCD_VERTTIMING_LPP_MASK)
#define LCD_CLKCONTROL             (AU1100_LCD_BASE + 0x14)
#define LCD_CLKCONTROL_IB        (1<<18)
#define LCD_CLKCONTROL_IC        (1<<17)
#define LCD_CLKCONTROL_IH        (1<<16)
#define LCD_CLKCONTROL_IV        (1<<15)
#define LCD_CLKCONTROL_BF_BIT    10
#define LCD_CLKCONTROL_BF_MASK   (0x1F << LCD_CLKCONTROL_BF_BIT)
#define LCD_CLKCONTROL_BF_N(N)   ((((N)-1) << LCD_CLKCONTROL_BF_BIT) & LCD_CLKCONTROL_BF_MASK)
#define LCD_CLKCONTROL_PCD_BIT   0
#define LCD_CLKCONTROL_PCD_MASK  (0x3FF << LCD_CLKCONTROL_PCD_BIT)
#define LCD_CLKCONTROL_PCD_N(N)  (((N) << LCD_CLKCONTROL_PCD_BIT) & LCD_CLKCONTROL_PCD_MASK)
#define LCD_DMAADDR0               (AU1100_LCD_BASE + 0x18)
#define LCD_DMAADDR1               (AU1100_LCD_BASE + 0x1C)
#define LCD_DMA_SA_BIT           5
#define LCD_DMA_SA_MASK          (0x7FFFFFF << LCD_DMA_SA_BIT)
#define LCD_DMA_SA_N(N)          ((N) & LCD_DMA_SA_MASK)
#define LCD_WORDS                  (AU1100_LCD_BASE + 0x20)
#define LCD_WRD_WRDS_BIT         0
#define LCD_WRD_WRDS_MASK        (0xFFFFFFFF << LCD_WRD_WRDS_BIT)
#define LCD_WRD_WRDS_N(N)        ((((N)-1) << LCD_WRD_WRDS_BIT) & LCD_WRD_WRDS_MASK)
#define LCD_PWMDIV                 (AU1100_LCD_BASE + 0x24)
#define LCD_PWMDIV_EN            (1<<12)
#define LCD_PWMDIV_PWMDIV_BIT    0
#define LCD_PWMDIV_PWMDIV_MASK   (0xFFF << LCD_PWMDIV_PWMDIV_BIT)
#define LCD_PWMDIV_PWMDIV_N(N)   ((((N)-1) << LCD_PWMDIV_PWMDIV_BIT) & LCD_PWMDIV_PWMDIV_MASK)
#define LCD_PWMHI                  (AU1100_LCD_BASE + 0x28)
#define LCD_PWMHI_PWMHI1_BIT     12
#define LCD_PWMHI_PWMHI1_MASK    (0xFFF << LCD_PWMHI_PWMHI1_BIT)
#define LCD_PWMHI_PWMHI1_N(N)    (((N) << LCD_PWMHI_PWMHI1_BIT) & LCD_PWMHI_PWMHI1_MASK)
#define LCD_PWMHI_PWMHI0_BIT     0
#define LCD_PWMHI_PWMHI0_MASK    (0xFFF << LCD_PWMHI_PWMHI0_BIT)
#define LCD_PWMHI_PWMHI0_N(N)    (((N) << LCD_PWMHI_PWMHI0_BIT) & LCD_PWMHI_PWMHI0_MASK)
#define LCD_PALLETTEBASE                (AU1100_LCD_BASE + 0x400)
#define LCD_PALLETTE_MONO_MI_BIT      0
#define LCD_PALLETTE_MONO_MI_MASK     (0xF << LCD_PALLETTE_MONO_MI_BIT)
#define LCD_PALLETTE_MONO_MI_N(N)     (((N)<< LCD_PALLETTE_MONO_MI_BIT) & LCD_PALLETTE_MONO_MI_MASK)
#define LCD_PALLETTE_COLOR_RI_BIT     8
#define LCD_PALLETTE_COLOR_RI_MASK    (0xF << LCD_PALLETTE_COLOR_RI_BIT)
#define LCD_PALLETTE_COLOR_RI_N(N)    (((N)<< LCD_PALLETTE_COLOR_RI_BIT) & LCD_PALLETTE_COLOR_RI_MASK)
#define LCD_PALLETTE_COLOR_GI_BIT     4
#define LCD_PALLETTE_COLOR_GI_MASK    (0xF << LCD_PALLETTE_COLOR_GI_BIT)
#define LCD_PALLETTE_COLOR_GI_N(N)    (((N)<< LCD_PALLETTE_COLOR_GI_BIT) & LCD_PALLETTE_COLOR_GI_MASK)
#define LCD_PALLETTE_COLOR_BI_BIT     0
#define LCD_PALLETTE_COLOR_BI_MASK    (0xF << LCD_PALLETTE_COLOR_BI_BIT)
#define LCD_PALLETTE_COLOR_BI_N(N)    (((N)<< LCD_PALLETTE_COLOR_BI_BIT) & LCD_PALLETTE_COLOR_BI_MASK)
#define LCD_PALLETTE_TFT_DC_BIT       0
#define LCD_PALLETTE_TFT_DC_MASK      (0xFFFF << LCD_PALLETTE_TFT_DC_BIT)
#define LCD_PALLETTE_TFT_DC_N(N)      (((N)<< LCD_PALLETTE_TFT_DC_BIT) & LCD_PALLETTE_TFT_DC_MASK)
static struct au1100fb_panel known_lcd_panels[] =
;
struct au1100fb_drv_info ;
#define panel_is_dual(panel)  (panel->control_base & LCD_CONTROL_DP)
#define panel_is_active(panel)(panel->control_base & LCD_CONTROL_PT)
#define panel_is_color(panel) (panel->control_base & LCD_CONTROL_PC)
#define panel_swap_rgb(panel) (panel->control_base & LCD_CONTROL_CCO)