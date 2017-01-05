package org.apache.hadoop.mapreduce.lib.db;
import java.io.IOException;
import java.sql.Connection;
import java.sql.SQLException;
import java.lang.reflect.Method;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class OracleDBRecordReader<T extends DBWritable> extends DBRecordReader<T>
