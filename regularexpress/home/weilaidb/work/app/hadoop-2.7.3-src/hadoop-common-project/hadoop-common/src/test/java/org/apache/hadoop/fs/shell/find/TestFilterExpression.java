package org.apache.hadoop.fs.shell.find;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import java.io.IOException;
import java.util.Deque;
import org.apache.hadoop.fs.shell.PathData;
import org.junit.Before;
import org.junit.Rule;
import org.junit.rules.Timeout;
import org.junit.Test;
public class TestFilterExpression
