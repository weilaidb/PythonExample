package org.apache.hadoop.util;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.PrintStream;
import java.lang.reflect.Constructor;
import java.util.ArrayList;
import java.util.List;
import java.util.Properties;
import java.util.Random;
import java.util.zip.CRC32;
import java.util.zip.Checksum;
import org.junit.Assert;
import org.junit.Test;
public class TestPureJavaCrc32
