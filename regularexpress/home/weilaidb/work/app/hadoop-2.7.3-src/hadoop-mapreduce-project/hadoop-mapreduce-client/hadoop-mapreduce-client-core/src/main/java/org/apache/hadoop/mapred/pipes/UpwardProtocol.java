package org.apache.hadoop.mapred.pipes;
import java.io.IOException;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
interface UpwardProtocol<K extends WritableComparable, V extends Writable>
