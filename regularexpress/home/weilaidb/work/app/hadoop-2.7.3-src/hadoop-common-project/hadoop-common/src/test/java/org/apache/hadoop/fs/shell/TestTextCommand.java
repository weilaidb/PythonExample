package org.apache.hadoop.fs.shell;
import static org.junit.Assert.*;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.IOException;
import java.io.StringWriter;
import java.lang.reflect.Method;
import java.net.URI;
import org.apache.commons.io.IOUtils;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.junit.Test;
public class TestTextCommand
