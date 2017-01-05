package org.apache.hadoop.mapred;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.util.StringInterner;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public abstract class TaskStatus implements Writable, Cloneable
