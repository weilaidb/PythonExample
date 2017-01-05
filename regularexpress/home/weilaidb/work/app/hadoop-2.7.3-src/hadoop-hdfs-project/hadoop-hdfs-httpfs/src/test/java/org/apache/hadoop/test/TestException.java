package org.apache.hadoop.test;
import java.lang.annotation.Retention;
import java.lang.annotation.Target;
@Retention(java.lang.annotation.RetentionPolicy.RUNTIME)
@Target(java.lang.annotation.ElementType.METHOD)
public @interface TestException
