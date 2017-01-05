package org.apache.hadoop.tools;
import org.apache.hadoop.mapreduce.*;
import org.apache.hadoop.mapreduce.task.MapContextImpl;
import org.apache.hadoop.mapreduce.lib.map.WrappedMapper;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.conf.Configuration;
import java.util.List;
import java.util.ArrayList;
import java.io.IOException;
public class StubContext
