package org.apache.hadoop.streaming.io;
import java.io.ByteArrayInputStream;
import java.io.DataInput;
import java.io.DataInputStream;
import java.io.IOException;
import org.junit.Assert;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.streaming.PipeMapRed;
import org.apache.hadoop.streaming.PipeMapper;
import org.junit.Test;
public class TestKeyOnlyTextOutputReader
