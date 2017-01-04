#undef DISP_DEVICE_18BPP
#define DISP_DEVICE_16BPP
#define QCIF_WIDTH        176
#define QCIF_HEIGHT       220
static void *DISP_CMD_PORT;
static void *DISP_DATA_PORT;
#define DISP_CMD_DISON    0xaf
#define DISP_CMD_DISOFF   0xae
#define DISP_CMD_DISNOR   0xa6
#define DISP_CMD_DISINV   0xa7
#define DISP_CMD_DISCTL   0xca
#define DISP_CMD_GCP64    0xcb
#define DISP_CMD_GCP16    0xcc
#define DISP_CMD_GSSET    0xcd
#define DISP_GS_2       0x02
#define DISP_GS_16      0x01
#define DISP_GS_64      0x00
#define DISP_CMD_SLPIN    0x95
#define DISP_CMD_SLPOUT   0x94
#define DISP_CMD_SD_PSET  0x75
#define DISP_CMD_MD_PSET  0x76
#define DISP_CMD_SD_CSET  0x15
#define DISP_CMD_MD_CSET  0x16
#define DISP_CMD_DATCTL   0xbc
#define DISP_DATCTL_666 0x08
#define DISP_DATCTL_565 0x28
#define DISP_DATCTL_444 0x38
#define DISP_CMD_RAMWR    0x5c
#define DISP_CMD_RAMRD    0x5d
#define DISP_CMD_PTLIN    0xa8
#define DISP_CMD_PTLOUT   0xa9
#define DISP_CMD_ASCSET   0xaa
#define DISP_CMD_SCSTART  0xab
#define DISP_CMD_VOLCTL   0xc6
#define DISP_VOLCTL_TONE 0x80
#define DISP_CMD_NOp      0x25
#define DISP_CMD_OSSEL    0xd0
#define DISP_CMD_3500KSET 0xd1
#define DISP_CMD_3500KEND 0xd2
#define DISP_CMD_14MSET   0xd3
#define DISP_CMD_14MEND   0xd4
#define DISP_CMD_OUT(cmd) outpw(DISP_CMD_PORT, cmd);
#define DISP_DATA_OUT(data) outpw(DISP_DATA_PORT, data);
#define DISP_DATA_IN() inpw(DISP_DATA_PORT);
#define DISP_SET_RECT(ulhc_row, lrhc_row, ulhc_col, lrhc_col) \
DISP_CMD_OUT(DISP_CMD_SD_PSET) \
DISP_DATA_OUT((ulhc_row) & 0xFF) \
DISP_DATA_OUT((ulhc_row) >> 8) \
DISP_DATA_OUT((lrhc_row) & 0xFF) \
DISP_DATA_OUT((lrhc_row) >> 8) \
DISP_CMD_OUT(DISP_CMD_SD_CSET) \
DISP_DATA_OUT(((ulhc_col)+2) & 0xFF) \
DISP_DATA_OUT(((ulhc_col)+2) >> 8) \
DISP_DATA_OUT(((lrhc_col)+2) & 0xFF) \
DISP_DATA_OUT(((lrhc_col)+2) >> 8)
#define DISP_MIN_CONTRAST      0
#define DISP_MAX_CONTRAST      127
#define DISP_DEFAULT_CONTRAST  80
#define DISP_MIN_BACKLIGHT     0
#define DISP_MAX_BACKLIGHT     15
#define DISP_DEFAULT_BACKLIGHT 2
#define WAIT_SEC(sec) mdelay((sec)/1000)
static word disp_area_start_row;
static word disp_area_end_row;
static byte disp_contrast = DISP_DEFAULT_CONTRAST;
static boolean disp_powered_up;
static boolean disp_initialized = FALSE;
static boolean display_on = FALSE;
static void epsonQcif_disp_init(struct platform_device *pdev);
static void epsonQcif_disp_set_contrast(word contrast);
static void epsonQcif_disp_set_display_area(word start_row, word end_row);
static int epsonQcif_disp_off(struct platform_device *pdev);
static int epsonQcif_disp_on(struct platform_device *pdev);
static void epsonQcif_disp_set_rect(int x, int y, int xres, int yres);
volatile word databack;
static void epsonQcif_disp_init(struct platform_device *pdev)
static void epsonQcif_disp_set_rect(int x, int y, int xres, int yres)
static void epsonQcif_disp_set_display_area(word start_row, word end_row)
static int epsonQcif_disp_off(struct platform_device *pdev)
static int epsonQcif_disp_on(struct platform_device *pdev)
static void epsonQcif_disp_set_contrast(word contrast)
static void epsonQcif_disp_clear_screen_area(
word start_row, word end_row, word start_column, word end_column)
static int __init epsonQcif_probe(struct platform_device *pdev)
static struct platform_driver this_driver = ;
static struct msm_fb_panel_data epsonQcif_panel_data = ;
static struct platform_device this_device = ;
static int __init epsonQcif_init(void)
module_init(epsonQcif_init);
