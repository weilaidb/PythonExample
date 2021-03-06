#define __PSB_INTEL_REG_H__
#define BLC_PWM_CTL		0x61254
#define BLC_PWM_CTL2		0x61250
#define BLC_PWM_CTL_C		0x62254
#define BLC_PWM_CTL2_C		0x62250
#define BACKLIGHT_MODULATION_FREQ_SHIFT		(17)
#define BACKLIGHT_MODULATION_FREQ_MASK		(0x7fff << 17)
#define BLM_LEGACY_MODE				(1 << 16)
#define BACKLIGHT_DUTY_CYCLE_SHIFT		(0)
#define BACKLIGHT_DUTY_CYCLE_MASK		(0xffff)
#define I915_GCFGC			0xf0
#define I915_LOW_FREQUENCY_ENABLE		(1 << 7)
#define I915_DISPLAY_CLOCK_190_200_MHZ		(0 << 4)
#define I915_DISPLAY_CLOCK_333_MHZ		(4 << 4)
#define I915_DISPLAY_CLOCK_MASK			(7 << 4)
#define I855_HPLLCC			0xc0
#define I855_CLOCK_CONTROL_MASK			(3 << 0)
#define I855_CLOCK_133_200			(0 << 0)
#define I855_CLOCK_100_200			(1 << 0)
#define I855_CLOCK_100_133			(2 << 0)
#define I855_CLOCK_166_250			(3 << 0)
#define HTOTAL_A	0x60000
#define HBLANK_A	0x60004
#define HSYNC_A 	0x60008
#define VTOTAL_A	0x6000c
#define VBLANK_A	0x60010
#define VSYNC_A 	0x60014
#define PIPEASRC	0x6001c
#define BCLRPAT_A	0x60020
#define VSYNCSHIFT_A	0x60028
#define HTOTAL_B	0x61000
#define HBLANK_B	0x61004
#define HSYNC_B 	0x61008
#define VTOTAL_B	0x6100c
#define VBLANK_B	0x61010
#define VSYNC_B 	0x61014
#define PIPEBSRC	0x6101c
#define BCLRPAT_B	0x61020
#define VSYNCSHIFT_B	0x61028
#define HTOTAL_C	0x62000
#define HBLANK_C	0x62004
#define HSYNC_C 	0x62008
#define VTOTAL_C	0x6200c
#define VBLANK_C	0x62010
#define VSYNC_C 	0x62014
#define PIPECSRC	0x6201c
#define BCLRPAT_C	0x62020
#define VSYNCSHIFT_C	0x62028
#define PP_STATUS	0x61200
# define PP_ON					(1 << 31)
# define PP_READY				(1 << 30)
# define PP_SEQUENCE_NONE			(0 << 28)
# define PP_SEQUENCE_ON				(1 << 28)
# define PP_SEQUENCE_OFF			(2 << 28)
# define PP_SEQUENCE_MASK			0x30000000
#define PP_CONTROL	0x61204
# define POWER_TARGET_ON			(1 << 0)
#define LVDSPP_ON       0x61208
#define LVDSPP_OFF      0x6120c
#define PP_CYCLE        0x61210
#define PFIT_CONTROL	0x61230
# define PFIT_ENABLE				(1 << 31)
# define PFIT_PIPE_MASK				(3 << 29)
# define PFIT_PIPE_SHIFT			29
# define PFIT_SCALING_MODE_PILLARBOX            (1 << 27)
# define PFIT_SCALING_MODE_LETTERBOX            (3 << 26)
# define VERT_INTERP_DISABLE			(0 << 10)
# define VERT_INTERP_BILINEAR			(1 << 10)
# define VERT_INTERP_MASK			(3 << 10)
# define VERT_AUTO_SCALE			(1 << 9)
# define HORIZ_INTERP_DISABLE			(0 << 6)
# define HORIZ_INTERP_BILINEAR			(1 << 6)
# define HORIZ_INTERP_MASK			(3 << 6)
# define HORIZ_AUTO_SCALE			(1 << 5)
# define PANEL_8TO6_DITHER_ENABLE		(1 << 3)
#define PFIT_PGM_RATIOS	0x61234
# define PFIT_VERT_SCALE_MASK			0xfff00000
# define PFIT_HORIZ_SCALE_MASK			0x0000fff0
#define PFIT_AUTO_RATIOS	0x61238
#define DPLL_A		0x06014
#define DPLL_B		0x06018
# define DPLL_VCO_ENABLE			(1 << 31)
# define DPLL_DVO_HIGH_SPEED			(1 << 30)
# define DPLL_SYNCLOCK_ENABLE			(1 << 29)
# define DPLL_VGA_MODE_DIS			(1 << 28)
# define DPLLB_MODE_DAC_SERIAL			(1 << 26)
# define DPLLB_MODE_LVDS			(2 << 26)
# define DPLL_MODE_MASK				(3 << 26)
# define DPLL_DAC_SERIAL_P2_CLOCK_DIV_10	(0 << 24)
# define DPLL_DAC_SERIAL_P2_CLOCK_DIV_5		(1 << 24)
# define DPLLB_LVDS_P2_CLOCK_DIV_14		(0 << 24)
# define DPLLB_LVDS_P2_CLOCK_DIV_7		(1 << 24)
# define DPLL_P2_CLOCK_DIV_MASK			0x03000000
# define DPLL_FPA01_P1_POST_DIV_MASK		0x00ff0000
# define DPLL_FPA01_P1_POST_DIV_MASK_I830	0x001f0000
# define DPLL_FPA01_P1_POST_DIV_MASK_I830_LVDS	0x003f0000
# define DPLL_FPA01_P1_POST_DIV_SHIFT		16
# define PLL_P2_DIVIDE_BY_4		(1 << 23)
# define PLL_P1_DIVIDE_BY_TWO			(1 << 21)
# define PLL_REF_INPUT_DREFCLK			(0 << 13)
# define PLL_REF_INPUT_TVCLKINA			(1 << 13)
# define PLL_REF_INPUT_TVCLKINBC		(2 << 13)
# define PLLB_REF_INPUT_SPREADSPECTRUMIN	(3 << 13)
# define PLL_REF_INPUT_MASK			(3 << 13)
# define PLL_LOAD_PULSE_PHASE_SHIFT		9
# define PLL_LOAD_PULSE_PHASE_MASK	(0xf << PLL_LOAD_PULSE_PHASE_SHIFT)
# define DISPLAY_RATE_SELECT_FPA1	(1 << 8)
# define SDVO_MULTIPLIER_MASK			0x000000ff
# define SDVO_MULTIPLIER_SHIFT_HIRES		4
# define SDVO_MULTIPLIER_SHIFT_VGA		0
#define DPLL_A_MD		0x0601c
#define DPLL_B_MD		0x06020
# define DPLL_MD_UDI_DIVIDER_MASK		0x3f000000
# define DPLL_MD_UDI_DIVIDER_SHIFT		24
# define DPLL_MD_VGA_UDI_DIVIDER_MASK		0x003f0000
# define DPLL_MD_VGA_UDI_DIVIDER_SHIFT		16
# define DPLL_MD_UDI_MULTIPLIER_MASK		0x00003f00
# define DPLL_MD_UDI_MULTIPLIER_SHIFT		8
# define DPLL_MD_VGA_UDI_MULTIPLIER_MASK	0x0000003f
# define DPLL_MD_VGA_UDI_MULTIPLIER_SHIFT	0
#define DPLL_TEST		0x606c
# define DPLLB_TEST_SDVO_DIV_1			(0 << 22)
# define DPLLB_TEST_SDVO_DIV_2			(1 << 22)
# define DPLLB_TEST_SDVO_DIV_4			(2 << 22)
# define DPLLB_TEST_SDVO_DIV_MASK		(3 << 22)
# define DPLLB_TEST_N_BYPASS			(1 << 19)
# define DPLLB_TEST_M_BYPASS			(1 << 18)
# define DPLLB_INPUT_BUFFER_ENABLE		(1 << 16)
# define DPLLA_TEST_N_BYPASS			(1 << 3)
# define DPLLA_TEST_M_BYPASS			(1 << 2)
# define DPLLA_INPUT_BUFFER_ENABLE		(1 << 0)
#define ADPA			0x61100
#define ADPA_DAC_ENABLE 	(1<<31)
#define ADPA_DAC_DISABLE	0
#define ADPA_PIPE_SELECT_MASK	(1<<30)
#define ADPA_PIPE_A_SELECT	0
#define ADPA_PIPE_B_SELECT	(1<<30)
#define ADPA_USE_VGA_HVPOLARITY (1<<15)
#define ADPA_SETS_HVPOLARITY	0
#define ADPA_VSYNC_CNTL_DISABLE (1<<11)
#define ADPA_VSYNC_CNTL_ENABLE	0
#define ADPA_HSYNC_CNTL_DISABLE (1<<10)
#define ADPA_HSYNC_CNTL_ENABLE	0
#define ADPA_VSYNC_ACTIVE_HIGH	(1<<4)
#define ADPA_VSYNC_ACTIVE_LOW	0
#define ADPA_HSYNC_ACTIVE_HIGH	(1<<3)
#define ADPA_HSYNC_ACTIVE_LOW	0
#define FPA0		0x06040
#define FPA1		0x06044
#define FPB0		0x06048
#define FPB1		0x0604c
# define FP_N_DIV_MASK				0x003f0000
# define FP_N_DIV_SHIFT				16
# define FP_M1_DIV_MASK				0x00003f00
# define FP_M1_DIV_SHIFT			8
# define FP_M2_DIV_MASK				0x0000003f
# define FP_M2_DIV_SHIFT			0
#define PORT_HOTPLUG_EN		0x61110
# define SDVOB_HOTPLUG_INT_EN			(1 << 26)
# define SDVOC_HOTPLUG_INT_EN			(1 << 25)
# define TV_HOTPLUG_INT_EN			(1 << 18)
# define CRT_HOTPLUG_INT_EN			(1 << 9)
# define CRT_HOTPLUG_FORCE_DETECT		(1 << 3)
#define PORT_HOTPLUG_STAT	0x61114
# define CRT_HOTPLUG_INT_STATUS			(1 << 11)
# define TV_HOTPLUG_INT_STATUS			(1 << 10)
# define CRT_HOTPLUG_MONITOR_MASK		(3 << 8)
# define CRT_HOTPLUG_MONITOR_COLOR		(3 << 8)
# define CRT_HOTPLUG_MONITOR_MONO		(2 << 8)
# define CRT_HOTPLUG_MONITOR_NONE		(0 << 8)
# define SDVOC_HOTPLUG_INT_STATUS		(1 << 7)
# define SDVOB_HOTPLUG_INT_STATUS		(1 << 6)
#define SDVOB			0x61140
#define SDVOC			0x61160
#define SDVO_ENABLE				(1 << 31)
#define SDVO_PIPE_B_SELECT			(1 << 30)
#define SDVO_STALL_SELECT			(1 << 29)
#define SDVO_INTERRUPT_ENABLE			(1 << 26)
#define SDVO_PORT_MULTIPLY_MASK			(7 << 23)
#define SDVO_PORT_MULTIPLY_SHIFT		23
#define SDVO_PHASE_SELECT_MASK			(15 << 19)
#define SDVO_PHASE_SELECT_DEFAULT		(6 << 19)
#define SDVO_CLOCK_OUTPUT_INVERT		(1 << 18)
#define SDVOC_GANG_MODE				(1 << 16)
#define SDVO_BORDER_ENABLE			(1 << 7)
#define SDVOB_PCIE_CONCURRENCY			(1 << 3)
#define SDVO_DETECTED				(1 << 2)
#define SDVOB_PRESERVE_MASK		((1 << 17) | (1 << 16) | (1 << 14))
#define SDVOC_PRESERVE_MASK			(1 << 17)
#define LVDS			0x61180
# define LVDS_PORT_EN			(1 << 31)
# define LVDS_PIPEB_SELECT		(1 << 30)
# define LVDS_BORDER_EN                 (1 << 15)
# define LVDS_A0A2_CLKA_POWER_MASK	(3 << 8)
# define LVDS_A0A2_CLKA_POWER_DOWN	(0 << 8)
# define LVDS_A0A2_CLKA_POWER_UP	(3 << 8)
# define LVDS_A3_POWER_MASK		(3 << 6)
# define LVDS_A3_POWER_DOWN		(0 << 6)
# define LVDS_A3_POWER_UP		(3 << 6)
# define LVDS_CLKB_POWER_MASK		(3 << 4)
# define LVDS_CLKB_POWER_DOWN		(0 << 4)
# define LVDS_CLKB_POWER_UP		(3 << 4)
# define LVDS_B0B3_POWER_MASK		(3 << 2)
# define LVDS_B0B3_POWER_DOWN		(0 << 2)
# define LVDS_B0B3_POWER_UP		(3 << 2)
#define PIPEACONF 0x70008
#define PIPEACONF_ENABLE	(1<<31)
#define PIPEACONF_DISABLE	0
#define PIPEACONF_DOUBLE_WIDE	(1<<30)
#define PIPECONF_ACTIVE		(1<<30)
#define I965_PIPECONF_ACTIVE	(1<<30)
#define PIPECONF_DSIPLL_LOCK	(1<<29)
#define PIPEACONF_SINGLE_WIDE	0
#define PIPEACONF_PIPE_UNLOCKED 0
#define PIPEACONF_DSR		(1<<26)
#define PIPEACONF_PIPE_LOCKED	(1<<25)
#define PIPEACONF_PALETTE	0
#define PIPECONF_FORCE_BORDER	(1<<25)
#define PIPEACONF_GAMMA 	(1<<24)
#define PIPECONF_PROGRESSIVE	(0 << 21)
#define PIPECONF_INTERLACE_W_FIELD_INDICATION	(6 << 21)
#define PIPECONF_INTERLACE_FIELD_0_ONLY		(7 << 21)
#define PIPECONF_PLANE_OFF 	(1<<19)
#define PIPECONF_CURSOR_OFF 	(1<<18)
#define PIPEBCONF 0x71008
#define PIPEBCONF_ENABLE	(1<<31)
#define PIPEBCONF_DISABLE	0
#define PIPEBCONF_DOUBLE_WIDE	(1<<30)
#define PIPEBCONF_DISABLE	0
#define PIPEBCONF_GAMMA 	(1<<24)
#define PIPEBCONF_PALETTE	0
#define PIPECCONF 0x72008
#define PIPEBGCMAXRED		0x71010
#define PIPEBGCMAXGREEN		0x71014
#define PIPEBGCMAXBLUE		0x71018
#define PIPEASTAT               0x70024
#define PIPEBSTAT		0x71024
#define PIPECSTAT		0x72024
#define PIPE_VBLANK_INTERRUPT_STATUS         (1UL<<1)
#define PIPE_START_VBLANK_INTERRUPT_STATUS   (1UL<<2)
#define PIPE_VBLANK_CLEAR                    (1 << 1)
#define PIPE_VBLANK_STATUS                   (1 << 1)
#define PIPE_TE_STATUS		             (1UL<<6)
#define PIPE_DPST_EVENT_STATUS		     (1UL<<7)
#define PIPE_VSYNC_CLEAR                     (1UL<<9)
#define PIPE_VSYNC_STATUS                    (1UL<<9)
#define PIPE_HDMI_AUDIO_UNDERRUN_STATUS      (1UL<<10)
#define PIPE_HDMI_AUDIO_BUFFER_DONE_STATUS   (1UL<<11)
#define PIPE_VBLANK_INTERRUPT_ENABLE         (1UL<<17)
#define PIPE_START_VBLANK_INTERRUPT_ENABLE   (1UL<<18)
#define PIPE_TE_ENABLE		             (1UL<<22)
#define PIPE_DPST_EVENT_ENABLE               (1UL<<23)
#define PIPE_VSYNC_ENABL                     (1UL<<25)
#define PIPE_HDMI_AUDIO_UNDERRUN             (1UL<<26)
#define PIPE_HDMI_AUDIO_BUFFER_DONE          (1UL<<27)
#define PIPE_HDMI_AUDIO_INT_MASK (PIPE_HDMI_AUDIO_UNDERRUN | PIPE_HDMI_AUDIO_BUFFER_DONE)
#define PIPE_EVENT_MASK ((1 << 29)|(1 << 28)|(1 << 27)|(1 << 26)|(1 << 24)|(1 << 23)|(1 << 22)|(1 << 21)|(1 << 20)|(1 << 16))
#define PIPE_VBLANK_MASK ((1 << 25)|(1 << 24)|(1 << 18)|(1 << 17))
#define HISTOGRAM_INT_CONTROL		0x61268
#define HISTOGRAM_BIN_DATA		0X61264
#define HISTOGRAM_LOGIC_CONTROL		0x61260
#define PWM_CONTROL_LOGIC		0x61250
#define PIPE_HOTPLUG_INTERRUPT_STATUS	(1UL<<10)
#define HISTOGRAM_INTERRUPT_ENABLE	(1UL<<31)
#define HISTOGRAM_LOGIC_ENABLE		(1UL<<31)
#define PWM_LOGIC_ENABLE		(1UL<<31)
#define PWM_PHASEIN_ENABLE		(1UL<<25)
#define PWM_PHASEIN_INT_ENABLE		(1UL<<24)
#define PWM_PHASEIN_VB_COUNT		0x00001f00
#define PWM_PHASEIN_INC			0x0000001f
#define HISTOGRAM_INT_CTRL_CLEAR	(1UL<<30)
#define DPST_YUV_LUMA_MODE		0
struct dpst_ie_histogram_control ;
struct dpst_guardband ;
#define PIPEAFRAMEHIGH		0x70040
#define PIPEAFRAMEPIXEL		0x70044
#define PIPEBFRAMEHIGH		0x71040
#define PIPEBFRAMEPIXEL		0x71044
#define PIPECFRAMEHIGH		0x72040
#define PIPECFRAMEPIXEL		0x72044
#define PIPE_FRAME_HIGH_MASK    0x0000ffff
#define PIPE_FRAME_HIGH_SHIFT   0
#define PIPE_FRAME_LOW_MASK     0xff000000
#define PIPE_FRAME_LOW_SHIFT    24
#define PIPE_PIXEL_MASK         0x00ffffff
#define PIPE_PIXEL_SHIFT        0
#define DSPARB			0x70030
#define DSPFW1			0x70034
#define DSPFW2			0x70038
#define DSPFW3			0x7003c
#define DSPFW4			0x70050
#define DSPFW5			0x70054
#define DSPFW6			0x70058
#define DSPCHICKENBIT		0x70400
#define DSPACNTR		0x70180
#define DSPBCNTR		0x71180
#define DSPCCNTR		0x72180
#define DISPLAY_PLANE_ENABLE 			(1<<31)
#define DISPLAY_PLANE_DISABLE			0
#define DISPPLANE_GAMMA_ENABLE			(1<<30)
#define DISPPLANE_GAMMA_DISABLE			0
#define DISPPLANE_PIXFORMAT_MASK		(0xf<<26)
#define DISPPLANE_8BPP				(0x2<<26)
#define DISPPLANE_15_16BPP			(0x4<<26)
#define DISPPLANE_16BPP				(0x5<<26)
#define DISPPLANE_32BPP_NO_ALPHA 		(0x6<<26)
#define DISPPLANE_32BPP				(0x7<<26)
#define DISPPLANE_STEREO_ENABLE			(1<<25)
#define DISPPLANE_STEREO_DISABLE		0
#define DISPPLANE_SEL_PIPE_MASK			(1<<24)
#define DISPPLANE_SEL_PIPE_POS			24
#define DISPPLANE_SEL_PIPE_A			0
#define DISPPLANE_SEL_PIPE_B			(1<<24)
#define DISPPLANE_SRC_KEY_ENABLE		(1<<22)
#define DISPPLANE_SRC_KEY_DISABLE		0
#define DISPPLANE_LINE_DOUBLE			(1<<20)
#define DISPPLANE_NO_LINE_DOUBLE		0
#define DISPPLANE_STEREO_POLARITY_FIRST		0
#define DISPPLANE_STEREO_POLARITY_SECOND	(1<<18)
#define DISPPLANE_ALPHA_TRANS_ENABLE		(1<<15)
#define DISPPLANE_ALPHA_TRANS_DISABLE		0
#define DISPPLANE_SPRITE_ABOVE_DISPLAYA		0
#define DISPPLANE_SPRITE_ABOVE_OVERLAY		(1)
#define DISPPLANE_BOTTOM			(4)
#define DSPABASE		0x70184
#define DSPALINOFF		0x70184
#define DSPASTRIDE		0x70188
#define DSPBBASE		0x71184
#define DSPBLINOFF		0X71184
#define DSPBADDR		DSPBBASE
#define DSPBSTRIDE		0x71188
#define DSPCBASE		0x72184
#define DSPCLINOFF		0x72184
#define DSPCSTRIDE		0x72188
#define DSPAKEYVAL		0x70194
#define DSPAKEYMASK		0x70198
#define DSPAPOS			0x7018C
#define DSPASIZE		0x70190
#define DSPBPOS			0x7118C
#define DSPBSIZE		0x71190
#define DSPCPOS			0x7218C
#define DSPCSIZE		0x72190
#define DSPASURF		0x7019C
#define DSPATILEOFF		0x701A4
#define DSPBSURF		0x7119C
#define DSPBTILEOFF		0x711A4
#define DSPCSURF		0x7219C
#define DSPCTILEOFF		0x721A4
#define DSPCKEYMAXVAL 		0x721A0
#define DSPCKEYMINVAL 		0x72194
#define DSPCKEYMSK 		0x72198
#define VGACNTRL		0x71400
# define VGA_DISP_DISABLE			(1 << 31)
# define VGA_2X_MODE				(1 << 30)
# define VGA_PIPE_B_SELECT			(1 << 29)
#define OV_C_OFFSET		0x08000
#define OV_OVADD		0x30000
#define OV_DOVASTA              0x30008
# define OV_PIPE_SELECT				((1 << 6)|(1 << 7))
# define OV_PIPE_SELECT_POS			6
# define OV_PIPE_A				0
# define OV_PIPE_C				1
#define OV_OGAMC5		0x30010
#define OV_OGAMC4		0x30014
#define OV_OGAMC3		0x30018
#define OV_OGAMC2		0x3001C
#define OV_OGAMC1		0x30020
#define OV_OGAMC0		0x30024
#define OVC_OVADD		0x38000
#define OVC_DOVCSTA             0x38008
#define OVC_OGAMC5		0x38010
#define OVC_OGAMC4		0x38014
#define OVC_OGAMC3		0x38018
#define OVC_OGAMC2		0x3801C
#define OVC_OGAMC1		0x38020
#define OVC_OGAMC0		0x38024
#define SWF0			0x71410
#define SWF1			0x71414
#define SWF2			0x71418
#define SWF3			0x7141c
#define SWF4			0x71420
#define SWF5			0x71424
#define SWF6			0x71428
#define SWF00			0x70410
#define SWF01			0x70414
#define SWF02			0x70418
#define SWF03			0x7041c
#define SWF04			0x70420
#define SWF05			0x70424
#define SWF06			0x70428
#define SWF10			SWF0
#define SWF11			SWF1
#define SWF12			SWF2
#define SWF13			SWF3
#define SWF14			SWF4
#define SWF15			SWF5
#define SWF16			SWF6
#define SWF30			0x72414
#define SWF31			0x72418
#define SWF32			0x7241c
#define PALETTE_A		0x0a000
#define PALETTE_B		0x0a800
#define PALETTE_C		0x0ac00
#define CURACNTR		0x70080
#define   CURSOR_MODE_DISABLE   0x00
#define   CURSOR_MODE_64_32B_AX 0x07
#define   CURSOR_MODE_64_ARGB_AX ((1 << 5) | CURSOR_MODE_64_32B_AX)
#define   MCURSOR_GAMMA_ENABLE  (1 << 26)
#define CURABASE		0x70084
#define CURAPOS			0x70088
#define   CURSOR_POS_MASK       0x007FF
#define   CURSOR_POS_SIGN       0x8000
#define   CURSOR_X_SHIFT        0
#define   CURSOR_Y_SHIFT        16
#define CURBCNTR		0x700c0
#define CURBBASE		0x700c4
#define CURBPOS			0x700c8
#define CURCCNTR		0x700e0
#define CURCBASE		0x700e4
#define CURCPOS			0x700e8
#define IER 0x020a0
#define IIR 0x020a4
#define IMR 0x020a8
#define ISR 0x020ac
#define MRST_DPLL_A		0x0f014
#define MDFLD_DPLL_B		0x0f018
#define MDFLD_INPUT_REF_SEL	(1 << 14)
#define MDFLD_VCO_SEL		(1 << 16)
#define DPLLA_MODE_LVDS		(2 << 26)
#define MDFLD_PLL_LATCHEN	(1 << 28)
#define MDFLD_PWR_GATE_EN	(1 << 30)
#define MDFLD_P1_MASK		(0x1FF << 17)
#define MRST_FPA0		0x0f040
#define MRST_FPA1		0x0f044
#define MDFLD_DPLL_DIV0		0x0f048
#define MDFLD_DPLL_DIV1		0x0f04c
#define MRST_PERF_MODE		0x020f4
#define HDMIPHYMISCCTL   	0x61134
# define HDMI_PHY_POWER_DOWN	0x7f
#define HDMIB_CONTROL   	0x61140
# define HDMIB_PORT_EN			(1 << 31)
# define HDMIB_PIPE_B_SELECT		(1 << 30)
# define HDMIB_NULL_PACKET		(1 << 9)
#define HDMIB_HDCP_PORT (1 << 5)
# define MRST_PANEL_8TO6_DITHER_ENABLE		(1 << 25)
# define MRST_PANEL_24_DOT_1_FORMAT		(1 << 24)
# define LVDS_A3_POWER_UP_0_OUTPUT		(1 << 6)
#define MIPI			0x61190
#define MIPI_C			0x62190
# define MIPI_PORT_EN			(1 << 31)
# define SEL_FLOPPED_HSTX		(1 << 23)
# define PASS_FROM_SPHY_TO_AFE 		(1 << 16)
# define MIPI_BORDER_EN			(1 << 15)
# define MIPIA_3LANE_MIPIC_1LANE	0x1
# define MIPIA_2LANE_MIPIC_2LANE	0x2
# define TE_TRIGGER_DSI_PROTOCOL	(1 << 2)
# define TE_TRIGGER_GPIO_PIN		(1 << 3)
#define MIPI_TE_COUNT			0x61194
# define POWER_DOWN_ON_RESET		(1 << 1)
# define PFIT_PIPE_SELECT				(3 << 29)
# define PFIT_PIPE_SELECT_SHIFT			(29)
#define MRST_BACKLIGHT_MODULATION_FREQ_SHIFT		(16)
#define MRST_BACKLIGHT_MODULATION_FREQ_MASK		(0xffff << 16)
#define PIPEACONF_PIPE_STATE	(1<<30)
#define MRST_DSPABASE		0x7019c
#define MRST_DSPBBASE		0x7119c
#define MDFLD_DSPCBASE		0x7219c
#define MIPIC_REG_OFFSET             0x800
#define DEVICE_READY_REG             0xb000
#define LP_OUTPUT_HOLD               (1 << 16)
#define EXIT_ULPS_DEV_READY          0x3
#define LP_OUTPUT_HOLD_RELEASE       0x810000
# define ENTERING_ULPS		(2 << 1)
# define EXITING_ULPS		(1 << 1)
# define ULPS_MASK		(3 << 1)
# define BUS_POSSESSION		(1 << 3)
#define INTR_STAT_REG                0xb004
#define RX_SOT_ERROR (1 << 0)
#define RX_SOT_SYNC_ERROR (1 << 1)
#define RX_ESCAPE_MODE_ENTRY_ERROR (1 << 3)
#define RX_LP_TX_SYNC_ERROR (1 << 4)
#define RX_HS_RECEIVE_TIMEOUT_ERROR (1 << 5)
#define RX_FALSE_CONTROL_ERROR (1 << 6)
#define RX_ECC_SINGLE_BIT_ERROR (1 << 7)
#define RX_ECC_MULTI_BIT_ERROR (1 << 8)
#define RX_CHECKSUM_ERROR (1 << 9)
#define RX_DSI_DATA_TYPE_NOT_RECOGNIZED (1 << 10)
#define RX_DSI_VC_ID_INVALID (1 << 11)
#define TX_FALSE_CONTROL_ERROR (1 << 12)
#define TX_ECC_SINGLE_BIT_ERROR (1 << 13)
#define TX_ECC_MULTI_BIT_ERROR (1 << 14)
#define TX_CHECKSUM_ERROR (1 << 15)
#define TX_DSI_DATA_TYPE_NOT_RECOGNIZED (1 << 16)
#define TX_DSI_VC_ID_INVALID (1 << 17)
#define HIGH_CONTENTION (1 << 18)
#define LOW_CONTENTION (1 << 19)
#define DPI_FIFO_UNDER_RUN (1 << 20)
#define HS_TX_TIMEOUT (1 << 21)
#define LP_RX_TIMEOUT (1 << 22)
#define TURN_AROUND_ACK_TIMEOUT (1 << 23)
#define ACK_WITH_NO_ERROR (1 << 24)
#define HS_GENERIC_WR_FIFO_FULL (1 << 27)
#define LP_GENERIC_WR_FIFO_FULL (1 << 28)
#define SPL_PKT_SENT			(1 << 30)
#define INTR_EN_REG                  0xb008
#define DSI_FUNC_PRG_REG             0xb00c
#define DPI_CHANNEL_NUMBER_POS   0x03
#define DBI_CHANNEL_NUMBER_POS   0x05
#define FMT_DPI_POS              0x07
#define FMT_DBI_POS              0x0A
#define DBI_DATA_WIDTH_POS       0x0D
#define RGB_565_FMT		     0x01
#define RGB_666_FMT		     0x02
#define LRGB_666_FMT		     0x03
#define RGB_888_FMT		     0x04
#define VIRTUAL_CHANNEL_NUMBER_0	0x00
#define VIRTUAL_CHANNEL_NUMBER_1	0x01
#define VIRTUAL_CHANNEL_NUMBER_2	0x02
#define VIRTUAL_CHANNEL_NUMBER_3	0x03
#define DBI_NOT_SUPPORTED		0x00
#define DBI_DATA_WIDTH_16BIT		0x01
#define DBI_DATA_WIDTH_9BIT			0x02
#define DBI_DATA_WIDTH_8BIT			0x03
#define DBI_DATA_WIDTH_OPT1		0x04
#define DBI_DATA_WIDTH_OPT2		0x05
#define HS_TX_TIMEOUT_REG            0xb010
#define LP_RX_TIMEOUT_REG            0xb014
#define TURN_AROUND_TIMEOUT_REG      0xb018
#define DEVICE_RESET_REG             0xb01C
#define DPI_RESOLUTION_REG           0xb020
#define RES_V_POS                0x10
#define DBI_RESOLUTION_REG           0xb024
#define HORIZ_SYNC_PAD_COUNT_REG     0xb028
#define HORIZ_BACK_PORCH_COUNT_REG   0xb02C
#define HORIZ_FRONT_PORCH_COUNT_REG  0xb030
#define HORIZ_ACTIVE_AREA_COUNT_REG  0xb034
#define VERT_SYNC_PAD_COUNT_REG      0xb038
#define VERT_BACK_PORCH_COUNT_REG    0xb03c
#define VERT_FRONT_PORCH_COUNT_REG   0xb040
#define HIGH_LOW_SWITCH_COUNT_REG    0xb044
#define DPI_CONTROL_REG              0xb048
#define DPI_SHUT_DOWN            (1 << 0)
#define DPI_TURN_ON              (1 << 1)
#define DPI_COLOR_MODE_ON        (1 << 2)
#define DPI_COLOR_MODE_OFF       (1 << 3)
#define DPI_BACK_LIGHT_ON        (1 << 4)
#define DPI_BACK_LIGHT_OFF       (1 << 5)
#define DPI_LP                   (1 << 6)
#define DPI_DATA_REG                 0xb04c
#define DPI_BACK_LIGHT_ON_DATA   0x07
#define DPI_BACK_LIGHT_OFF_DATA  0x17
#define INIT_COUNT_REG               0xb050
#define MAX_RET_PAK_REG              0xb054
#define VIDEO_FMT_REG                0xb058
#define COMPLETE_LAST_PCKT       (1 << 2)
#define EOT_DISABLE_REG              0xb05c
#define ENABLE_CLOCK_STOPPING    (1 << 1)
#define LP_BYTECLK_REG               0xb060
#define LP_GEN_DATA_REG              0xb064
#define HS_GEN_DATA_REG              0xb068
#define LP_GEN_CTRL_REG              0xb06C
#define HS_GEN_CTRL_REG              0xb070
#define DCS_CHANNEL_NUMBER_POS   0x06
#define MCS_COMMANDS_POS	0x8
#define WORD_COUNTS_POS		0x8
#define MCS_PARAMETER_POS	0x10
#define GEN_FIFO_STAT_REG            0xb074
#define HS_DATA_FIFO_FULL        (1 << 0)
#define HS_DATA_FIFO_HALF_EMPTY  (1 << 1)
#define HS_DATA_FIFO_EMPTY       (1 << 2)
#define LP_DATA_FIFO_FULL        (1 << 8)
#define LP_DATA_FIFO_HALF_EMPTY  (1 << 9)
#define LP_DATA_FIFO_EMPTY       (1 << 10)
#define HS_CTRL_FIFO_FULL        (1 << 16)
#define HS_CTRL_FIFO_HALF_EMPTY  (1 << 17)
#define HS_CTRL_FIFO_EMPTY       (1 << 18)
#define LP_CTRL_FIFO_FULL        (1 << 24)
#define LP_CTRL_FIFO_HALF_EMPTY  (1 << 25)
#define LP_CTRL_FIFO_EMPTY       (1 << 26)
#define DBI_FIFO_EMPTY           (1 << 27)
#define DPI_FIFO_EMPTY           (1 << 28)
#define HS_LS_DBI_ENABLE_REG         0xb078
#define TXCLKESC_REG		     0xb07c
#define DPHY_PARAM_REG               0xb080
#define DBI_BW_CTRL_REG              0xb084
#define CLK_LANE_SWT_REG             0xb088
#define MIPI_CONTROL_REG             0xb104
#define MIPI_2X_CLOCK_BITS       ((1 << 0) | (1 << 1))
#define MIPI_DATA_ADDRESS_REG        0xb108
#define MIPI_DATA_LENGTH_REG         0xb10C
#define MIPI_COMMAND_ADDRESS_REG     0xb110
#define MIPI_COMMAND_LENGTH_REG      0xb114
#define MIPI_READ_DATA_RETURN_REG0   0xb118
#define MIPI_READ_DATA_RETURN_REG1   0xb11C
#define MIPI_READ_DATA_RETURN_REG2   0xb120
#define MIPI_READ_DATA_RETURN_REG3   0xb124
#define MIPI_READ_DATA_RETURN_REG4   0xb128
#define MIPI_READ_DATA_RETURN_REG5   0xb12C
#define MIPI_READ_DATA_RETURN_REG6   0xb130
#define MIPI_READ_DATA_RETURN_REG7   0xb134
#define MIPI_READ_DATA_VALID_REG     0xb138
#define soft_reset                   0x01
#define get_power_mode               0x0a
#define get_address_mode             0x0b
#define get_pixel_format             0x0c
#define get_display_mode             0x0d
#define get_signal_mode              0x0e
#define get_diagnostic_result        0x0f
#define enter_sleep_mode             0x10
#define exit_sleep_mode              0x11
#define enter_partial_mode           0x12
#define enter_normal_mode            0x13
#define exit_invert_mode             0x20
#define enter_invert_mode            0x21
#define set_gamma_curve              0x26
#define set_display_off              0x28
#define set_display_on               0x29
#define set_column_address           0x2a
#define set_page_addr             0x2b
#define write_mem_start              0x2c
#define set_partial_area             0x30
#define set_scroll_area              0x33
#define set_tear_off                 0x34
#define set_tear_on                  0x35
#define set_address_mode             0x36
#define set_scroll_start             0x37
#define exit_idle_mode               0x38
#define enter_idle_mode              0x39
#define set_pixel_format             0x3a
#define DCS_PIXEL_FORMAT_3bbp	 	0x1
#define DCS_PIXEL_FORMAT_8bbp 	0x2
#define DCS_PIXEL_FORMAT_12bbp 	0x3
#define DCS_PIXEL_FORMAT_16bbp	0x5
#define DCS_PIXEL_FORMAT_18bbp	0x6
#define DCS_PIXEL_FORMAT_24bbp 	0x7
#define write_mem_cont               0x3c
#define set_tear_scanline            0x44
#define get_scanline                 0x45
#define GEN_SHORT_WRITE_0	0x03
#define GEN_SHORT_WRITE_1	0x13
#define GEN_SHORT_WRITE_2	0x23
#define GEN_READ_0		0x04
#define GEN_READ_1		0x14
#define GEN_READ_2		0x24
#define GEN_LONG_WRITE		0x29
#define MCS_SHORT_WRITE_0	0x05
#define MCS_SHORT_WRITE_1	0x15
#define MCS_READ		0x06
#define MCS_LONG_WRITE		0x39
#define write_display_profile		0x50
#define write_display_brightness	0x51
#define write_ctrl_display		0x53
#define write_ctrl_cabc			0x55
#define UI_IMAGE		0x01
#define STILL_IMAGE		0x02
#define MOVING_IMAGE		0x03
#define write_hysteresis		0x57
#define write_gamma_setting		0x58
#define write_cabc_min_bright		0x5e
#define write_kbbc_profile		0x60
#define tmd_write_display_brightness 0x8c
#define BRIGHT_CNTL_BLOCK_ON	(1 << 5)
#define AMBIENT_LIGHT_SENSE_ON	(1 << 4)
#define DISPLAY_DIMMING_ON	(1 << 3)
#define BACKLIGHT_ON		(1 << 2)
#define DISPLAY_BRIGHTNESS_AUTO	(1 << 1)
#define GAMMA_AUTO		(1 << 0)
#define DCS_PIXEL_FORMAT_3BPP         0x1
#define DCS_PIXEL_FORMAT_8BPP         0x2
#define DCS_PIXEL_FORMAT_12BPP        0x3
#define DCS_PIXEL_FORMAT_16BPP        0x5
#define DCS_PIXEL_FORMAT_18BPP        0x6
#define DCS_PIXEL_FORMAT_24BPP        0x7
#define addr_mode_data           0xfc
#define diag_res_data            0x00
#define disp_mode_data           0x23
#define pxl_fmt_data             0x77
#define pwr_mode_data            0x74
#define sig_mode_data            0x00
#define scanline_data1           0xff
#define scanline_data2           0xff
#define NON_BURST_MODE_SYNC_PULSE	0x01
#define NON_BURST_MODE_SYNC_EVENTS	0x02
#define BURST_MODE			0x03
#define DBI_COMMAND_BUFFER_SIZE		0x240
#define DBI_DATA_BUFFER_SIZE		0x120
#define DBI_CB_TIME_OUT 0xFFFF
#define GEN_FB_TIME_OUT 2000
#define ALIGNMENT_32BYTE_MASK		(~((1 << 0)|(1 << 1)|(1 << 2)|(1 << 3)|(1 << 4)))
#define SKU_83 						0x01
#define SKU_100 					0x02
#define SKU_100L 					0x04
#define SKU_BYPASS 					0x08
