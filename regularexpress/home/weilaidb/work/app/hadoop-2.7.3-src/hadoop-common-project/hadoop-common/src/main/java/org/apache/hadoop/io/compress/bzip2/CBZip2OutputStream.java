package org.apache.hadoop.io.compress.bzip2;
import java.io.OutputStream;
import java.io.IOException;
import org.apache.hadoop.io.IOUtils;
public class CBZip2OutputStream extends OutputStream implements BZip2Constants {
public static final int MIN_BLOCKSIZE = 1;
public static final int MAX_BLOCKSIZE = 9;
protected static final int SETMASK = (1 << 21);
protected static final int CLEARMASK = (~SETMASK);
protected static final int GREATER_ICOST = 15;
protected static final int LESSER_ICOST = 0;
protected static final int SMALL_THRESH = 20;
protected static final int DEPTH_THRESH = 10;
protected static final int WORK_FACTOR = 30;
protected static final int QSORT_STACK_SIZE = 1000;
private static final int[] INCS = ;
protected static void hbMakeCodeLengths(char[] len, int[] freq,
int alphaSize, int maxLen)
private static void hbMakeCodeLengths(final byte[] len, final int[] freq,
final Data dat, final int alphaSize, final int maxLen)
private int last;
private int origPtr;
private final int blockSize100k;
private boolean blockRandomised;
private int bsBuff;
private int bsLive;
private final CRC crc = new CRC();
private int nInUse;
private int nMTF;
private int workDone;
private int workLimit;
private boolean firstAttempt;
private int currentChar = -1;
private int runLength = 0;
private int blockCRC;
private int combinedCRC;
private int allowableBlockSize;
private CBZip2OutputStream.Data data;
private OutputStream out;
public static int chooseBlockSize(long inputLength)
public CBZip2OutputStream(final OutputStream out) throws IOException
public CBZip2OutputStream(final OutputStream out, final int blockSize)
throws IOException
@Override
public void write(final int b) throws IOException
private void writeRun() throws IOException
@Override
protected void finalize() throws Throwable
public void finish() throws IOException
@Override
public void close() throws IOException
@Override
public void flush() throws IOException
private void init() throws IOException
private void initBlock()
private void endBlock() throws IOException
private void endCompression() throws IOException
public final int getBlockSize()
@Override
public void write(final byte[] buf, int offs, final int len)
throws IOException
private void write0(int b) throws IOException
private static void hbAssignCodes(final int[] code, final byte[] length,
final int minLen, final int maxLen, final int alphaSize)
private void bsFinishedWithStream() throws IOException
private void bsW(final int n, final int v) throws IOException
private void bsPutUByte(final int c) throws IOException
private void bsPutInt(final int u) throws IOException
private void sendMTFValues() throws IOException
private void sendMTFValues0(final int nGroups, final int alphaSize)
private int sendMTFValues1(final int nGroups, final int alphaSize)
private void sendMTFValues2(final int nGroups, final int nSelectors)
private void sendMTFValues3(final int nGroups, final int alphaSize)
private void sendMTFValues4() throws IOException
private void sendMTFValues5(final int nGroups, final int nSelectors)
throws IOException
private void sendMTFValues6(final int nGroups, final int alphaSize)
throws IOException
private void sendMTFValues7(final int nSelectors) throws IOException
private void moveToFrontCodeAndSend() throws IOException
private boolean mainSimpleSort(final Data dataShadow, final int lo,
final int hi, final int d) {
final int bigN = hi - lo + 1;
if (bigN < 2)
int hp = 0;
while (INCS[hp] < bigN)
final int[] fmap = dataShadow.fmap;
final char[] quadrant = dataShadow.quadrant;
final byte[] block = dataShadow.block;
final int lastShadow = this.last;
final int lastPlus1 = lastShadow + 1;
final boolean firstAttemptShadow = this.firstAttempt;
final int workLimitShadow = this.workLimit;
int workDoneShadow = this.workDone;
HP: while (--hp >= 0) {
final int h = INCS[hp];
final int mj = lo + h - 1;
for (int i = lo + h; i <= hi;) {
for (int k = 3; (i <= hi) && (--k >= 0); i++) {
final int v = fmap[i];
final int vd = v + d;
int j = i;
boolean onceRunned = false;
int a = 0;
HAMMER: while (true) {
if (onceRunned)  else
a = fmap[j - h];
int i1 = a + d;
int i2 = vd;
if (block[i1 + 1] == block[i2 + 1]) {
if (block[i1 + 2] == block[i2 + 2]) {
if (block[i1 + 3] == block[i2 + 3])  else if ((block[i1 + 3] & 0xff) > (block[i2 + 3] & 0xff))  else
} else if ((block[i1 + 2] & 0xff) > (block[i2 + 2] & 0xff))  else
} else if ((block[i1 + 1] & 0xff) > (block[i2 + 1] & 0xff))  else
}
fmap[j] = v;
}
if (firstAttemptShadow && (i <= hi)
&& (workDoneShadow > workLimitShadow))
}
}
this.workDone = workDoneShadow;
return firstAttemptShadow && (workDoneShadow > workLimitShadow);
}
private static void vswap(int[] fmap, int p1, int p2, int n)
private static byte med3(byte a, byte b, byte c)
private void blockSort()
private void mainQSort3(final Data dataShadow, final int loSt,
final int hiSt, final int dSt)
private void mainSort()
private void randomiseBlock()
private void generateMTFValues()
private static final class Data extends Object
}
