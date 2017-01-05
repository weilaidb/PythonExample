package org.apache.hadoop.mapreduce.lib.db;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.when;
import java.io.IOException;
import java.math.BigDecimal;
import java.sql.ResultSet;
import java.util.List;
import java.util.regex.Pattern;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.InputSplit;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.mapreduce.lib.db.DataDrivenDBInputFormat.DataDrivenDBInputSplit;
import org.junit.Before;
import org.junit.Test;
public class TestSplitters
