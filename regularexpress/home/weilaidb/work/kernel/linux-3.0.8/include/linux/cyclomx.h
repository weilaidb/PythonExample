#define	_CYCLOMX_H
struct cycx_device ;
void cycx_set_state(struct cycx_device *card, int state);
int cycx_x25_wan_init(struct cycx_device *card, wandev_conf_t *conf);
