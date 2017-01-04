#define __OV772X_H__
#define OV772X_FLAG_VFLIP	(1 << 0)
#define OV772X_FLAG_HFLIP	(1 << 1)
#define OV772X_FLAG_8BIT	(1 << 2)
struct ov772x_edge_ctrl ;
#define OV772X_MANUAL_EDGE_CTRL	0x80
#define EDGE_STRENGTH_MASK	0x1F
#define EDGE_THRESHOLD_MASK	0x0F
#define EDGE_UPPER_MASK		0xFF
#define EDGE_LOWER_MASK		0xFF
#define OV772X_AUTO_EDGECTRL(u, l)	\
#define OV772X_MANUAL_EDGECTRL(s, t)					\
struct ov772x_camera_info ;
