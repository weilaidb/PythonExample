package org.apache.hadoop.streaming;
import java.net.URL;
import java.net.URLClassLoader;
import java.net.MalformedURLException;
import org.apache.hadoop.util.JarFinder;
import org.junit.Test;
import static org.junit.Assert.*;
import org.apache.hadoop.conf.Configuration;
public class TestClassWithNoPackage
