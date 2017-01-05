package org.apache.hadoop.net.unix;
import java.io.Closeable;
import java.io.File;
import java.io.IOException;
import java.util.Random;
import org.apache.commons.io.FileUtils;
import org.apache.hadoop.fs.FileUtil;
public class TemporarySocketDirectory implements Closeable
