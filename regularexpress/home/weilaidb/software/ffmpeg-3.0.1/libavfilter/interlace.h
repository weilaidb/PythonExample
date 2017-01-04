#define AVFILTER_INTERLACE_H
enum ScanMode ;
enum FieldType ;
typedef struct InterlaceContext  InterlaceContext;
void ff_interlace_init_x86(InterlaceContext *interlace);
