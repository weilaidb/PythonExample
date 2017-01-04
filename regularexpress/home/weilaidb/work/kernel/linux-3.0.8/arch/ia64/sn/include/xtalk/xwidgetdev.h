#define _ASM_IA64_SN_XTALK_XWIDGET_H
#define WIDGET_REV_NUM                  0xf0000000
#define WIDGET_PART_NUM                 0x0ffff000
#define WIDGET_MFG_NUM                  0x00000ffe
#define WIDGET_REV_NUM_SHFT             28
#define WIDGET_PART_NUM_SHFT            12
#define WIDGET_MFG_NUM_SHFT             1
#define XWIDGET_PART_NUM(widgetid) (((widgetid) & WIDGET_PART_NUM) >> WIDGET_PART_NUM_SHFT)
#define XWIDGET_REV_NUM(widgetid) (((widgetid) & WIDGET_REV_NUM) >> WIDGET_REV_NUM_SHFT)
#define XWIDGET_MFG_NUM(widgetid) (((widgetid) & WIDGET_MFG_NUM) >> WIDGET_MFG_NUM_SHFT)
#define XWIDGET_PART_REV_NUM(widgetid) ((XWIDGET_PART_NUM(widgetid) << 4) | \
XWIDGET_REV_NUM(widgetid))
#define XWIDGET_PART_REV_NUM_REV(partrev) (partrev & 0xf)
struct widget_cfg;
struct xwidget_hwid;
struct xwidget_info;
