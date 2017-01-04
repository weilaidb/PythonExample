#define __WINDFARM_H__
#define FIX32TOPRINT(f)	((f) >> 16),((((f) & 0xffff) * 1000) >> 16)
struct wf_control;
struct wf_control_ops ;
struct wf_control ;
#define WF_CONTROL_TYPE_GENERIC		0
#define WF_CONTROL_RPM_FAN		1
#define WF_CONTROL_PWM_FAN		2
extern int wf_register_control(struct wf_control *ct);
extern void wf_unregister_control(struct wf_control *ct);
extern struct wf_control * wf_find_control(const char *name);
extern int wf_get_control(struct wf_control *ct);
extern void wf_put_control(struct wf_control *ct);
static inline int wf_control_set_max(struct wf_control *ct)
static inline int wf_control_set_min(struct wf_control *ct)
struct wf_sensor;
struct wf_sensor_ops ;
struct wf_sensor ;
extern int wf_register_sensor(struct wf_sensor *sr);
extern void wf_unregister_sensor(struct wf_sensor *sr);
extern struct wf_sensor * wf_find_sensor(const char *name);
extern int wf_get_sensor(struct wf_sensor *sr);
extern void wf_put_sensor(struct wf_sensor *sr);
extern int wf_register_client(struct notifier_block *nb);
extern int wf_unregister_client(struct notifier_block *nb);
extern void wf_set_overtemp(void);
extern void wf_clear_overtemp(void);
extern int wf_is_overtemp(void);
#define WF_EVENT_NEW_CONTROL	0
#define WF_EVENT_NEW_SENSOR	1
#define WF_EVENT_OVERTEMP	2
#define WF_EVENT_NORMALTEMP	3
#define WF_EVENT_TICK		4
