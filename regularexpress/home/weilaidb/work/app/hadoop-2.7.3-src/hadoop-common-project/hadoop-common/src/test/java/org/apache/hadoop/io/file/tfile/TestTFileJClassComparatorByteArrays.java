package org.apache.hadoop.io.file.tfile;
import java.io.IOException;
import java.io.Serializable;
import org.apache.hadoop.io.RawComparator;
import org.apache.hadoop.io.WritableComparator;
public class TestTFileJClassComparatorByteArrays extends TestTFileByteArrays
class MyComparator implements RawComparator<byte[]>, Serializable
