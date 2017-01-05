package org.apache.hadoop.record;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.WritableComparator;
import org.apache.hadoop.io.WritableUtils;
@Deprecated
@InterfaceAudience.Public
@InterfaceStability.Stable
public class Utils
static String fromCSVString(String s) throws IOException
return sb.toString();
}
static String toXMLBuffer(Buffer s)
static Buffer fromXMLBuffer(String s)
throws IOException
static String toCSVBuffer(Buffer buf)
static Buffer fromCSVBuffer(String s)
throws IOException
private static int utf8LenForCodePoint(final int cpt) throws IOException
private static final int B10 =    Integer.parseInt("10000000", 2);
private static final int B110 =   Integer.parseInt("11000000", 2);
private static final int B1110 =  Integer.parseInt("11100000", 2);
private static final int B11110 = Integer.parseInt("11110000", 2);
private static final int B11 =    Integer.parseInt("11000000", 2);
private static final int B111 =   Integer.parseInt("11100000", 2);
private static final int B1111 =  Integer.parseInt("11110000", 2);
private static final int B11111 = Integer.parseInt("11111000", 2);
private static int writeUtf8(int cpt, final byte[] bytes, final int offset)
throws IOException
static void toBinaryString(final DataOutput out, final String str)
throws IOException
static boolean isValidCodePoint(int cpt)
private static int utf8ToCodePoint(int b1, int b2, int b3, int b4)
private static int utf8ToCodePoint(int b1, int b2, int b3)
private static int utf8ToCodePoint(int b1, int b2)
private static void checkB10(int b) throws IOException
static String fromBinaryString(final DataInput din) throws IOException
public static float readFloat(byte[] bytes, int start)
public static double readDouble(byte[] bytes, int start)
public static long readVLong(byte[] bytes, int start) throws IOException
public static int readVInt(byte[] bytes, int start) throws IOException
public static long readVLong(DataInput in) throws IOException
public static int readVInt(DataInput in) throws IOException
public static int getVIntSize(long i)
public static void writeVLong(DataOutput stream, long i) throws IOException
public static void writeVInt(DataOutput stream, int i) throws IOException
public static int compareBytes(byte[] b1, int s1, int l1,
byte[] b2, int s2, int l2)
}
