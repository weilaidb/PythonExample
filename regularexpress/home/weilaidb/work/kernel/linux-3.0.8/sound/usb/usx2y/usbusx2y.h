#define USBUSX2Y_H
#define NRURBS	        2
#define URBS_AsyncSeq 10
#define URB_DataLen_AsyncSeq 32
struct snd_usX2Y_AsyncSeq ;
struct snd_usX2Y_urbSeq ;
struct usX2Ydev ;
struct snd_usX2Y_substream ;
#define usX2Y(c) ((struct usX2Ydev *)(c)->private_data)
int usX2Y_audio_create(struct snd_card *card);
int usX2Y_AsyncSeq04_init(struct usX2Ydev *usX2Y);
int usX2Y_In04_init(struct usX2Ydev *usX2Y);
#define NAME_ALLCAPS "US-X2Y"
