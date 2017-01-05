package org.apache.hadoop;
import java.io.IOException;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Mapper;
public class FailingMapper extends Mapper<Text, Text, Text, Text>
