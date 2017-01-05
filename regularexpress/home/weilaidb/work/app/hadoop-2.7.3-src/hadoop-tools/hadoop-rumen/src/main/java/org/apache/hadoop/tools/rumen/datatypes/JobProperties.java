package org.apache.hadoop.tools.rumen.datatypes;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Properties;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.tools.rumen.datatypes.util.JobPropertyParser;
import org.apache.hadoop.tools.rumen.datatypes.util.MapReduceJobPropertiesParser;
import org.apache.hadoop.tools.rumen.state.StatePool;
import org.apache.hadoop.util.ReflectionUtils;
public class JobProperties implements AnonymizableDataType<Properties>
