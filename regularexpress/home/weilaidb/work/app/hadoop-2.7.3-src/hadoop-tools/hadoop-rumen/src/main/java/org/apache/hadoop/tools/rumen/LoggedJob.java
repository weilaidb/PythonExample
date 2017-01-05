package org.apache.hadoop.tools.rumen;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Properties;
import java.util.Set;
import java.util.TreeSet;
import org.apache.hadoop.mapreduce.JobID;
import org.apache.hadoop.tools.rumen.datatypes.*;
import org.codehaus.jackson.annotate.JsonAnySetter;
public class LoggedJob implements DeepCompare
