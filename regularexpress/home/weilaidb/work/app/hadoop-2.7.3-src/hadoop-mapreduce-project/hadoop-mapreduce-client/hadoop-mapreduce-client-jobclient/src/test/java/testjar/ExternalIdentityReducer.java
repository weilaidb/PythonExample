package testjar;
import java.io.IOException;
import java.util.Iterator;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.Reducer;
import org.apache.hadoop.mapred.Reporter;
public class ExternalIdentityReducer implements
Reducer<WritableComparable, Writable,
WritableComparable, Writable>
