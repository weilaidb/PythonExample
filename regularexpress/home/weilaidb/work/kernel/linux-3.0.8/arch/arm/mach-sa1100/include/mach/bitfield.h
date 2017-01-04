#define __BITFIELD_H
#define UData(Data)	((unsigned long) (Data))
#define UData(Data)	(Data)
#define Fld(Size, Shft)	(((Size) << 16) + (Shft))
#define FSize(Field)	((Field) >> 16)
#define FShft(Field)	((Field) & 0x0000FFFF)
#define FMsk(Field)	(((UData (1) << FSize (Field)) - 1) << FShft (Field))
#define FAlnMsk(Field)	((UData (1) << FSize (Field)) - 1)
#define F1stBit(Field)	(UData (1) << FShft (Field))
#define FInsrt(Value, Field) \
(UData (Value) << FShft (Field))
#define FExtr(Data, Field) \
((UData (Data) >> FShft (Field)) & FAlnMsk (Field))
