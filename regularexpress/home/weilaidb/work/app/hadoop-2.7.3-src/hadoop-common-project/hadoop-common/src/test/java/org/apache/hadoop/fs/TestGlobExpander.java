package org.apache.hadoop.fs;
import java.io.IOException;
import java.util.List;
import junit.framework.TestCase;
public class TestGlobExpander extends TestCase ");
checkExpansionIsIdentical("
public void testExpansion() throws IOException ", "/}a/b");
checkExpansion("ps", "pa/bs", "pc/ds");
checkExpansion("", "a/b", "c/d", "");
checkExpansion("", "a/b", "c/d");
checkExpansion("/", "/b", "/c/d", "/e/f");
checkExpansion("/", "/c/d");
}
private void checkExpansionIsIdentical(String filePattern) throws IOException
private void checkExpansion(String filePattern, String... expectedExpansions)
throws IOException
}
