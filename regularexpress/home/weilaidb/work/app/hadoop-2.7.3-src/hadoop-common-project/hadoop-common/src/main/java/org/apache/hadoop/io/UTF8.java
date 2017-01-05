package org.apache.hadoop.io;
import java.io.IOException;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.UTFDataFormatException;
import org.apache.hadoop.util.StringUtils;
import org.apache.commons.logging.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@Deprecated
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Stable
public class UTF8 implements WritableComparable<UTF8>
