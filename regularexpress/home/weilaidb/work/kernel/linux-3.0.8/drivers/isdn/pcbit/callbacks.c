ushort last_ref_num = 1;
void cb_out_1(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *cbdata)
void cb_out_2(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data)
void cb_in_1(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *cbdata)
void cb_in_2(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data)
void cb_in_3(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data)
void cb_disc_1(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data)
void cb_disc_2(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data)
void cb_disc_3(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data)
void cb_notdone(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data)
void cb_selp_1(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data)
void cb_open(struct pcbit_dev * dev, struct pcbit_chan* chan,
struct callb_data *data)
