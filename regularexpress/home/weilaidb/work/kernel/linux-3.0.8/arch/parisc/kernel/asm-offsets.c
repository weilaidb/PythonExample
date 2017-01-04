#define FRAME_SIZE	128
#define FRAME_SIZE	64
#define FRAME_ALIGN	64
#define align_frame(x,y) (((x)+FRAME_SIZE+(y)-1) - (((x)+(y)-1)%(y)))
int main(void)
