#define AD714X_PWR_CTRL           0x0
#define AD714X_STG_CAL_EN_REG     0x1
#define AD714X_AMB_COMP_CTRL0_REG 0x2
#define AD714X_PARTID_REG         0x17
#define AD7142_PARTID             0xE620
#define AD7143_PARTID             0xE630
#define AD7147_PARTID             0x1470
#define AD7148_PARTID             0x1480
#define AD714X_STAGECFG_REG       0x80
#define AD714X_SYSCFG_REG         0x0
#define STG_LOW_INT_EN_REG     0x5
#define STG_HIGH_INT_EN_REG    0x6
#define STG_COM_INT_EN_REG     0x7
#define STG_LOW_INT_STA_REG    0x8
#define STG_HIGH_INT_STA_REG   0x9
#define STG_COM_INT_STA_REG    0xA
#define CDC_RESULT_S0          0xB
#define CDC_RESULT_S1          0xC
#define CDC_RESULT_S2          0xD
#define CDC_RESULT_S3          0xE
#define CDC_RESULT_S4          0xF
#define CDC_RESULT_S5          0x10
#define CDC_RESULT_S6          0x11
#define CDC_RESULT_S7          0x12
#define CDC_RESULT_S8          0x13
#define CDC_RESULT_S9          0x14
#define CDC_RESULT_S10         0x15
#define CDC_RESULT_S11         0x16
#define STAGE0_AMBIENT		0xF1
#define STAGE1_AMBIENT		0x115
#define STAGE2_AMBIENT		0x139
#define STAGE3_AMBIENT		0x15D
#define STAGE4_AMBIENT		0x181
#define STAGE5_AMBIENT		0x1A5
#define STAGE6_AMBIENT		0x1C9
#define STAGE7_AMBIENT		0x1ED
#define STAGE8_AMBIENT		0x211
#define STAGE9_AMBIENT		0x234
#define STAGE10_AMBIENT		0x259
#define STAGE11_AMBIENT		0x27D
#define PER_STAGE_REG_NUM      36
#define STAGE_NUM              12
#define STAGE_CFGREG_NUM       8
#define SYS_CFGREG_NUM         8
enum ad714x_device_state ;
struct ad714x_slider_drv ;
struct ad714x_wheel_drv ;
struct ad714x_touchpad_drv ;
struct ad714x_button_drv ;
struct ad714x_driver_data ;
struct ad714x_chip ;
static void ad714x_use_com_int(struct ad714x_chip *ad714x,
int start_stage, int end_stage)
static void ad714x_use_thr_int(struct ad714x_chip *ad714x,
int start_stage, int end_stage)
static int ad714x_cal_highest_stage(struct ad714x_chip *ad714x,
int start_stage, int end_stage)
static int ad714x_cal_abs_pos(struct ad714x_chip *ad714x,
int start_stage, int end_stage,
int highest_stage, int max_coord)
static void ad714x_button_state_machine(struct ad714x_chip *ad714x, int idx)
static void ad714x_slider_cal_sensor_val(struct ad714x_chip *ad714x, int idx)
static void ad714x_slider_cal_highest_stage(struct ad714x_chip *ad714x, int idx)
static void ad714x_slider_cal_abs_pos(struct ad714x_chip *ad714x, int idx)
static void ad714x_slider_cal_flt_pos(struct ad714x_chip *ad714x, int idx)
static void ad714x_slider_use_com_int(struct ad714x_chip *ad714x, int idx)
static void ad714x_slider_use_thr_int(struct ad714x_chip *ad714x, int idx)
static void ad714x_slider_state_machine(struct ad714x_chip *ad714x, int idx)
static void ad714x_wheel_cal_highest_stage(struct ad714x_chip *ad714x, int idx)
static void ad714x_wheel_cal_sensor_val(struct ad714x_chip *ad714x, int idx)
static void ad714x_wheel_cal_abs_pos(struct ad714x_chip *ad714x, int idx)
static void ad714x_wheel_cal_flt_pos(struct ad714x_chip *ad714x, int idx)
static void ad714x_wheel_use_com_int(struct ad714x_chip *ad714x, int idx)
static void ad714x_wheel_use_thr_int(struct ad714x_chip *ad714x, int idx)
static void ad714x_wheel_state_machine(struct ad714x_chip *ad714x, int idx)
static void touchpad_cal_sensor_val(struct ad714x_chip *ad714x, int idx)
static void touchpad_cal_highest_stage(struct ad714x_chip *ad714x, int idx)
static int touchpad_check_second_peak(struct ad714x_chip *ad714x, int idx)
static void touchpad_cal_abs_pos(struct ad714x_chip *ad714x, int idx)
static void touchpad_cal_flt_pos(struct ad714x_chip *ad714x, int idx)
#define LEFT_END_POINT_DETECTION_LEVEL                  550
#define RIGHT_END_POINT_DETECTION_LEVEL                 750
#define LEFT_RIGHT_END_POINT_DEAVTIVALION_LEVEL         850
#define TOP_END_POINT_DETECTION_LEVEL                   550
#define BOTTOM_END_POINT_DETECTION_LEVEL                950
#define TOP_BOTTOM_END_POINT_DEAVTIVALION_LEVEL         700
static int touchpad_check_endpoint(struct ad714x_chip *ad714x, int idx)
static void touchpad_use_com_int(struct ad714x_chip *ad714x, int idx)
static void touchpad_use_thr_int(struct ad714x_chip *ad714x, int idx)
static void ad714x_touchpad_state_machine(struct ad714x_chip *ad714x, int idx)
static int ad714x_hw_detect(struct ad714x_chip *ad714x)
static void ad714x_hw_init(struct ad714x_chip *ad714x)
static irqreturn_t ad714x_interrupt_thread(int irq, void *data)
#define MAX_DEVICE_NUM 8
struct ad714x_chip *ad714x_probe(struct device *dev, u16 bus_type, int irq,
ad714x_read_t read, ad714x_write_t write)
EXPORT_SYMBOL(ad714x_probe);
void ad714x_remove(struct ad714x_chip *ad714x)
EXPORT_SYMBOL(ad714x_remove);
int ad714x_disable(struct ad714x_chip *ad714x)
EXPORT_SYMBOL(ad714x_disable);
int ad714x_enable(struct ad714x_chip *ad714x)
EXPORT_SYMBOL(ad714x_enable);
MODULE_DESCRIPTION("Analog Devices AD714X Capacitance Touch Sensor Driver");
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_LICENSE("GPL");
