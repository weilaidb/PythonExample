package org.apache.hadoop.mapreduce.lib.db;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.lib.db.DBInputFormat.NullDBWritable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class DBConfiguration
