#define STV06XX_SENSOR_H_
#define IS_1020(sd)	((sd)->sensor == &stv06xx_sensor_hdcs1020)
extern const struct stv06xx_sensor stv06xx_sensor_vv6410;
extern const struct stv06xx_sensor stv06xx_sensor_hdcs1x00;
extern const struct stv06xx_sensor stv06xx_sensor_hdcs1020;
extern const struct stv06xx_sensor stv06xx_sensor_pb0100;
extern const struct stv06xx_sensor stv06xx_sensor_st6422;
struct stv06xx_sensor ;
