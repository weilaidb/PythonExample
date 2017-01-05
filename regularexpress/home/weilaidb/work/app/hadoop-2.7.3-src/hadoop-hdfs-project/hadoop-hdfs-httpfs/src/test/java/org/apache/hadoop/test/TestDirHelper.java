package org.apache.hadoop.test;
import java.io.File;
import java.io.IOException;
import java.text.MessageFormat;
import java.util.concurrent.atomic.AtomicInteger;
import org.junit.Test;
import org.junit.rules.MethodRule;
import org.junit.runners.model.FrameworkMethod;
import org.junit.runners.model.Statement;
public class TestDirHelper implements MethodRule
