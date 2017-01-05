package org.apache.hadoop.mapred;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.net.URL;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableFactories;
import org.apache.hadoop.io.WritableFactory;
import org.apache.hadoop.util.StringInterner;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public class JobProfile implements Writable
