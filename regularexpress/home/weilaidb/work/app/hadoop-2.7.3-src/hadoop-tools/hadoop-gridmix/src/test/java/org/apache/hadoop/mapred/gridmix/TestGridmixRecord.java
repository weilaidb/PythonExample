package org.apache.hadoop.mapred.gridmix;
import java.io.IOException;
import java.util.Arrays;
import java.util.Random;
import org.junit.Test;
import static org.junit.Assert.*;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.io.DataInputBuffer;
import org.apache.hadoop.io.DataOutputBuffer;
import org.apache.hadoop.io.WritableComparator;
import org.apache.hadoop.io.WritableUtils;
public class TestGridmixRecord
