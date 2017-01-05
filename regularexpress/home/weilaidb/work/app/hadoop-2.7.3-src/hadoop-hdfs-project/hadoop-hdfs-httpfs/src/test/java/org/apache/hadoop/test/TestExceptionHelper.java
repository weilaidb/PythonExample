package org.apache.hadoop.test;
import static org.junit.Assert.fail;
import java.util.regex.Pattern;
import org.junit.Test;
import org.junit.rules.MethodRule;
import org.junit.runners.model.FrameworkMethod;
import org.junit.runners.model.Statement;
public class TestExceptionHelper implements MethodRule
