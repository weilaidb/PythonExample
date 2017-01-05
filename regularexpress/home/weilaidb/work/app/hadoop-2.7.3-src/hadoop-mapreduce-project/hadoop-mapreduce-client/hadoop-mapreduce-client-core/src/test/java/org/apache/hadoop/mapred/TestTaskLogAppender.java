package org.apache.hadoop.mapred;
import java.io.StringWriter;
import java.io.Writer;
import org.apache.log4j.Category;
import org.apache.log4j.Layout;
import org.apache.log4j.Logger;
import org.apache.log4j.PatternLayout;
import org.apache.log4j.Priority;
import org.apache.log4j.spi.LoggingEvent;
import org.junit.Test;
import static org.junit.Assert.*;
public class TestTaskLogAppender
