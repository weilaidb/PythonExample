package org.apache.hadoop.mapreduce.lib.db;
import java.sql.Connection;
import java.sql.Types;
import java.util.List;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.InputSplit;
import org.apache.hadoop.mapreduce.JobContext;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.mapreduce.lib.db.DBInputFormat.DBInputSplit;
import org.apache.hadoop.mapreduce.lib.db.DBInputFormat.NullDBWritable;
import org.apache.hadoop.mapreduce.lib.db.DataDrivenDBInputFormat.DataDrivenDBInputSplit;
import org.junit.Test;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
public class TestDbClasses
