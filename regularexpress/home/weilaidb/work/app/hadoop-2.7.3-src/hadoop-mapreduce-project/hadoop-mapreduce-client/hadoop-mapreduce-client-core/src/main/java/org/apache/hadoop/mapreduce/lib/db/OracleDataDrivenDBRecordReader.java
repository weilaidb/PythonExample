package org.apache.hadoop.mapreduce.lib.db;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class OracleDataDrivenDBRecordReader<T extends DBWritable>
extends DataDrivenDBRecordReader<T>
