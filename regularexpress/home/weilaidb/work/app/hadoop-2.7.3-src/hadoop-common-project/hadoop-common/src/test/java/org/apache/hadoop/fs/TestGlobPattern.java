package org.apache.hadoop.fs;
import java.util.regex.PatternSyntaxException;
import org.junit.Test;
import static org.junit.Assert.*;
public class TestGlobPattern {
private void assertMatch(boolean yes, String glob, String...input)
private void shouldThrow(String... globs)
@Test public void testValidPatterns()
@Test public void testInvalidPatterns()
