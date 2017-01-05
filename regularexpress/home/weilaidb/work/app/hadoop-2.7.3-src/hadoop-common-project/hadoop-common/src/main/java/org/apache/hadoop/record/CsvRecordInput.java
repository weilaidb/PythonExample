package org.apache.hadoop.record;
import java.io.InputStreamReader;
import java.io.InputStream;
import java.io.IOException;
import java.io.PushbackReader;
import java.io.UnsupportedEncodingException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@Deprecated
@InterfaceAudience.Public
@InterfaceStability.Stable
public class CsvRecordInput implements RecordInput
private void throwExceptionOnError(String tag) throws IOException
private String readField(String tag) throws IOException  catch (IOException ex)
}
public CsvRecordInput(InputStream in)
@Override
public byte readByte(String tag) throws IOException
@Override
public boolean readBool(String tag) throws IOException
@Override
public int readInt(String tag) throws IOException
@Override
public long readLong(String tag) throws IOException
@Override
public float readFloat(String tag) throws IOException
@Override
public double readDouble(String tag) throws IOException
@Override
public String readString(String tag) throws IOException
@Override
public Buffer readBuffer(String tag) throws IOException
@Override
public void startRecord(String tag) throws IOException
@Override
public Index startVector(String tag) throws IOException
@Override
public Index startMap(String tag) throws IOException
}
