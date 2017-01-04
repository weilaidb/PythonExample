#define STV06XX_ST6422_H_
static int st6422_probe(struct sd *sd);
static int st6422_start(struct sd *sd);
static int st6422_init(struct sd *sd);
static int st6422_stop(struct sd *sd);
static void st6422_disconnect(struct sd *sd);
const struct stv06xx_sensor stv06xx_sensor_st6422 = ;
