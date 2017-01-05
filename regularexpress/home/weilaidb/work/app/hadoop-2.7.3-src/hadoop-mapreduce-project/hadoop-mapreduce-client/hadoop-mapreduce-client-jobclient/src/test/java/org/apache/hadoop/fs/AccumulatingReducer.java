package org.apache.hadoop.fs;
import java.io.IOException;
import java.util.Iterator;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.*;
@SuppressWarnings("deprecation")
public class AccumulatingReducer extends MapReduceBase
implements Reducer<Text, Text, Text, Text>
