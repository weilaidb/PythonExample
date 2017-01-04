#define CALLBACKS_H
extern void cb_out_1(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data);
extern void cb_out_2(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data);
extern void cb_in_1(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data);
extern void cb_in_2(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data);
extern void cb_in_3(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data);
extern void cb_disc_1(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data);
extern void cb_disc_2(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data);
extern void cb_disc_3(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data);
extern void cb_notdone(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data);
extern void cb_selp_1(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data);
extern void cb_open(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data);
