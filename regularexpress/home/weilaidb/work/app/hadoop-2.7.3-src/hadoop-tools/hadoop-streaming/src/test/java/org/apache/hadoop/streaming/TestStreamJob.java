package org.apache.hadoop.streaming;
import java.io.IOException;
import java.util.ArrayList;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.KeyValueTextInputFormat;
import org.apache.hadoop.mapred.SequenceFileInputFormat;
import org.junit.Test;
import static org.junit.Assert.*;
public class TestStreamJob
